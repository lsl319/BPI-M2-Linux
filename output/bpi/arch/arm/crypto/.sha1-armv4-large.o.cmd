cmd_arch/arm/crypto/sha1-armv4-large.o := arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/crypto/.sha1-armv4-large.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabihf/4.6/include -I/home/pi/kernel/linux-4.0.2/arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -I/home/pi/kernel/linux-4.0.2/include -Iinclude -I/home/pi/kernel/linux-4.0.2/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/pi/kernel/linux-4.0.2/include/uapi -Iinclude/generated/uapi -include /home/pi/kernel/linux-4.0.2/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float -DMODULE  -c -o arch/arm/crypto/sha1-armv4-large.o /home/pi/kernel/linux-4.0.2/arch/arm/crypto/sha1-armv4-large.S

source_arch/arm/crypto/sha1-armv4-large.o := /home/pi/kernel/linux-4.0.2/arch/arm/crypto/sha1-armv4-large.S

deps_arch/arm/crypto/sha1-armv4-large.o := \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/linkage.h \
  /home/pi/kernel/linux-4.0.2/include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/64bit.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/stringify.h \
  /home/pi/kernel/linux-4.0.2/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/linkage.h \

arch/arm/crypto/sha1-armv4-large.o: $(deps_arch/arm/crypto/sha1-armv4-large.o)

$(deps_arch/arm/crypto/sha1-armv4-large.o):
