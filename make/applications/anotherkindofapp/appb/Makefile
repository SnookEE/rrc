
REL_TOPDIR := ../../..

#
# Object directory for intermediary files.
#
OBJDIR = ./obj

EXEC_TARG		= $(OBJDIR)/appb

#
# Additional module specific FLAGS should be defined here
# and must be incorporated into the EXTRA_USER_CFLAGS and
# EXTRA_USER_LFLAGS
#

# Application specific include directories other than the
# local 'include' files
EXTRA_USER_CFLAGS	= 

USER_LDFLAGS = 
USER_LIBS    = -lliba -llibb

#
# Modify this if wild card expansion is not required.
#
# Example: To compile only files a.c abd b.c define
# OBJS as follows:
#
# OBJS := a.o b.o
#
BI_OBJS	:= $(patsubst %.c, $(OBJDIR)/%.o, $(wildcard *.c))

#
# Create depedency file on local headers, set to -MMD
#
MKDPND  := -MMD

#
# Get the rules from Rules.make in project source tree
#
include $(REL_TOPDIR)/Rules.make

.DEFAULT_GOAL := all

all: $(EXEC_TARG) 

$(BI_OBJS): | $(OBJDIR)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

-include $(wildcard $(OBJDIR)/*.d)

install:
	@cp -fvp $(EXEC_TARG) $(APP_INSTALL_DIR)

clean:
	@rm -rf $(BI_OBJS)
	@rm -rf $(EXEC_TARG)
	@rm -rf $(OBJDIR)/*.d
	@if [ -d $(OBJDIR) ]; then rmdir --ignore-fail-on-non-empty $(OBJDIR); fi

