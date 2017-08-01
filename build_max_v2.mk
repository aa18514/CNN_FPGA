# build Maxeler v2 designs

.PHONY: all
all: usage


# tool settings
CC:=gcc
CXX:=g++
SLICCOMPILE:=${MAXCOMPILERDIR}/bin/sliccompile
MAXJAVARUN:=maxJavaRun
JAVAC:=maxjc
JAVA:=maxJavaRun
MAX_RENDER_GRAPHS:=maxRenderGraphs
MAX_COMPILER_SIM:=maxcompilersim
MAX_DEBUG:=maxdebug


# flags for MaxJ and C compilers and linker
MAXJ_FLAGS:=-cp ${MAXCOMPILERDIR}/lib/MaxCompiler.jar:/mnt/data/cccad3/aa18514/protobuf-java-3.2.0.jar -1.6
COMMON_C_CXX_FLAGS:=-g -O3 -Wall -Wextra -fmessage-length=0 \
       -I ${INC_DIR} \
	   -I. \
	   -I${MAXELEROSDIR}/include \
	   -I${MAXCOMPILERDIR}/include/slic \
	   -D_XOPEN_SOURCE=600  -DBUILDNAME_MAXFILE_1=${PRJ} -DMAXFILE_1="${PRJ}.max"  
CFLAGS:= ${COMMON_C_CXX_FLAGS}   -std=c++11
CXXFLAGS:= ${COMMON_C_CXX_FLAGS}
LFLAGS:=-L${MAXCOMPILERDIR}/lib \
        -L${MAXELEROSDIR}/lib \
		-lslic -lmaxeleros -lm -lpthread

# include macro defining USER_NO_DIGITS, needed for Maxeler tools
include user_no_digits.mk

### per-target settings for simulation (SIM) and hardware (HW)
# must be defined before including the file

# simulation settings
# note it seems essential to export SLIC_CONF, LD_LIBRARY_PATH and
# LD_PRELOAD before running the simulation, or it will mysteriously segfault
SIM_DIR:=SIM
SIM_INCDIR:=${SIM_DIR}/include
SIM_CFLAGS:= -I ${SIM_INCDIR}  -D__SIM__
#SIM_DFEMODEL:=MAX3424A
SIM_TARGET:=DFE_SIM
SIM_RESTART_CMD:=${MAX_COMPILER_SIM} -n ${USER_NO_DIGITS} -c ${SIM_DFEMODEL}   restart
SIM_RUNENV_CMD:=export SLIC_CONF="use_simulation=${USER_NO_DIGITS}" ; \
                export LD_LIBRARY_PATH=${MAXELEROSDIR}/lib/:${LD_LIBRARY_PATH};\
				export LD_PRELOAD=${MAXELEROSDIR}/lib/libmaxeleros.so
SIM_STOP_CMD:=${MAX_COMPILER_SIM} -n ${USER_NO_DIGITS} -c ${SIM_DFEMODEL}   stop
SIM_PORT_NAME:=${USER_NO_DIGITS}0:${USER_NO_DIGITS}
SIM_EXTRA_ARGS:=

# HDL simulation settings -- EXPERIMENTAL ONLY!!!
HDL_SIM_DIR:=HDL_SIM
HDL_SIM_INCDIR:=${HDL_SIM_DIR}/include
HDL_SIM_CFLAGS:= -I ${HDL_SIM_INCDIR}  -D__HDL_SIM__
#HDL_SIM_DFEMODEL:=MAX3424A
HDL_SIM_TARGET:=HDL_SIM
HDL_SIM_RESTART_CMD:=
HDL_SIM_RUNENV_CMD:=SLIC_CONF="use_simulation=${USER_NO_DIGITS}"
HDL_SIM_STOP_CMD:=
HDL_SIM_PORT_NAME:=${USER_NO_DIGITS}0:${USER_NO_DIGITS}
HDL_SIM_EXTRA_ARGS:=

# hardware settings
HW_DIR:=HW
HW_INCDIR:=-cp ${HW_DIR}/include:/mnt/data/cccad3/aa18514/protobuf-java-3.2.0.jar
HW_CFLAGS:= -I ${HW_INCDIR}  -D__HW__
#HW_DFEMODEL:=MAX3424A
HW_TARGET:=DFE
HW_RESTART_CMD:=
HW_RUNENV_CMD:=SLIC_CONF="use_simulation=${USER_NO_DIGITS}"
HW_STOP_CMD:=
HW_PORT_NAME:=${USER_NO_DIGITS}0:${USER_NO_DIGITS}
HW_EXTRA_ARGS:=




# Check that given variables are set and all have non-empty values,
# die with an error otherwise.
# copied from:
# http://stackoverflow.com/questions/10858261/abort-makefile-if-variable-not-set#
# Params:
#   1. Variable name(s) to test.
#   2. (optional) Error message to print.

