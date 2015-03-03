
include config.make

REL_TOPDIR := ./

DIRS = lib applications

# the sets of directories to do various things in
BUILDDIRS      = $(DIRS:%=build-%)
INSTALLDIRS    = $(DIRS:%=install-%)
CLEANDIRS      = $(DIRS:%=clean-%)

all            : $(BUILDDIRS)

$(DIRS)        : $(BUILDDIRS)

$(BUILDDIRS) : | create_directories

create_directories : 
	@mkdir -p $(APP_INSTALL_DIR)
	@mkdir -p $(LIB_INSTALL_DIR)

$(BUILDDIRS)   :
	$(MAKE) -C $(@:build-%=%)

# Numerous applications depend on the lib directory to be built and installed.
build-applications: install-lib  


install        : $(INSTALLDIRS)

package :
	@cd $(ROOT_BINFS); tar -cpzf ../$(PACKAGE_FILE) ./

$(INSTALLDIRS) :
	$(MAKE) -C $(@:install-%=%) install

clean          : $(CLEANDIRS)
$(CLEANDIRS): 
	$(MAKE) -C $(@:clean-%=%) clean
	@rm -rf $(ROOT_BINFS)
	@rm -rf $(APP_INSTALL_DIR)
	@rm -rf $(LIB_INSTALL_DIR)

.PHONY : subdirs $(DIRS)
.PHONY : subdirs $(BUILDDIRS)
.PHONY : subdirs $(INSTALLDIRS)
.PHONY : subdirs $(CLEANDIRS)
.PHONY : all install clean

# If you run this particular makefile in parallel things go nuts
.NOTPARALLEL: 
