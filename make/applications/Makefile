
DIRS =                      \
    onekindofapp/appa       \
    anotherkindofapp/appb

# the sets of directories to do various things in
BUILDDIRS   = $(DIRS:%=build-%)
INSTALLDIRS = $(DIRS:%=install-%)
CLEANDIRS   = $(DIRS:%=clean-%)

all          : $(BUILDDIRS)

$(DIRS)      : $(BUILDDIRS)

$(BUILDDIRS) :
	$(MAKE) -C $(@:build-%=%)

install : $(INSTALLDIRS)
$(INSTALLDIRS):
	$(MAKE) -C $(@:install-%=%) install

clean   : $(CLEANDIRS)
$(CLEANDIRS): 
	$(MAKE) -C $(@:clean-%=%) clean


.PHONY : subdirs $(DIRS)
.PHONY : subdirs $(BUILDDIRS)
.PHONY : subdirs $(INSTALLDIRS)
.PHONY : subdirs $(CLEANDIRS)
.PHONY : all install clean
