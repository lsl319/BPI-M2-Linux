cmd_lib/fdt_sw.o := arm-linux-gnueabihf-gcc -Wp,-MD,lib/.fdt_sw.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabihf/4.6/include -I/home/pi/kernel/linux-4.0.2/arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -I/home/pi/kernel/linux-4.0.2/include -Iinclude -I/home/pi/kernel/linux-4.0.2/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/pi/kernel/linux-4.0.2/include/uapi -Iinclude/generated/uapi -include /home/pi/kernel/linux-4.0.2/include/linux/kconfig.h  -I/home/pi/kernel/linux-4.0.2/lib -Ilib -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -O2 -Wframe-larger-than=1024 -fstack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes  -I/home/pi/kernel/linux-4.0.2/lib/../scripts/dtc/libfdt -Ilib/../scripts/dtc/libfdt    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(fdt_sw)"  -D"KBUILD_MODNAME=KBUILD_STR(fdt_sw)" -c -o lib/.tmp_fdt_sw.o /home/pi/kernel/linux-4.0.2/lib/fdt_sw.c

source_lib/fdt_sw.o := /home/pi/kernel/linux-4.0.2/lib/fdt_sw.c

deps_lib/fdt_sw.o := \
  /home/pi/kernel/linux-4.0.2/include/linux/libfdt_env.h \
  /home/pi/kernel/linux-4.0.2/include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/64bit.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
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
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/posix_types.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/posix_types.h \
  /home/pi/kernel/linux-4.0.2/include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
  /usr/lib/gcc/arm-linux-gnueabihf/4.6/include/stdarg.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/string.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/string.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/byteorder.h \
  /home/pi/kernel/linux-4.0.2/include/linux/byteorder/little_endian.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/byteorder/little_endian.h \
  /home/pi/kernel/linux-4.0.2/include/linux/swab.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/swab.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/swab.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/swab.h \
  /home/pi/kernel/linux-4.0.2/include/linux/byteorder/generic.h \
  /home/pi/kernel/linux-4.0.2/lib/../scripts/dtc/libfdt/fdt_sw.c \
  /home/pi/kernel/linux-4.0.2/lib/../scripts/dtc/libfdt/libfdt_env.h \
  /home/pi/kernel/linux-4.0.2/lib/../scripts/dtc/libfdt/fdt.h \
  /home/pi/kernel/linux-4.0.2/lib/../scripts/dtc/libfdt/libfdt.h \
  /home/pi/kernel/linux-4.0.2/lib/../scripts/dtc/libfdt/libfdt_env.h \
  /home/pi/kernel/linux-4.0.2/lib/../scripts/dtc/libfdt/libfdt_internal.h \

lib/fdt_sw.o: $(deps_lib/fdt_sw.o)

$(deps_lib/fdt_sw.o):
