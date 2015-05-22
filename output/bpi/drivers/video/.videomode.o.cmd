cmd_drivers/video/videomode.o := arm-linux-gnueabihf-gcc -Wp,-MD,drivers/video/.videomode.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabihf/4.6/include -I/home/pi/kernel/linux-4.0.2/arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -I/home/pi/kernel/linux-4.0.2/include -Iinclude -I/home/pi/kernel/linux-4.0.2/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/pi/kernel/linux-4.0.2/include/uapi -Iinclude/generated/uapi -include /home/pi/kernel/linux-4.0.2/include/linux/kconfig.h  -I/home/pi/kernel/linux-4.0.2/drivers/video -Idrivers/video -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -O2 -Wframe-larger-than=1024 -fstack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(videomode)"  -D"KBUILD_MODNAME=KBUILD_STR(videomode)" -c -o drivers/video/.tmp_videomode.o /home/pi/kernel/linux-4.0.2/drivers/video/videomode.c

source_drivers/video/videomode.o := /home/pi/kernel/linux-4.0.2/drivers/video/videomode.c

deps_drivers/video/videomode.o := \
  /home/pi/kernel/linux-4.0.2/include/linux/errno.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/errno.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/errno-base.h \
  /home/pi/kernel/linux-4.0.2/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/pi/kernel/linux-4.0.2/include/video/display_timing.h \
  /home/pi/kernel/linux-4.0.2/include/linux/bitops.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/types.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/int-ll64.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/bitsperlong.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
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
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/types.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/posix_types.h \
  /home/pi/kernel/linux-4.0.2/include/linux/stddef.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/stddef.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/posix_types.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/posix_types.h \
  /home/pi/kernel/linux-4.0.2/include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/typecheck.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/irqflags.h \
    $(wildcard include/config/cpu/v7m.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/hwcap.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/hwcap.h \
  /home/pi/kernel/linux-4.0.2/include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/barrier.h \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arch/has/barriers.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/outercache.h \
    $(wildcard include/config/outer/cache/sync.h) \
    $(wildcard include/config/outer/cache.h) \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/bitops/non-atomic.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/bitops/fls64.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/bitops/sched.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/bitops/hweight.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/bitops/arch_hweight.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/bitops/const_hweight.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/bitops/lock.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/bitops/le.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/byteorder.h \
  /home/pi/kernel/linux-4.0.2/include/linux/byteorder/little_endian.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/byteorder/little_endian.h \
  /home/pi/kernel/linux-4.0.2/include/linux/swab.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/swab.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/swab.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/swab.h \
  /home/pi/kernel/linux-4.0.2/include/linux/byteorder/generic.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/bitops/ext2-atomic-setbit.h \
  /home/pi/kernel/linux-4.0.2/include/video/videomode.h \

drivers/video/videomode.o: $(deps_drivers/video/videomode.o)

$(deps_drivers/video/videomode.o):
