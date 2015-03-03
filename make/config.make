#######################################################
# Rules for compiling the Source Tree.
#
#######################################################

VERSION  = 1.00

ROOT_BINFS     = "binfs"
PACKAGE_FILE   = "somepackage.tar.gz"

#######################################################
# Application & Library Install Paths
# 
# These are the paths within the root file system into 
# which applications & libraries will be copied into
#######################################################
INSTALL_ROOT     = /opt/someroot
APP_INSTALL_DIR	 = $(REL_TOPDIR)/binfs/bin
LIB_INSTALL_DIR  = $(REL_TOPDIR)/binfs/lib