check_defined = \
    $(foreach 1,$1,$(__check_defined))
__check_defined = \
    $(if $(value $1),, \
      $(error Undefined $1$(if $(value 2), ($(strip $2)))))
# usage: $(call check_defined, MY_FLAG)
# usage: $(call check_defined, OUT_DIR, your message here)

# uncomment to test check_defined
#$(call check_defined, UNDEFINED)

# check key definitions (cause bugs in build if not defined)
$(call check_defined, PRJ, Project ID)
$(call check_defined, PKG_NAME, Java package name)
$(call check_defined, EXE_NAME, Executable name)
$(call check_defined, MAIN_CLASS_NAME, Java main class name)
$(call check_defined, MAIN_SW_FILE, Main software file)

$(call check_defined, INC_DIR, General include directory)
$(call check_defined, SW_SRC_DIR, Include directory for software)
$(call check_defined, HW_SRC_DIR, Include directory for hardware)

$(call check_defined, HW_SRCS, Hardware sources)
$(call check_defined, SW_SRC_NAMES, Software source files)
$(call check_defined, SW_SRCS, Software sources)
$(call check_defined, HW_OBJS, Objects corresponding to hardware kernels)

# check key definitions of tool names are defined
$(call check_defined, CC)
$(call check_defined, CXX)
$(call check_defined, SLICCOMPILE)
$(call check_defined, MAXJAVARUN)
$(call check_defined, JAVAC)
$(call check_defined, JAVA)
$(call check_defined, MAX_RENDER_GRAPHS)
$(call check_defined, MAX_COMPILER_SIM)
$(call check_defined, MAX_DEBUG)





# NEW macro to build max v2 designs
#
# macro to build commands for building Maxeler v2 designs
#
# parameters:
#   1. target (SIM or HW)
define gen_build_max_v2

.PHONY: $1 run$1 start$1 stop$1 clean$1 realclean$1 help$1


# set variables for subdir names
$1_BINDIR:=$${$1_DIR}/bin
$1_OBJDIR:=$${$1_DIR}/obj
$1_INCDIR:=$${$1_DIR}/include
$1_MAXFILESDIR:=$${$1_DIR}/maxfiles
$1_CLASSESDIR:=$${$1_DIR}/classes

# software objects and dependency files
$1_OBJS:= $(addprefix $${$1_OBJDIR}/,$(addsuffix .o,$(basename ${SW_SRC_NAMES})))
$1_DEPS:= $(addprefix $${$1_OBJDIR}/,$(addsuffix .dep,$(basename ${SW_SRC_NAMES})))

# HW objects
$1_HW_OBJS:= $(addprefix $${$1_OBJDIR}/,${HW_OBJS})

# default target is application
$1: $${$1_BINDIR}/${EXE_NAME}





### build commands ######################################################


# add extra dependency from all SW objs to all HW objs
# this ensures SW is always built after HW
$${$1_OBJS}: $${$1_HW_OBJS}
#$${$1_OBJDIR}/${PRJ}.o: $${$1_INCDIR}/${PRJ}.h



# build maxfile by compiling and running the .java files (hardware sources)
$${$1_MAXFILESDIR}/${PRJ}.max : ${HW_SRCS}
	# -d sets output directory
	${JAVAC}  ${MAXJ_FLAGS}  -d $${$1_CLASSESDIR}  ${HW_SRCS}
	# MAXSOURCEDIRS sets source location (used for graphs?)
	# MAXAPPJCP sets classpath for compiled max classes
	# MAXCOMPILER_BUILD_DIR sets output dir
	MAXSOURCEDIRS=./${HW_SRC_DIR} \
	   MAXCOMPILER_BUILD_DIR=$${$1_MAXFILESDIR} \
	   MAXAPPJCP=$${$1_CLASSESDIR}  \
	   ${MAXJAVARUN}   ${PKG_NAME}.${MAIN_CLASS_NAME}  \
	   DFEModel=$${$1_DFEMODEL}  target=$${$1_TARGET}  maxFileName=${PRJ}
	# copy max and header files from build dir
	# -f to force copy even if dest file can't be opened
	cp -f $${$1_MAXFILESDIR}/${PRJ}_$${$1_DFEMODEL}_$${$1_TARGET}/results/${PRJ}.max  $${$1_MAXFILESDIR}/


$${$1_INCDIR}:
	mkdir -p $${$1_INCDIR}

# header also generated by compiling HW sources
# note DO NOT add as additional target of .max generating rule
# otherwise the .max rule may run twice (with -j 2)
$${$1_INCDIR}/${PRJ}.h : $${$1_INCDIR}  $${$1_MAXFILESDIR}/${PRJ}.max
	cp -f $${$1_MAXFILESDIR}/${PRJ}_$${$1_DFEMODEL}_$${$1_TARGET}/results/${PRJ}.h  $${$1_INCDIR}/

