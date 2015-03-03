
REL_TOPDIR ?= .
include $(REL_TOPDIR)/config.make

#######################################################
# Setup Enviroment
#######################################################

include $(REL_TOPDIR)/enviroment.make

ifeq ($(ARCH),arm)
	USR_INCLUDE := $(OECORE_TARGET_SYSROOT)/usr/include
	USR_LIB     := $(OECORE_TARGET_SYSROOT)/usr/lib
else
	USR_INCLUDE := /usr/include
	USR_LIB     := /usr/lib
endif

#######################################################
# Project Root Directory and Paths
#######################################################

# Include Paths
INC_DIR_PROJ   = $(REL_TOPDIR)/include

#######################################################
# Compiler, Pre-processor, Assembler and Linker Flags
#######################################################

# Common Pre-processor Flags
CPPFLAGS	=

# Common Assembler Flags
AFLAGS		=

# Common Compiler Flags
CFLAGS = -g -I$(INC_DIR_PROJ) -DARCH=$(ARCH) -DFFMVERSION=$(FFMVERSION) -fsigned-char -fsigned-bitfields \
   -Wall -Wpointer-arith -Wmissing-declarations -Wredundant-decls -Wnested-externs -DXML_DIR=\"$(INSTALL_ROOT)/bin/FFMxmls\" -DINSTALL_ROOT=\"$(INSTALL_ROOT)\"


ifdef KVP_SOURCE
CFLAGS += -D__KVP_SOURCE__
endif

CPPFLAGS := -std=c++0x -I$(INC_DIR_PROJ) -DARCH=$(ARCH) -DFFMVERSION=$(FFMVERSION) -fsigned-char -fsigned-bitfields \
  -Wall -Wpointer-arith -Wmissing-declarations -Wredundant-decls -DXML_DIR=\"$(INSTALL_ROOT)/bin/FFMxmls\" -DINSTALL_ROOT=\"$(INSTALL_ROOT)\"

# Common Linker Flags
LFLAGS = -L$(LIB_INSTALL_DIR)

ifeq ($(VERBOSE),1)
  Q =
else
  Q = @
endif

#######################################################
# Build Rules 
#######################################################

#Default object build directory
OBJDIR ?= .

$(L_TARGET)$(LIB_VERSION) : $(BI_OBJS)
	@echo "	AR	`basename $@`"
	$(Q)$(AR) $(LFAGS) $(EXTRA_USER_LFLAGS) rcs $@ $(BI_OBJS)

$(SO_TARGET)$(LIB_VERSION): $(BI_OBJS)
	@echo "	LD	`basename $@`"
	$(Q)$(CC) -shared -Wl,-soname,`basename $@` -o $@ $(BI_OBJS) $(LFLAGS) $(EXTRA_USER_LFLAGS) 

$(EXEC_TARG): % : $(BI_OBJS)
	@echo "	LD	`basename $@`"
	$(Q)$(CC) $(LFLAGS) $(EXTRA_USER_LDFLAGS)  -o $@ $(BI_OBJS) $(USER_LIBS) $(EXTRA_USER_LIBS)

$(CPP_EXEC_TARG): $(BI_OBJS)
	@echo "	LD	`basename $@`"
	$(Q)$(CXX) $(LFLAGS) $(EXTRA_USER_LDFLAGS)  -o $@ $(BI_OBJS) $(USER_LIBS) $(EXTRA_USER_LIBS)

$(OBJDIR)/%.o : %.c
	@echo "	CC	`basename $@`"
	$(Q)$(CC) $(CFLAGS) $(EXTRA_USER_CFLAGS)  -c -o $@ $< $(MKDPND)

$(OBJDIR)/%.o : %.cpp
	@echo "	CPP	`basename $@`"
	$(Q)$(CXX) $(CPPFLAGS) $(EXTRA_USER_CFLAGS)  -c -o $@ $< $(MKDPND)
