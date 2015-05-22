cmd_lib/decompress.o := arm-linux-gnueabihf-gcc -Wp,-MD,lib/.decompress.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabihf/4.6/include -I/home/pi/kernel/linux-4.0.2/arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -I/home/pi/kernel/linux-4.0.2/include -Iinclude -I/home/pi/kernel/linux-4.0.2/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/pi/kernel/linux-4.0.2/include/uapi -Iinclude/generated/uapi -include /home/pi/kernel/linux-4.0.2/include/linux/kconfig.h  -I/home/pi/kernel/linux-4.0.2/lib -Ilib -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -O2 -Wframe-larger-than=1024 -fstack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(decompress)"  -D"KBUILD_MODNAME=KBUILD_STR(decompress)" -c -o lib/.tmp_decompress.o /home/pi/kernel/linux-4.0.2/lib/decompress.c

source_lib/decompress.o := /home/pi/kernel/linux-4.0.2/lib/decompress.c

deps_lib/decompress.o := \
    $(wildcard include/config/decompress/gzip.h) \
    $(wildcard include/config/decompress/bzip2.h) \
    $(wildcard include/config/decompress/lzma.h) \
    $(wildcard include/config/decompress/xz.h) \
    $(wildcard include/config/decompress/lzo.h) \
    $(wildcard include/config/decompress/lz4.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/decompress/generic.h \
  /home/pi/kernel/linux-4.0.2/include/linux/decompress/bunzip2.h \
  /home/pi/kernel/linux-4.0.2/include/linux/decompress/unlzma.h \
  /home/pi/kernel/linux-4.0.2/include/linux/decompress/unxz.h \
  /home/pi/kernel/linux-4.0.2/include/linux/decompress/inflate.h \
  /home/pi/kernel/linux-4.0.2/include/linux/decompress/unlzo.h \
  /home/pi/kernel/linux-4.0.2/include/linux/decompress/unlz4.h \
  /home/pi/kernel/linux-4.0.2/include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/types.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/types.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/int-ll64.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/bitsperlong.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/bitsperlong.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/posix_types.h \
  /home/pi/kernel/linux-4.0.2/include/linux/stddef.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/stddef.h \
  /home/pi/kernel/linux-4.0.2/include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/posix_types.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/posix_types.h \
  /home/pi/kernel/linux-4.0.2/include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /usr/lib/gcc/arm-linux-gnueabihf/4.6/include/stdarg.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/string.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/string.h \
  /home/pi/kernel/linux-4.0.2/include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
    $(wildcard include/config/lto.h) \
    $(wildcard include/config/modules.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/printk.h \
    $(wildcard include/config/message/loglevel/default.h) \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/kern_levels.h \
  /home/pi/kernel/linux-4.0.2/include/linux/linkage.h \
  /home/pi/kernel/linux-4.0.2/include/linux/stringify.h \
  /home/pi/kernel/linux-4.0.2/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/linkage.h \
  /home/pi/kernel/linux-4.0.2/include/linux/cache.h \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/kernel.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/sysinfo.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/dynamic_debug.h \

lib/decompress.o: $(deps_lib/decompress.o)

$(deps_lib/decompress.o):
