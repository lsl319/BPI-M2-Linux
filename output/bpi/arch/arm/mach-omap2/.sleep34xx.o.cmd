cmd_arch/arm/mach-omap2/sleep34xx.o := arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/mach-omap2/.sleep34xx.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabihf/4.6/include -I/home/pi/kernel/linux-4.0.2/arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -I/home/pi/kernel/linux-4.0.2/include -Iinclude -I/home/pi/kernel/linux-4.0.2/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/pi/kernel/linux-4.0.2/include/uapi -Iinclude/generated/uapi -include /home/pi/kernel/linux-4.0.2/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float -Wa,-march=armv7-a+sec   -c -o arch/arm/mach-omap2/sleep34xx.o /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/sleep34xx.S

source_arch/arm/mach-omap2/sleep34xx.o := /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/sleep34xx.S

deps_arch/arm/mach-omap2/sleep34xx.o := \
    $(wildcard include/config/p.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/omap3/l2/aux/secure/save/restore.h) \
    $(wildcard include/config/omap3/l2/aux/secure/service/set/id.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
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
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/ptrace.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/hwcap.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/hwcap.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/opcodes-virt.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be32.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/page.h \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/copy/feroceon.h) \
    $(wildcard include/config/cpu/copy/fa.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
    $(wildcard include/config/kuser/helpers.h) \
    $(wildcard include/config/arm/lpae.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/getorder.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/crunch.h) \
    $(wildcard include/config/arm/thumbee.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/omap34xx.h \
    $(wildcard include/config/base.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/iomap.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/cm3xxx.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/prcm-common.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/cm2xxx_3xxx.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/cm.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/prm3xxx.h \
    $(wildcard include/config/offset.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/prm.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/prm2xxx_3xxx.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/sdrc.h \
    $(wildcard include/config/soc/has/omap2/sdrc.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/sram.h \
    $(wildcard include/config/pm.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/control.h \
    $(wildcard include/config/arch/omap2plus.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/am33xx.h \

arch/arm/mach-omap2/sleep34xx.o: $(deps_arch/arm/mach-omap2/sleep34xx.o)

$(deps_arch/arm/mach-omap2/sleep34xx.o):
