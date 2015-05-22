cmd_arch/arm/mach-exynos/sleep.o := arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/mach-exynos/.sleep.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabihf/4.6/include -I/home/pi/kernel/linux-4.0.2/arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -I/home/pi/kernel/linux-4.0.2/include -Iinclude -I/home/pi/kernel/linux-4.0.2/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/pi/kernel/linux-4.0.2/include/uapi -Iinclude/generated/uapi -include /home/pi/kernel/linux-4.0.2/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float -Wa,-march=armv7-a+sec   -c -o arch/arm/mach-exynos/sleep.o /home/pi/kernel/linux-4.0.2/arch/arm/mach-exynos/sleep.S

source_arch/arm/mach-exynos/sleep.o := /home/pi/kernel/linux-4.0.2/arch/arm/mach-exynos/sleep.S

deps_arch/arm/mach-exynos/sleep.o := \
    $(wildcard include/config/cache/l2x0.h) \
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
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/hardware/cache-l2x0.h \
    $(wildcard include/config/of.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/errno.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/errno.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/errno-base.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-exynos/smc.h \

arch/arm/mach-exynos/sleep.o: $(deps_arch/arm/mach-exynos/sleep.o)

$(deps_arch/arm/mach-exynos/sleep.o):
