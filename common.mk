# Makefile for Maxeler designs
# common parts only
# Brittle 2011 modified by Tim 2011-2
# for Maxeler Platform Ver 2011.2.1 and later
# should also work with earlier and later compilers


# define USER_NO_DIGITS macro (username without digits, as required by Max
# simulation tools)
include "user_no_digits.mk"


# some sensible defaults: tools, package name
# these prevent errors when user forgets to set them
ifndef PKG_NAME
PKG_NAME:=${PRJ}_pkg
endif

ifndef CC
CC:=gcc
endif

ifndef JAVAC
JAVAC:=maxjc
endif

ifndef JAVAH
JAVAH:=javah
endif

ifndef JAVA
JAVA:=maxJavaRun
endif

ifndef MAXFILEC
MAXFILEC:=maxfilecompile
endif

ifndef SIM_BUILDER
SIM_BUILDER:=SimBuilder
endif

ifndef HW_BUILDER
HW_BUILDER:=HWBuilder
endif


# define default commands to simulate
# user can override these by defining this macro before including this file
# note these must all be commented out, or they will run automatically 
# in make sim
ifndef SIM_COMMANDS
define SIM_COMMANDS
	# maxcompilersim -n ${USER_NO_DIGITS} -c3424 restart
	# LD_PRELOAD=${MAXELEROSDIR}/lib/libmaxeleros.so ./${PRJ}_SIM "${USER_NO_DIGITS}0:${USER_NO_DIGITS}"
	# maxcompilersim -n ${USER_NO_DIGITS} -c3424 stop
endef
endif

# default commands to run on hardware
# see comments for SIM_COMMANDS
ifndef HW_COMMANDS
define HW_COMMANDS
	# ./${PRJ}_HW
endef
endif




.PHONY: all
all: usage


# OLD macro for building max v1 targets
# single macro to build software or hardware
# supported values of $1 are SIM and HW
define build_max_v1

#$(eval $1_sources = ${DESIGNFILES} src/${$1_BUILDER}.java)
# gen variables based on argument 1
# variables not strictly necessary but may help debugging
# $1_sources = ${DESIGNFILES} src/$${$1_BUILDER}.java
$1_sources = ${DESIGNFILES}
$1_max = $${$1_BUILDER}/results/$${$1_BUILDER}.max

# build maxfile
# delay reading variables until after they have been assigned using $$
# Similarly, use $$^ instead of $^
# Using $^ reads the macro value before the variable assignments have happened,
# so the value is blank (uninitialized variable)
$$($1_max) : $$($1_sources)
	echo "$1_sources = " $$($1_sources)
	echo "$1_max = " $$($1_max)
	${JAVAC} ${MAX_JFLAGS}  $$+
	MAXAPPJCP=. ${JAVA} ${PKG_NAME}.$${$1_BUILDER}

$${$1_BUILDER}.o: $${$1_max}
	${MAXFILEC} $${$1_max} $${$1_BUILDER}.o ${PRJ}

# note use of $$< and $$@ not $< and $@, for same reasons as above
# note argument 1 is always defined in the C file
${PRJ}_$1.o: src/${PRJ}.c
	${CC} $$< ${CFLAGS} -D__$1__ -DDESIGN_NAME=${PRJ} -c -o $$@

${PRJ}_$1: $${$1_BUILDER}.o ${PRJ}_$1.o
	${CC} -o ${PRJ}_$1 ${PRJ}_$1.o $${$1_BUILDER}.o ${LFLAGS}
	# use the following commands to run $1
	$$($1_COMMANDS)
	# or just type make run$1

# build the executable
.PHONY: $1
$1: ${PRJ}_$1

# run the executable
# use patsubst to strip the prefixing '#'
# note use of $ instead of $$, otherwise patsubst does nothing
.PHONY : run$1
run$1:
	$(patsubst #,,$($1_COMMANDS))
	echo $1 "finished OK!"

# clean target
.PHONY : clean$1
clean$1:
	rm -f ${PRJ}_$1
# add as prerequisite of global clean target
clean: clean$1

.PHONY : realclean$1
realclean$1:
	rm -f ${PRJ}_$1.o
	rm -fr $$($1_BUILDER)
	rm -f $$($1_BUILDER).o
# add as prerequisite of global realclean target
realclean: realclean$1

endef   # build_max_v1


# ---- Simulation ----

# must use eval because build_max expands to multiple lines
# see Mecklenburg, "managing projects with GNU make", p87
#$(eval $(call build_max_v1,SIM))

# ---- Hardware ----

# see above
#$(eval $(call build_max_v1,HW))


# default build target simply prints usage
# using '@' suppresses auto-echoing
.PHONY : usage
usage:
	@echo "USAGE:"
	@echo "   make SIM       - build simulation"
	@echo "   make HW        - build hardware"
	@echo "   make runSIM    - run simulation"
	@echo "   make runHW     - run hardware"
	@echo "   make clean     - clean programs"
	@echo "   make cleanSIM  - clean simulation programs"
	@echo "   make cleanHW   - clean hardware programs"
	@echo "   make realclean - remove everything except source"
	@echo "have fun!"


# ---- clean ----

.PHONY : clean
clean:

.PHONY : realclean
realclean: clean
	rm -fr ${PKG_NAME} ${SIM_BUILDER} ${HW_BUILDER}

# old files to remove that were in clean but are no longer needed
#rm -f ${SIM_BUILDER}.o ${HW_BUILDER}.o ${PRJ}.o ${PRJ}_sim.o
