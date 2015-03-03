
REL_TOPDIR := ../..

#
# Object directory for intermediary files.
#
OBJDIR = ./obj

#
# Library Files
#
LIB_VERSION 	= .$(shell grep VERSION_NUMBER version.h |cut -d'"' -f2) 

SO_TARGET	= $(OBJDIR)/libb.so
L_TARGET	= $(OBJDIR)/libb.a

#
# Additional module specific FLAGS should be defined here
# and must be incorporated into the EXTRA_USER_CFLAGS and
# EXTRA_USER_LFLAGS
#
EXTRA_USER_CFLAGS	= -g -fPIC

EXTRA_USER_LFLAGS	= -lpthread

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
# Library Targets. Use SO_TARGET & L_TARGET as required
#
BUILD_LIBS = $(SO_TARGET)$(LIB_VERSION)

include $(REL_TOPDIR)/Rules.make

.DEFAULT_GOAL := all

all: $(BUILD_LIBS) 

$(BI_OBJS): | $(OBJDIR)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

-include $(wildcard $(OBJDIR)/*.d)

install:
	@cp -pvf $(SO_TARGET)$(LIB_VERSION) $(LIB_INSTALL_DIR)/`basename $(SO_TARGET)$(LIB_VERSION)`
	@ln -sf $(LIB_INSTALL_DIR)/`basename $(SO_TARGET)$(LIB_VERSION)` $(LIB_INSTALL_DIR)/`basename $(SO_TARGET)` 

clean:
	@rm -rf $(BI_OBJS)
	@rm -rf $(BUILD_LIBS)
	@rm -rf $(OBJDIR)/*.d
	@if [ -d $(OBJDIR) ]; then rmdir --ignore-fail-on-non-empty $(OBJDIR); fi




