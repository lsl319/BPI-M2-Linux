cmd_arch/arm/mach-tegra/sleep-tegra30.o := arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/mach-tegra/.sleep-tegra30.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabihf/4.6/include -I/home/pi/kernel/linux-4.0.2/arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -I/home/pi/kernel/linux-4.0.2/include -Iinclude -I/home/pi/kernel/linux-4.0.2/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/pi/kernel/linux-4.0.2/include/uapi -Iinclude/generated/uapi -include /home/pi/kernel/linux-4.0.2/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float -march=armv7-a   -c -o arch/arm/mach-tegra/sleep-tegra30.o /home/pi/kernel/linux-4.0.2/arch/arm/mach-tegra/sleep-tegra30.S

source_arch/arm/mach-tegra/sleep-tegra30.o := /home/pi/kernel/linux-4.0.2/arch/arm/mach-tegra/sleep-tegra30.S

deps_arch/arm/mach-tegra/sleep-tegra30.o := \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/pm/sleep.h) \
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
  /home/pi/kernel/linux-4.0.2/include/soc/tegra/fuse.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
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
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-tegra/flowctrl.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-tegra/irammap.h \
  arch/arm/include/generated/asm/sizes.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/sizes.h \
  /home/pi/kernel/linux-4.0.2/include/linux/sizes.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-tegra/sleep.h \
    $(wildcard include/config/arch/tegra/2x/soc.h) \
    $(wildcard include/config/have/arm/scu.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-tegra/iomap.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/pgtable.h \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
    $(wildcard include/config/highpte.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/const.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/proc-fns.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/glue-proc.h \
    $(wildcard include/config/cpu/arm7tdmi.h) \
    $(wildcard include/config/cpu/arm720t.h) \
    $(wildcard include/config/cpu/arm740t.h) \
    $(wildcard include/config/cpu/arm9tdmi.h) \
    $(wildcard include/config/cpu/arm920t.h) \
    $(wildcard include/config/cpu/arm922t.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/cpu/arm925t.h) \
    $(wildcard include/config/cpu/arm926t.h) \
    $(wildcard include/config/cpu/arm940t.h) \
    $(wildcard include/config/cpu/arm946e.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/arm1020.h) \
    $(wildcard include/config/cpu/arm1020e.h) \
    $(wildcard include/config/cpu/arm1022.h) \
    $(wildcard include/config/cpu/arm1026.h) \
    $(wildcard include/config/cpu/mohawk.h) \
    $(wildcard include/config/cpu/v6.h) \
    $(wildcard include/config/cpu/v6k.h) \
    $(wildcard include/config/cpu/pj4b.h) \
    $(wildcard include/config/cpu/v7.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/glue.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/pgtable-nopud.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/memory.h \
    $(wildcard include/config/need/mach/memory/h.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/have/tcm.h) \
    $(wildcard include/config/arm/patch/phys/virt.h) \
    $(wildcard include/config/phys/offset.h) \
    $(wildcard include/config/virt/to/bus.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/types.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/types.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/int-ll64.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/bitsperlong.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/bitsperlong.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/pgtable-hwdef.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/pgtable-2level-hwdef.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/tlbflush.h \
    $(wildcard include/config/smp/on/up.h) \
    $(wildcard include/config/cpu/tlb/v4wt.h) \
    $(wildcard include/config/cpu/tlb/fa.h) \
    $(wildcard include/config/cpu/tlb/v4wbi.h) \
    $(wildcard include/config/cpu/tlb/feroceon.h) \
    $(wildcard include/config/cpu/tlb/v4wb.h) \
    $(wildcard include/config/cpu/tlb/v6.h) \
    $(wildcard include/config/cpu/tlb/v7.h) \
    $(wildcard include/config/arm/errata/720789.h) \
    $(wildcard include/config/arm/errata/798181.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/pgtable-2level.h \

arch/arm/mach-tegra/sleep-tegra30.o: $(deps_arch/arm/mach-tegra/sleep-tegra30.o)

$(deps_arch/arm/mach-tegra/sleep-tegra30.o):
