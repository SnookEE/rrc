
REL_TOPDIR := ../../../

#
# Object directory for intermediary files.
#
OBJDIR := ./obj

#
# Library Files
#
SO_TARGET	= $(OBJDIR)/liba.so
L_TARGET	= $(OBJDIR)/liba.a

#
# Additional module specific FLAGS should be defined here
# and must be incorporated into the EXTRA_USER_CFLAGS and
# EXTRA_USER_LFLAGS
#
EXTRA_USER_CFLAGS	= -I$(REL_TOPDIR)/lib
EXTRA_USER_LFLAGS	= 

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
BUILD_LIBS = $(L_TARGET)

include $(REL_TOPDIR)/Rules.make

.DEFAULT_GOAL := all

all: $(BUILD_LIBS) 

$(BI_OBJS): | $(OBJDIR)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

-include $(wildcard $(OBJDIR)/*.d)

install:
	@cp -pvf $(L_TARGET) $(LIB_INSTALL_DIR) 

clean:
	@rm -rf $(BI_OBJS)
	@rm -rf $(BUILD_LIBS)
	@rm -rf $(OBJDIR)/*.d
	@if [ -d $(OBJDIR) ]; then rmdir --ignore-fail-on-non-empty $(OBJDIR); fi