# extra dependency of SW file with main() on SLIC-generated header
# main program depends on header file generated by SLIC
$${$1_OBJDIR}/${MAIN_SW_FILE}.o: $${$1_INCDIR}/${PRJ}.h


# build objects (.o) and dependencies (.dep) from source
# note this builds everything in $SRC_DIR, not just $SRCS
# each object foo.o has corresponding makefile fragment foo.dep, included later
# -MM = build dependency makefile fragment
# -MT = change dependency target name (so it includes path and name)
#     : format: -MT <new-target-name>
# note use of $$@ and $$< instead of $@ and $< to avoid expanding too early
# note DO NOT depend on OBJDIR, as that pollutes the prerequisites
$${$1_OBJDIR}/%.o: ${SW_SRC_DIR}/%.c 
	# make OBJDIR if not there
	if [ ! -x $${$1_OBJDIR} ] ; then mkdir -p $${$1_OBJDIR} ; fi
	$(CC) ${CFLAGS} $${$1_CFLAGS} -o $$@ -c $$<
	$(CC) ${CFLAGS} $${$1_CFLAGS} -MM -MT $$@  $$<  > $$(@:.o=.dep)

# as above for C++ files
$${$1_OBJDIR}/%.o: ${SW_SRC_DIR}/%.cpp 
	# make OBJDIR if not there
	if [ ! -x $${$1_OBJDIR} ] ; then mkdir -p $${$1_OBJDIR} ; fi
	$(CXX) ${CXXFLAGS} $${$1_CXXFLAGS} -o $$@ -c $$<
	$(CXX) ${CXXFLAGS} $${$1_CXXFLAGS} -MM -MT $$@  $$<  > $$(@:.o=.dep)



# Use SLIC compiler to build object from maxfile
$${$1_OBJDIR}/slic_${PRJ}.o: $${$1_MAXFILESDIR}/${PRJ}.max
	# make OBJDIR if not there
	if [ ! -x $${$1_OBJDIR} ] ; then mkdir -p $${$1_OBJDIR} ; fi
	${SLICCOMPILE} $${$1_MAXFILESDIR}/${PRJ}.max $${$1_OBJDIR}/slic_${PRJ}.o

# use maxfilecompile to build object from maxfile
$${$1_OBJDIR}/max_${PRJ}.o: $${$1_MAXFILESDIR}/${PRJ}.max
	# make OBJDIR if not there
	if [ ! -x $${$1_OBJDIR} ] ; then mkdir -p $${$1_OBJDIR} ; fi
	${MAXFILECOMPILE} $${$1_MAXFILESDIR}/${PRJ}.max $${$1_OBJDIR}/max_${PRJ}.o ${PRJ}


# build application
# note use of $$^ and $$@
$${$1_BINDIR}/${EXE_NAME}:  $${$1_OBJS} $${$1_HW_OBJS}
	# make BINDIR if not there
	if [ ! -x $${$1_BINDIR} ] ; then mkdir -p $${$1_BINDIR} ; fi
	$(CXX) $$^  ${LFLAGS}   -o $$@

# include the generated dependency files
-include $${$1_DEPS}



### build graphs ###############################################


# build max graphs
# only build initial and final graphs
# note: this assumes already built, but does not have build as a dependency
.PHONY : graphs$1
graphs$1:
	${MAX_RENDER_GRAPHS}  $${$1_MAXFILESDIR}/${PRJ}_$${$1_DFEMODEL}_$${$1_TARGET}  Manager_${PRJ}


### debug #######################################################

# run debug commands
# note: assumes stalled simulation is already running
# may need to set LD_PRELOAD to point to simulation libmaxeleros.so
# (this should be done by restart$1)
# also debugHW probably has no meaning
# -d <device>     set device name
# DEBUG_EXTRA_ARGS allows graph generation etc.
.PHONY : debug$1
debug$1:
	# NOTE: assumes stalled simulation already running
	# port name ($1_PORT_NAME)      = '$${$1_PORT_NAME}'
	# extra args (DEBUG_EXTRA_ARGS) = '${DEBUG_EXTRA_ARGS}'
	${MAX_DEBUG}   -d $${$1_PORT_NAME}  ${DEBUG_EXTRA_ARGS}  $${$1_MAXFILESDIR}/${PRJ}.max 

### run commands ################################################

# start/stop $1: 
restart$1:
	$${$1_RESTART_CMD}

stop$1:
	$${$1_STOP_CMD}

mid$1: restart$1
	$${$1_RUNENV_CMD} ; $${$1_BINDIR}/${EXE_NAME}  $${$1_EXTRA_ARGS}  ${EXTRA_ARGS}

