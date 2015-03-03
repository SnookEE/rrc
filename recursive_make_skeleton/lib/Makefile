
DIRS = one/liba one/libb libc

BUILDDIRS   = $(DIRS:%=build-%)
INSTALLDIRS = $(DIRS:%=install-%)
CLEANDIRS   = $(DIRS:%=clean-%)

all          : $(BUILDDIRS)

$(DIRS)      : $(BUILDDIRS)

$(BUILDDIRS) :
	@$(MAKE) -C $(@:build-%=%) --no-print-directory

# liba must be built before libb
build-libb : install-liba
install-liba : build-liba

install : $(INSTALLDIRS)
$(INSTALLDIRS):
	@$(MAKE) -C $(@:install-%=%) install

clean   : $(CLEANDIRS)
$(CLEANDIRS): 
	@$(MAKE) -C $(@:clean-%=%) clean


.PHONY : subdirs $(DIRS)
.PHONY : subdirs $(BUILDDIRS)
.PHONY : subdirs $(INSTALLDIRS)
.PHONY : subdirs $(CLEANDIRS)
.PHONY : all install clean

