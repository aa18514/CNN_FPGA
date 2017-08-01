# define USER_NO_DIGITS macro (username without digits, as required by Max
# simulation tools)

# tjt: define constants to capture empty string and space character
EMPTY:=
SPACE:=$(EMPTY) $(EMPTY)

# tjt: function to convert digits to words
# Maxeler does not allow digits in simulation IDs
define digitToWords
  $(subst 0,_zero,\
  $(subst 1,_one,\
  $(subst 2,_two,\
  $(subst 3,_three,\
  $(subst 4,_four,\
  $(subst 5,_five,\
  $(subst 6,_six, \
  $(subst 7,_seven,\
  $(subst 8,_eight,\
  $(subst 9,_nine,\
  $1))))))))))
endef


# replace digits with words and remove spaces from UserID
# see:
# http://sunsite.ualberta.ca/Documentation/Gnu/make-3.79/html_chapter/make_8.html
USER_NO_DIGITS := $(subst $(SPACE),$(EMPTY),$(call digitToWords, ${USER}))


