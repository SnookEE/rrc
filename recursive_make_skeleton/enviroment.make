SDKTARGETSYSROOT=/opt/poky/1.6.1/sysroots/armv7a-vfp-neon-poky-linux-gnueabi
PATH:=/opt/poky/1.6.1/sysroots/x86_64-pokysdk-linux/usr/bin:/opt/poky/1.6.1/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi:${PATH}
PKG_CONFIG_SYSROOT_DIR=${SDKTARGETSYSROOT}
PKG_CONFIG_PATH=${SDKTARGETSYSROOT}/usr/lib/pkgconfig
CONFIG_SITE=/opt/poky/1.6.1/site-config-armv7a-vfp-neon-poky-linux-gnueabi
OECORE_NATIVE_SYSROOT=/opt/poky/1.6.1/sysroots/x86_64-pokysdk-linux
OECORE_TARGET_SYSROOT=${SDKTARGETSYSROOT}
OECORE_ACLOCAL_OPTS=-I /opt/poky/1.6.1/sysroots/x86_64-pokysdk-linux/usr/share/aclocal
PYTHONHOME=/opt/poky/1.6.1/sysroots/x86_64-pokysdk-linux/usr
CC=arm-poky-linux-gnueabi-gcc  -march=armv7-a -mthumb-interwork -mfloat-abi=softfp -mfpu=neon --sysroot=${SDKTARGETSYSROOT}
CXX=arm-poky-linux-gnueabi-g++  -march=armv7-a -mthumb-interwork -mfloat-abi=softfp -mfpu=neon --sysroot=${SDKTARGETSYSROOT}
CPP=arm-poky-linux-gnueabi-gcc -E  -march=armv7-a -mthumb-interwork -mfloat-abi=softfp -mfpu=neon --sysroot=${SDKTARGETSYSROOT}
AS=arm-poky-linux-gnueabi-as 
LD=arm-poky-linux-gnueabi-ld  --sysroot=${SDKTARGETSYSROOT}
GDB=arm-poky-linux-gnueabi-gdb
STRIP=arm-poky-linux-gnueabi-strip
RANLIB=arm-poky-linux-gnueabi-ranlib
OBJCOPY=arm-poky-linux-gnueabi-objcopy
OBJDUMP=arm-poky-linux-gnueabi-objdump
AR=arm-poky-linux-gnueabi-ar
NM=arm-poky-linux-gnueabi-nm
M4=m4
TARGET_PREFIX=arm-poky-linux-gnueabi-
CONFIGURE_FLAGS=--target=arm-poky-linux-gnueabi --host=arm-poky-linux-gnueabi --build=x86_64-linux --with-libtool-sysroot=${SDKTARGETSYSROOT}
CFLAGS= -O2 -pipe -g -feliminate-unused-debug-types
CXXFLAGS= -O2 -pipe -g -feliminate-unused-debug-types
LDFLAGS=-Wl,-O1 -Wl,--hash-style=gnu -Wl,--as-needed
CPPFLAGS=
OECORE_DISTRO_VERSION=1.6.1
OECORE_SDK_VERSION=1.6.1
ARCH=arm
CROSS_COMPILE=arm-poky-linux-gnueabi-
