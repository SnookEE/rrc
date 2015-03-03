PATH:=${PATH}
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