# use recursive make to avoid repetition
# user can supply extra command-line arguments via EXTRA_ARGS
run$1: mid$1
	# EXTRA_ARGS = '${EXTRA_ARGS}'
	# $1_EXTRA_ARGS = '$${$1_EXTRA_ARGS}'
	$(MAKE) stop$1

### cleanup #####################################################

clean$1:
	[ "$${$1_OBJDIR}" != "" ] && $(RM) "$${$1_OBJDIR}"/*.o
	[ "$${$1_BINDIR}" != "" ] && $(RM) "$${$1_BINDIR}"/"${EXE_NAME}"

# realclean cleans all generated files,
# returns project to initial state
# slightly redundant to rm subdirs then rmdir the build dir
# use test to avoid running rm -rf /* (i.e. variable blank or undefined)
realclean$1: clean$1
	[ "$${$1_OBJDIR}" != "" ] && $(RM) -r "$${$1_OBJDIR}"/*
	[ "$${$1_MAXFILESDIR}" != "" ] && $(RM) -r "$${$1_MAXFILESDIR}"/*
	[ "$${$1_INCDIR}" != "" ] && $(RM) -r "$${$1_INCDIR}"/*
	[ "$${$1_CLASSESDIR}" != "" ] && $(RM) -r "$${$1_CLASSESDIR}"/*
	[ "$${$1_DIR}" != "" ] && $(RM) -r "$${$1_DIR}/"*
	# remove the entire build directory
	[ "$${$1_DIR}" != "" ] && $(RM) -r $${$1_DIR}

# add as dependencies to global clean and realclean rules
clean: clean$1

realclean: realclean$1

### help message ################################################
# @echo supresses command echoing, so text is only printed once
help$1:
	@echo "     $1       - build design"
	@echo "     run$1    - run design (equivalent to start$1 ; ... ; stop$1)"
	@echo "     start$1  - start simulation / optional preamble to running HW"
	@echo "     stop$1   - stop simulation / optional postamble to running HW"
	@echo "     graphs$1 - build max graphs (must build first)"
	@echo "     debug$1  - debug (stalled simulation should be running)"
	@echo "     clean$1  - clean intermediate files"
	@echo "     realclean$1  - clean all files, including configs (.max files)"


endef   # gen_cmds -------------------------------------------------

# list of targets to run the macro on
# HDL_SIM is EXPERIMENTAL ONLY!!!
BUILD_MAX_V2_TARGETS:=SIM   HW   HDL_SIM

# call the macro for simulation (SIM) and hardware (HW) targets
$(foreach i,${BUILD_MAX_V2_TARGETS},$(eval $(call gen_build_max_v2,$(i))))
## simulation:
#$(eval $(call gen_build_max_v2,SIM))
## hardware:
#$(eval $(call gen_build_max_v2,HW))


# subtargets: names of directories, objects, etc.
BUILD_MAX_V2_SUBTARGETS:= DIR OBJS DEPS BINDIR OBJDIR INCDIR MAXFILESDIR \
                          CLASSESDIR HW_OBJS

#internal: check key variables are defined
# causes bugs in build if not defined
# note: can't do this in macro above as it will run immediately, at reading
# time, before anything has been defined -- even if using eval
$(foreach i,${BUILD_MAX_V2_TARGETS},$(foreach j,${BUILD_MAX_V2_SUBTARGETS},$(eval $(call check_defined, $(i)_$(j)))))


# default build target simply prints usage
# using '@' suppresses auto-echoing
.PHONY : usage
usage:
	@echo "USAGE:"
	@echo "   make           - print this message"
	@echo "   make SIM       - build simulation"
	@echo "   make runSIM    - run simulation"
	@echo "   make HW        - build hardware design"
	@echo "   make runHW     - run hardware design"
	@echo "   make clean     - clean programs"
	@echo "   make realclean - remove almost everything, including maxfiles"
	@echo "have fun!"

.PHONY : help
help: usage


# ---- clean ----

.PHONY : clean

.PHONY : realclean
realclean: clean

# distclean is an alias of realclean
.PHONY : distclean
distclean: realclean


# dependency generator from Max makefile
#	cc -g -O3 -Wall -Wextra -fmessage-length=0 -I ../RunRules/Simulation/include -I. -I/vol/cc/opt/maxeler/maxcompiler-2013.2.2/lib/maxeleros-sim/include -I/vol/cc/opt/maxeler/maxcompiler-2013.2.2/include/slic -D_XOPEN_SOURCE=600  -std=c99 -DBUILDNAME_MAXFILE_1=MovingAverageSimple -DMAXFILE_1="MovingAverageSimple.max"  -MM -MP -MT "../RunRules/Simulation/objects/MovingAverageSimpleCpuCode.o" "MovingAverageSimpleCpuCode.c" > "../RunRules/Simulation/objects/MovingAverageSimpleCpuCode.d"
