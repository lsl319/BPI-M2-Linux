cmd_arch/arm/mach-omap2/board-overo.o := arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/mach-omap2/.board-overo.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabihf/4.6/include -I/home/pi/kernel/linux-4.0.2/arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -I/home/pi/kernel/linux-4.0.2/include -Iinclude -I/home/pi/kernel/linux-4.0.2/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/pi/kernel/linux-4.0.2/include/uapi -Iinclude/generated/uapi -include /home/pi/kernel/linux-4.0.2/include/linux/kconfig.h  -I/home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2 -Iarch/arm/mach-omap2 -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -O2 -Wframe-larger-than=1024 -fstack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes   -I/home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/include   -I/home/pi/kernel/linux-4.0.2/arch/arm/plat-omap/include    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(board_overo)"  -D"KBUILD_MODNAME=KBUILD_STR(board_overo)" -c -o arch/arm/mach-omap2/.tmp_board-overo.o /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/board-overo.c

source_arch/arm/mach-omap2/board-overo.o := /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/board-overo.c

deps_arch/arm/mach-omap2/board-overo.o := \
    $(wildcard include/config/touchscreen/ads7846.h) \
    $(wildcard include/config/smsc911x.h) \
    $(wildcard include/config/leds/gpio.h) \
    $(wildcard include/config/keyboard/gpio.h) \
    $(wildcard include/config/omap/mux.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/clk.h \
    $(wildcard include/config/common/clk.h) \
    $(wildcard include/config/have/clk/prepare.h) \
    $(wildcard include/config/have/clk.h) \
    $(wildcard include/config/of.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/err.h \
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
  arch/arm/include/generated/asm/errno.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/errno.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/errno-base.h \
  /home/pi/kernel/linux-4.0.2/include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/panic/timeout.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /usr/lib/gcc/arm-linux-gnueabihf/4.6/include/stdarg.h \
  /home/pi/kernel/linux-4.0.2/include/linux/linkage.h \
  /home/pi/kernel/linux-4.0.2/include/linux/stringify.h \
  /home/pi/kernel/linux-4.0.2/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/linkage.h \
  /home/pi/kernel/linux-4.0.2/include/linux/bitops.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
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
  /home/pi/kernel/linux-4.0.2/include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/printk.h \
    $(wildcard include/config/message/loglevel/default.h) \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
    $(wildcard include/config/lto.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/kern_levels.h \
  /home/pi/kernel/linux-4.0.2/include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/kernel.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/sysinfo.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/dynamic_debug.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/div64.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/compiler.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/debug/bugverbose.h) \
    $(wildcard include/config/arm/lpae.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be32.h) \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/notifier.h \
  /home/pi/kernel/linux-4.0.2/include/linux/errno.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/errno.h \
  /home/pi/kernel/linux-4.0.2/include/linux/mutex.h \
    $(wildcard include/config/debug/mutexes.h) \
    $(wildcard include/config/mutex/spin/on/owner.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  arch/arm/include/generated/asm/current.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/current.h \
  /home/pi/kernel/linux-4.0.2/include/linux/thread_info.h \
    $(wildcard include/config/compat.h) \
    $(wildcard include/config/debug/stack/usage.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/bug.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/crunch.h) \
    $(wildcard include/config/arm/thumbee.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/page.h \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/copy/feroceon.h) \
    $(wildcard include/config/cpu/copy/fa.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
    $(wildcard include/config/kuser/helpers.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/glue.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/pgtable-2level-types.h \
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
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/const.h \
  /home/pi/kernel/linux-4.0.2/include/linux/sizes.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/getorder.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/spinlock_types.h \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/debug/spinlock.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/spinlock_types.h \
  /home/pi/kernel/linux-4.0.2/include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/prove/rcu.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/rwlock_types.h \
  /home/pi/kernel/linux-4.0.2/include/linux/atomic.h \
    $(wildcard include/config/arch/has/atomic/or.h) \
    $(wildcard include/config/generic/atomic64.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/atomic.h \
  /home/pi/kernel/linux-4.0.2/include/linux/prefetch.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/processor.h \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/arm/errata/754327.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/hw_breakpoint.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/cmpxchg.h \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/v6.h) \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/cmpxchg-local.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/atomic-long.h \
  /home/pi/kernel/linux-4.0.2/include/linux/osq_lock.h \
  /home/pi/kernel/linux-4.0.2/include/linux/rwsem.h \
    $(wildcard include/config/rwsem/spin/on/owner.h) \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/spinlock.h \
    $(wildcard include/config/preempt.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/context/tracking.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  arch/arm/include/generated/asm/preempt.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/preempt.h \
  /home/pi/kernel/linux-4.0.2/include/linux/bottom_half.h \
  /home/pi/kernel/linux-4.0.2/include/linux/preempt_mask.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/spinlock.h \
  /home/pi/kernel/linux-4.0.2/include/linux/rwlock.h \
  /home/pi/kernel/linux-4.0.2/include/linux/spinlock_api_smp.h \
    $(wildcard include/config/inline/spin/lock.h) \
    $(wildcard include/config/inline/spin/lock/bh.h) \
    $(wildcard include/config/inline/spin/lock/irq.h) \
    $(wildcard include/config/inline/spin/lock/irqsave.h) \
    $(wildcard include/config/inline/spin/trylock.h) \
    $(wildcard include/config/inline/spin/trylock/bh.h) \
    $(wildcard include/config/uninline/spin/unlock.h) \
    $(wildcard include/config/inline/spin/unlock/bh.h) \
    $(wildcard include/config/inline/spin/unlock/irq.h) \
    $(wildcard include/config/inline/spin/unlock/irqrestore.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/rwlock_api_smp.h \
    $(wildcard include/config/inline/read/lock.h) \
    $(wildcard include/config/inline/write/lock.h) \
    $(wildcard include/config/inline/read/lock/bh.h) \
    $(wildcard include/config/inline/write/lock/bh.h) \
    $(wildcard include/config/inline/read/lock/irq.h) \
    $(wildcard include/config/inline/write/lock/irq.h) \
    $(wildcard include/config/inline/read/lock/irqsave.h) \
    $(wildcard include/config/inline/write/lock/irqsave.h) \
    $(wildcard include/config/inline/read/trylock.h) \
    $(wildcard include/config/inline/write/trylock.h) \
    $(wildcard include/config/inline/read/unlock.h) \
    $(wildcard include/config/inline/write/unlock.h) \
    $(wildcard include/config/inline/read/unlock/bh.h) \
    $(wildcard include/config/inline/write/unlock/bh.h) \
    $(wildcard include/config/inline/read/unlock/irq.h) \
    $(wildcard include/config/inline/write/unlock/irq.h) \
    $(wildcard include/config/inline/read/unlock/irqrestore.h) \
    $(wildcard include/config/inline/write/unlock/irqrestore.h) \
  arch/arm/include/generated/asm/rwsem.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/rwsem.h \
  /home/pi/kernel/linux-4.0.2/include/linux/srcu.h \
  /home/pi/kernel/linux-4.0.2/include/linux/rcupdate.h \
    $(wildcard include/config/tree/rcu.h) \
    $(wildcard include/config/preempt/rcu.h) \
    $(wildcard include/config/rcu/trace.h) \
    $(wildcard include/config/rcu/stall/common.h) \
    $(wildcard include/config/rcu/user/qs.h) \
    $(wildcard include/config/rcu/nocb/cpu.h) \
    $(wildcard include/config/tasks/rcu.h) \
    $(wildcard include/config/tiny/rcu.h) \
    $(wildcard include/config/debug/objects/rcu/head.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/rcu/boost.h) \
    $(wildcard include/config/rcu/nocb/cpu/all.h) \
    $(wildcard include/config/no/hz/full/sysidle.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/cpumask.h \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
    $(wildcard include/config/disable/obsolete/cpumask/functions.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/bitmap.h \
  /home/pi/kernel/linux-4.0.2/include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/string.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/string.h \
  /home/pi/kernel/linux-4.0.2/include/linux/seqlock.h \
  /home/pi/kernel/linux-4.0.2/include/linux/completion.h \
  /home/pi/kernel/linux-4.0.2/include/linux/wait.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/wait.h \
  /home/pi/kernel/linux-4.0.2/include/linux/debugobjects.h \
    $(wildcard include/config/debug/objects.h) \
    $(wildcard include/config/debug/objects/free.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/rcutree.h \
  /home/pi/kernel/linux-4.0.2/include/linux/workqueue.h \
    $(wildcard include/config/debug/objects/work.h) \
    $(wildcard include/config/freezer.h) \
    $(wildcard include/config/sysfs.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/timer.h \
    $(wildcard include/config/timer/stats.h) \
    $(wildcard include/config/debug/objects/timers.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/ktime.h \
  /home/pi/kernel/linux-4.0.2/include/linux/time.h \
    $(wildcard include/config/arch/uses/gettimeoffset.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/math64.h \
    $(wildcard include/config/arch/supports/int128.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/time64.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/time.h \
  /home/pi/kernel/linux-4.0.2/include/linux/jiffies.h \
  /home/pi/kernel/linux-4.0.2/include/linux/timex.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/timex.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/param.h \
  arch/arm/include/generated/asm/param.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/param.h \
    $(wildcard include/config/hz.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/param.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/timex.h \
  /home/pi/kernel/linux-4.0.2/include/linux/timekeeping.h \
  /home/pi/kernel/linux-4.0.2/include/linux/delay.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/delay.h \
  /home/pi/kernel/linux-4.0.2/include/linux/io.h \
    $(wildcard include/config/has/ioport/map.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/io.h \
    $(wildcard include/config/pci.h) \
    $(wildcard include/config/need/mach/io/h.h) \
    $(wildcard include/config/pcmcia/soc/common.h) \
    $(wildcard include/config/isa.h) \
    $(wildcard include/config/pccard.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/blk_types.h \
    $(wildcard include/config/block.h) \
    $(wildcard include/config/blk/cgroup.h) \
    $(wildcard include/config/blk/dev/integrity.h) \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/pci_iomap.h \
    $(wildcard include/config/no/generic/pci/ioport/map.h) \
    $(wildcard include/config/generic/pci/iomap.h) \
  /home/pi/kernel/linux-4.0.2/include/xen/xen.h \
    $(wildcard include/config/xen.h) \
    $(wildcard include/config/xen/dom0.h) \
    $(wildcard include/config/xen/pvh.h) \
  /home/pi/kernel/linux-4.0.2/include/xen/interface/xen.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/xen/interface.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/xen/hypervisor.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/io.h \
    $(wildcard include/config/generic/iomap.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/vmalloc.h \
  /home/pi/kernel/linux-4.0.2/include/linux/rbtree.h \
  /home/pi/kernel/linux-4.0.2/include/linux/gpio.h \
    $(wildcard include/config/gpiolib.h) \
    $(wildcard include/config/arch/have/custom/gpio/h.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/gpio.h \
    $(wildcard include/config/arch/nr/gpio.h) \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/gpio.h \
    $(wildcard include/config/pinctrl.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/of.h \
    $(wildcard include/config/sparc.h) \
    $(wildcard include/config/of/dynamic.h) \
    $(wildcard include/config/attach/node.h) \
    $(wildcard include/config/detach/node.h) \
    $(wildcard include/config/add/property.h) \
    $(wildcard include/config/remove/property.h) \
    $(wildcard include/config/update/property.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/no/change.h) \
    $(wildcard include/config/change/add.h) \
    $(wildcard include/config/change/remove.h) \
    $(wildcard include/config/of/resolve.h) \
    $(wildcard include/config/of/overlay.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/kobject.h \
    $(wildcard include/config/uevent/helper.h) \
    $(wildcard include/config/debug/kobject/release.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/sysfs.h \
  /home/pi/kernel/linux-4.0.2/include/linux/kernfs.h \
    $(wildcard include/config/kernfs.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/idr.h \
  /home/pi/kernel/linux-4.0.2/include/linux/kobject_ns.h \
  /home/pi/kernel/linux-4.0.2/include/linux/stat.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/stat.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/stat.h \
  /home/pi/kernel/linux-4.0.2/include/linux/uidgid.h \
    $(wildcard include/config/user/ns.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/highuid.h \
  /home/pi/kernel/linux-4.0.2/include/linux/kref.h \
  /home/pi/kernel/linux-4.0.2/include/linux/mod_devicetable.h \
  /home/pi/kernel/linux-4.0.2/include/linux/uuid.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/uuid.h \
  /home/pi/kernel/linux-4.0.2/include/linux/topology.h \
    $(wildcard include/config/use/percpu/numa/node/id.h) \
    $(wildcard include/config/have/memoryless/nodes.h) \
    $(wildcard include/config/sched/smt.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/cma.h) \
    $(wildcard include/config/memory/isolation.h) \
    $(wildcard include/config/memcg.h) \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/have/memblock/node/map.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/page/extension.h) \
    $(wildcard include/config/no/bootmem.h) \
    $(wildcard include/config/numa/balancing.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/nodes/span/other/nodes.h) \
    $(wildcard include/config/holes/in/zone.h) \
    $(wildcard include/config/arch/has/holes/memorymodel.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/nodemask.h \
    $(wildcard include/config/movable/node.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/pageblock-flags.h \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/hugetlb/page/size/variable.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/page-flags-layout.h \
  include/generated/bounds.h \
  /home/pi/kernel/linux-4.0.2/include/linux/memory_hotplug.h \
    $(wildcard include/config/memory/hotremove.h) \
    $(wildcard include/config/have/arch/nodedata/extension.h) \
    $(wildcard include/config/have/bootmem/info/node.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/smp.h \
    $(wildcard include/config/up/late/init.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/llist.h \
    $(wildcard include/config/arch/have/nmi/safe/cmpxchg.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/smp.h \
  /home/pi/kernel/linux-4.0.2/include/linux/percpu.h \
    $(wildcard include/config/need/per/cpu/embed/first/chunk.h) \
    $(wildcard include/config/need/per/cpu/page/first/chunk.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/mmdebug.h \
    $(wildcard include/config/debug/vm.h) \
    $(wildcard include/config/debug/virtual.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/pfn.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/percpu.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/percpu.h \
  /home/pi/kernel/linux-4.0.2/include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/topology.h \
    $(wildcard include/config/arm/cpu/topology.h) \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/topology.h \
  /home/pi/kernel/linux-4.0.2/include/linux/property.h \
  /home/pi/kernel/linux-4.0.2/include/linux/pinctrl/pinctrl.h \
    $(wildcard include/config/generic/pinconf.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/radix-tree.h \
  /home/pi/kernel/linux-4.0.2/include/linux/seq_file.h \
  /home/pi/kernel/linux-4.0.2/include/linux/pinctrl/pinctrl-state.h \
  /home/pi/kernel/linux-4.0.2/include/linux/gpio/driver.h \
    $(wildcard include/config/gpiolib/irqchip.h) \
    $(wildcard include/config/of/gpio.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/module.h \
    $(wildcard include/config/module/sig.h) \
    $(wildcard include/config/kallsyms.h) \
    $(wildcard include/config/tracepoints.h) \
    $(wildcard include/config/event/tracing.h) \
    $(wildcard include/config/livepatch.h) \
    $(wildcard include/config/module/unload.h) \
    $(wildcard include/config/constructors.h) \
    $(wildcard include/config/debug/set/module/ronx.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/kmod.h \
  /home/pi/kernel/linux-4.0.2/include/linux/gfp.h \
    $(wildcard include/config/pm/sleep.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/sysctl.h \
    $(wildcard include/config/sysctl.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/sysctl.h \
  /home/pi/kernel/linux-4.0.2/include/linux/elf.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/elf.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/user.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/elf.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/elf-em.h \
  /home/pi/kernel/linux-4.0.2/include/linux/moduleparam.h \
    $(wildcard include/config/alpha.h) \
    $(wildcard include/config/ia64.h) \
    $(wildcard include/config/ppc64.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/jump_label.h \
    $(wildcard include/config/jump/label.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/module.h \
    $(wildcard include/config/arm/unwind.h) \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/module.h \
    $(wildcard include/config/have/mod/arch/specific.h) \
    $(wildcard include/config/modules/use/elf/rel.h) \
    $(wildcard include/config/modules/use/elf/rela.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/irq.h \
    $(wildcard include/config/irq/domain/hierarchy.h) \
    $(wildcard include/config/generic/pending/irq.h) \
    $(wildcard include/config/hardirqs/sw/resend.h) \
    $(wildcard include/config/generic/irq/legacy/alloc/hwirq.h) \
    $(wildcard include/config/generic/irq/legacy.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/irqhandler.h \
  /home/pi/kernel/linux-4.0.2/include/linux/irqreturn.h \
  /home/pi/kernel/linux-4.0.2/include/linux/irqnr.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/irqnr.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/irq.h \
    $(wildcard include/config/sparse/irq.h) \
    $(wildcard include/config/multi/irq/handler.h) \
  arch/arm/include/generated/asm/irq_regs.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/irq_regs.h \
  /home/pi/kernel/linux-4.0.2/include/linux/irqdesc.h \
    $(wildcard include/config/irq/preflow/fasteoi.h) \
    $(wildcard include/config/proc/fs.h) \
    $(wildcard include/config/handle/domain/irq.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/hw_irq.h \
  /home/pi/kernel/linux-4.0.2/include/linux/irqchip/chained_irq.h \
  /home/pi/kernel/linux-4.0.2/include/linux/irqdomain.h \
    $(wildcard include/config/irq/domain.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/gpio/consumer.h \
    $(wildcard include/config/gpio/sysfs.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/platform_device.h \
    $(wildcard include/config/suspend.h) \
    $(wildcard include/config/hibernate/callbacks.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/device.h \
    $(wildcard include/config/debug/devres.h) \
    $(wildcard include/config/acpi.h) \
    $(wildcard include/config/dma/cma.h) \
    $(wildcard include/config/devtmpfs.h) \
    $(wildcard include/config/sysfs/deprecated.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/ioport.h \
  /home/pi/kernel/linux-4.0.2/include/linux/klist.h \
  /home/pi/kernel/linux-4.0.2/include/linux/pinctrl/devinfo.h \
    $(wildcard include/config/pm.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/pinctrl/consumer.h \
  /home/pi/kernel/linux-4.0.2/include/linux/pm.h \
    $(wildcard include/config/vt/console/sleep.h) \
    $(wildcard include/config/pm/clk.h) \
    $(wildcard include/config/pm/generic/domains.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/ratelimit.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/device.h \
    $(wildcard include/config/dmabounce.h) \
    $(wildcard include/config/iommu/api.h) \
    $(wildcard include/config/arm/dma/use/iommu.h) \
    $(wildcard include/config/arch/omap.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/pm_wakeup.h \
  /home/pi/kernel/linux-4.0.2/include/linux/i2c/twl.h \
    $(wildcard include/config/twl4030/core.h) \
    $(wildcard include/config/undef.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/input/matrix_keypad.h \
  /home/pi/kernel/linux-4.0.2/include/linux/input.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/input.h \
  /home/pi/kernel/linux-4.0.2/include/linux/fs.h \
    $(wildcard include/config/fs/posix/acl.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/ima.h) \
    $(wildcard include/config/fsnotify.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/file/locking.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/fs/dax.h) \
    $(wildcard include/config/migration.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/kdev_t.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/kdev_t.h \
  /home/pi/kernel/linux-4.0.2/include/linux/dcache.h \
  /home/pi/kernel/linux-4.0.2/include/linux/rculist.h \
  /home/pi/kernel/linux-4.0.2/include/linux/rculist_bl.h \
  /home/pi/kernel/linux-4.0.2/include/linux/list_bl.h \
  /home/pi/kernel/linux-4.0.2/include/linux/bit_spinlock.h \
  /home/pi/kernel/linux-4.0.2/include/linux/lockref.h \
    $(wildcard include/config/arch/use/cmpxchg/lockref.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/path.h \
  /home/pi/kernel/linux-4.0.2/include/linux/list_lru.h \
    $(wildcard include/config/memcg/kmem.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/shrinker.h \
  /home/pi/kernel/linux-4.0.2/include/linux/pid.h \
  /home/pi/kernel/linux-4.0.2/include/linux/capability.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/capability.h \
  /home/pi/kernel/linux-4.0.2/include/linux/semaphore.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/fiemap.h \
  /home/pi/kernel/linux-4.0.2/include/linux/migrate_mode.h \
  /home/pi/kernel/linux-4.0.2/include/linux/percpu-rwsem.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/fs.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/limits.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/ioctl.h \
  arch/arm/include/generated/asm/ioctl.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/ioctl.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/ioctl.h \
  /home/pi/kernel/linux-4.0.2/include/linux/quota.h \
    $(wildcard include/config/quota/netlink/interface.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/percpu_counter.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/dqblk_xfs.h \
  /home/pi/kernel/linux-4.0.2/include/linux/dqblk_v1.h \
  /home/pi/kernel/linux-4.0.2/include/linux/dqblk_v2.h \
  /home/pi/kernel/linux-4.0.2/include/linux/dqblk_qtree.h \
  /home/pi/kernel/linux-4.0.2/include/linux/projid.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/quota.h \
  /home/pi/kernel/linux-4.0.2/include/linux/nfs_fs_i.h \
  /home/pi/kernel/linux-4.0.2/include/linux/fcntl.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/fcntl.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/fcntl.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/fcntl.h \
  /home/pi/kernel/linux-4.0.2/include/linux/regulator/machine.h \
    $(wildcard include/config/regulator.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/regulator/consumer.h \
  /home/pi/kernel/linux-4.0.2/include/linux/suspend.h \
    $(wildcard include/config/vt.h) \
    $(wildcard include/config/hibernation.h) \
    $(wildcard include/config/pm/sleep/debug.h) \
    $(wildcard include/config/pm/autosleep.h) \
    $(wildcard include/config/arch/save/page/keys.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/swap.h \
    $(wildcard include/config/memory/failure.h) \
    $(wildcard include/config/frontswap.h) \
    $(wildcard include/config/memcg/swap.h) \
    $(wildcard include/config/swap.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/memcontrol.h \
    $(wildcard include/config/transparent/hugepage.h) \
    $(wildcard include/config/inet.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/cgroup.h \
    $(wildcard include/config/cgroups.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/sched.h \
    $(wildcard include/config/sched/debug.h) \
    $(wildcard include/config/no/hz/common.h) \
    $(wildcard include/config/lockup/detector.h) \
    $(wildcard include/config/detect/hung/task.h) \
    $(wildcard include/config/core/dump/default/elf/headers.h) \
    $(wildcard include/config/sched/autogroup.h) \
    $(wildcard include/config/virt/cpu/accounting/native.h) \
    $(wildcard include/config/bsd/process/acct.h) \
    $(wildcard include/config/taskstats.h) \
    $(wildcard include/config/audit.h) \
    $(wildcard include/config/inotify/user.h) \
    $(wildcard include/config/fanotify.h) \
    $(wildcard include/config/posix/mqueue.h) \
    $(wildcard include/config/keys.h) \
    $(wildcard include/config/perf/events.h) \
    $(wildcard include/config/schedstats.h) \
    $(wildcard include/config/task/delay/acct.h) \
    $(wildcard include/config/sched/mc.h) \
    $(wildcard include/config/fair/group/sched.h) \
    $(wildcard include/config/rt/group/sched.h) \
    $(wildcard include/config/cgroup/sched.h) \
    $(wildcard include/config/blk/dev/io/trace.h) \
    $(wildcard include/config/compat/brk.h) \
    $(wildcard include/config/cc/stackprotector.h) \
    $(wildcard include/config/virt/cpu/accounting/gen.h) \
    $(wildcard include/config/sysvipc.h) \
    $(wildcard include/config/auditsyscall.h) \
    $(wildcard include/config/rt/mutexes.h) \
    $(wildcard include/config/task/xacct.h) \
    $(wildcard include/config/cpusets.h) \
    $(wildcard include/config/futex.h) \
    $(wildcard include/config/fault/injection.h) \
    $(wildcard include/config/latencytop.h) \
    $(wildcard include/config/kasan.h) \
    $(wildcard include/config/function/graph/tracer.h) \
    $(wildcard include/config/uprobes.h) \
    $(wildcard include/config/bcache.h) \
    $(wildcard include/config/have/unstable/sched/clock.h) \
    $(wildcard include/config/irq/time/accounting.h) \
    $(wildcard include/config/no/hz/full.h) \
    $(wildcard include/config/stack/growsup.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/sched.h \
  /home/pi/kernel/linux-4.0.2/include/linux/sched/prio.h \
  /home/pi/kernel/linux-4.0.2/include/linux/plist.h \
    $(wildcard include/config/debug/pi/list.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/mm_types.h \
    $(wildcard include/config/split/ptlock/cpus.h) \
    $(wildcard include/config/arch/enable/split/pmd/ptlock.h) \
    $(wildcard include/config/have/cmpxchg/double.h) \
    $(wildcard include/config/have/aligned/struct/page.h) \
    $(wildcard include/config/kmemcheck.h) \
    $(wildcard include/config/aio.h) \
    $(wildcard include/config/mmu/notifier.h) \
    $(wildcard include/config/x86/intel/mpx.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/auxvec.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/auxvec.h \
  arch/arm/include/generated/asm/auxvec.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/auxvec.h \
  /home/pi/kernel/linux-4.0.2/include/linux/uprobes.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/mmu.h \
    $(wildcard include/config/cpu/has/asid.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/cputime.h \
  arch/arm/include/generated/asm/cputime.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/cputime.h \
    $(wildcard include/config/virt/cpu/accounting.h) \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/cputime_jiffies.h \
  /home/pi/kernel/linux-4.0.2/include/linux/sem.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/sem.h \
  /home/pi/kernel/linux-4.0.2/include/linux/ipc.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/ipc.h \
  arch/arm/include/generated/asm/ipcbuf.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/ipcbuf.h \
  arch/arm/include/generated/asm/sembuf.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/sembuf.h \
  /home/pi/kernel/linux-4.0.2/include/linux/shm.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/shm.h \
  arch/arm/include/generated/asm/shmbuf.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/shmbuf.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/shmparam.h \
  /home/pi/kernel/linux-4.0.2/include/linux/signal.h \
    $(wildcard include/config/old/sigaction.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/signal.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/signal.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/signal.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/signal-defs.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/sigcontext.h \
  arch/arm/include/generated/asm/siginfo.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/siginfo.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/siginfo.h \
  /home/pi/kernel/linux-4.0.2/include/linux/proportions.h \
  /home/pi/kernel/linux-4.0.2/include/linux/seccomp.h \
    $(wildcard include/config/seccomp.h) \
    $(wildcard include/config/have/arch/seccomp/filter.h) \
    $(wildcard include/config/seccomp/filter.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/seccomp.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/seccomp.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/unistd.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/unistd.h \
    $(wildcard include/config/oabi/compat.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/unistd.h \
  /home/pi/kernel/linux-4.0.2/include/linux/rtmutex.h \
    $(wildcard include/config/debug/rt/mutexes.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/resource.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/resource.h \
  arch/arm/include/generated/asm/resource.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/resource.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/resource.h \
  /home/pi/kernel/linux-4.0.2/include/linux/hrtimer.h \
    $(wildcard include/config/high/res/timers.h) \
    $(wildcard include/config/timerfd.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/timerqueue.h \
  /home/pi/kernel/linux-4.0.2/include/linux/task_io_accounting.h \
    $(wildcard include/config/task/io/accounting.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/latencytop.h \
  /home/pi/kernel/linux-4.0.2/include/linux/cred.h \
    $(wildcard include/config/debug/credentials.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/key.h \
  /home/pi/kernel/linux-4.0.2/include/linux/assoc_array.h \
    $(wildcard include/config/associative/array.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/selinux.h \
    $(wildcard include/config/security/selinux.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/magic.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/cgroupstats.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/taskstats.h \
  /home/pi/kernel/linux-4.0.2/include/linux/percpu-refcount.h \
  /home/pi/kernel/linux-4.0.2/include/linux/cgroup_subsys.h \
    $(wildcard include/config/cgroup/cpuacct.h) \
    $(wildcard include/config/cgroup/device.h) \
    $(wildcard include/config/cgroup/freezer.h) \
    $(wildcard include/config/cgroup/net/classid.h) \
    $(wildcard include/config/cgroup/perf.h) \
    $(wildcard include/config/cgroup/net/prio.h) \
    $(wildcard include/config/cgroup/hugetlb.h) \
    $(wildcard include/config/cgroup/debug.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/vm_event_item.h \
    $(wildcard include/config/memory/balloon.h) \
    $(wildcard include/config/balloon/compaction.h) \
    $(wildcard include/config/debug/tlbflush.h) \
    $(wildcard include/config/debug/vm/vmacache.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/hardirq.h \
  /home/pi/kernel/linux-4.0.2/include/linux/ftrace_irq.h \
    $(wildcard include/config/ftrace/nmi/enter.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/vtime.h \
  /home/pi/kernel/linux-4.0.2/include/linux/context_tracking_state.h \
  /home/pi/kernel/linux-4.0.2/include/linux/static_key.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/hardirq.h \
  /home/pi/kernel/linux-4.0.2/include/linux/irq_cpustat.h \
  /home/pi/kernel/linux-4.0.2/include/linux/node.h \
    $(wildcard include/config/memory/hotplug/sparse.h) \
    $(wildcard include/config/hugetlbfs.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/page-flags.h \
    $(wildcard include/config/pageflags/extended.h) \
    $(wildcard include/config/arch/uses/pg/uncached.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/mm.h \
    $(wildcard include/config/mem/soft/dirty.h) \
    $(wildcard include/config/x86.h) \
    $(wildcard include/config/ppc.h) \
    $(wildcard include/config/parisc.h) \
    $(wildcard include/config/metag.h) \
    $(wildcard include/config/ksm.h) \
    $(wildcard include/config/shmem.h) \
    $(wildcard include/config/debug/vm/rb.h) \
    $(wildcard include/config/debug/pagealloc.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/debug_locks.h \
    $(wildcard include/config/debug/locking/api/selftests.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/range.h \
  /home/pi/kernel/linux-4.0.2/include/linux/page_ext.h \
    $(wildcard include/config/page/owner.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/stacktrace.h \
    $(wildcard include/config/stacktrace.h) \
    $(wildcard include/config/user/stacktrace/support.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/pgtable.h \
    $(wildcard include/config/highpte.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/proc-fns.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/glue-proc.h \
    $(wildcard include/config/cpu/arm7tdmi.h) \
    $(wildcard include/config/cpu/arm720t.h) \
    $(wildcard include/config/cpu/arm740t.h) \
    $(wildcard include/config/cpu/arm9tdmi.h) \
    $(wildcard include/config/cpu/arm920t.h) \
    $(wildcard include/config/cpu/arm922t.h) \
    $(wildcard include/config/cpu/arm925t.h) \
    $(wildcard include/config/cpu/arm926t.h) \
    $(wildcard include/config/cpu/arm940t.h) \
    $(wildcard include/config/cpu/arm946e.h) \
    $(wildcard include/config/cpu/arm1020.h) \
    $(wildcard include/config/cpu/arm1020e.h) \
    $(wildcard include/config/cpu/arm1022.h) \
    $(wildcard include/config/cpu/arm1026.h) \
    $(wildcard include/config/cpu/mohawk.h) \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/cpu/v6k.h) \
    $(wildcard include/config/cpu/pj4b.h) \
    $(wildcard include/config/cpu/v7.h) \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/pgtable-nopud.h \
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
  /home/pi/kernel/linux-4.0.2/include/asm-generic/pgtable.h \
    $(wildcard include/config/have/arch/soft/dirty.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/huge_mm.h \
  /home/pi/kernel/linux-4.0.2/include/linux/vmstat.h \
    $(wildcard include/config/vm/event/counters.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/freezer.h \
  /home/pi/kernel/linux-4.0.2/include/linux/regulator/fixed.h \
  /home/pi/kernel/linux-4.0.2/include/linux/spi/spi.h \
    $(wildcard include/config/spi.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/slab.h \
    $(wildcard include/config/slab/debug.h) \
    $(wildcard include/config/failslab.h) \
    $(wildcard include/config/slab.h) \
    $(wildcard include/config/slub.h) \
    $(wildcard include/config/slob.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/kmemleak.h \
    $(wildcard include/config/debug/kmemleak.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/kasan.h \
    $(wildcard include/config/kasan/shadow/offset.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/kthread.h \
  /home/pi/kernel/linux-4.0.2/include/linux/scatterlist.h \
    $(wildcard include/config/debug/sg.h) \
    $(wildcard include/config/arch/has/sg/chain.h) \
  arch/arm/include/generated/asm/scatterlist.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/scatterlist.h \
    $(wildcard include/config/need/sg/dma/length.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/mtd/mtd.h \
  /home/pi/kernel/linux-4.0.2/include/linux/uio.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/uio.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/mtd/mtd-abi.h \
  /home/pi/kernel/linux-4.0.2/include/linux/mtd/nand.h \
  /home/pi/kernel/linux-4.0.2/include/linux/mtd/flashchip.h \
  /home/pi/kernel/linux-4.0.2/include/linux/mtd/bbm.h \
  /home/pi/kernel/linux-4.0.2/include/linux/mtd/partitions.h \
  /home/pi/kernel/linux-4.0.2/include/linux/mmc/host.h \
    $(wildcard include/config/mmc/clkgate.h) \
    $(wildcard include/config/mmc/debug.h) \
    $(wildcard include/config/fail/mmc/request.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/leds.h \
    $(wildcard include/config/leds/triggers.h) \
    $(wildcard include/config/leds/trigger/ide/disk.h) \
    $(wildcard include/config/leds/trigger/camera.h) \
    $(wildcard include/config/leds/trigger/cpu.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/fault-inject.h \
    $(wildcard include/config/fault/injection/debug/fs.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/mmc/core.h \
  /home/pi/kernel/linux-4.0.2/include/linux/interrupt.h \
    $(wildcard include/config/irq/forced/threading.h) \
    $(wildcard include/config/generic/irq/probe.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/mmc/card.h \
  /home/pi/kernel/linux-4.0.2/include/linux/mmc/pm.h \
  /home/pi/kernel/linux-4.0.2/include/linux/usb/phy.h \
    $(wildcard include/config/usb/phy.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/usb.h \
    $(wildcard include/config/usb/mon.h) \
    $(wildcard include/config/usb/led/trig.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/usb/ch9.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/usb/ch9.h \
    $(wildcard include/config/size.h) \
    $(wildcard include/config/att/one.h) \
    $(wildcard include/config/att/selfpower.h) \
    $(wildcard include/config/att/wakeup.h) \
    $(wildcard include/config/att/battery.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/pm_runtime.h \
  /home/pi/kernel/linux-4.0.2/include/linux/platform_data/mtd-nand-omap2.h \
  /home/pi/kernel/linux-4.0.2/include/linux/platform_data/spi-omap2-mcspi.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/mach-types.h \
  include/generated/mach-types.h \
    $(wildcard include/config/arch/ebsa110.h) \
    $(wildcard include/config/arch/rpc.h) \
    $(wildcard include/config/arch/ebsa285.h) \
    $(wildcard include/config/arch/netwinder.h) \
    $(wildcard include/config/arch/cats.h) \
    $(wildcard include/config/arch/shark.h) \
    $(wildcard include/config/sa1100/brutus.h) \
    $(wildcard include/config/arch/personal/server.h) \
    $(wildcard include/config/arch/l7200.h) \
    $(wildcard include/config/sa1100/pleb.h) \
    $(wildcard include/config/arch/integrator.h) \
    $(wildcard include/config/sa1100/h3600.h) \
    $(wildcard include/config/arch/p720t.h) \
    $(wildcard include/config/sa1100/assabet.h) \
    $(wildcard include/config/sa1100/lart.h) \
    $(wildcard include/config/sa1100/graphicsclient.h) \
    $(wildcard include/config/sa1100/xp860.h) \
    $(wildcard include/config/sa1100/cerf.h) \
    $(wildcard include/config/sa1100/nanoengine.h) \
    $(wildcard include/config/sa1100/jornada720.h) \
    $(wildcard include/config/arch/edb7211.h) \
    $(wildcard include/config/sa1100/pfs168.h) \
    $(wildcard include/config/sa1100/flexanet.h) \
    $(wildcard include/config/sa1100/simpad.h) \
    $(wildcard include/config/arch/lubbock.h) \
    $(wildcard include/config/arch/clep7212.h) \
    $(wildcard include/config/sa1100/shannon.h) \
    $(wildcard include/config/sa1100/consus.h) \
    $(wildcard include/config/arch/aaed2000.h) \
    $(wildcard include/config/arch/cdb89712.h) \
    $(wildcard include/config/sa1100/graphicsmaster.h) \
    $(wildcard include/config/sa1100/adsbitsy.h) \
    $(wildcard include/config/arch/pxa/idp.h) \
    $(wildcard include/config/sa1100/pt/system3.h) \
    $(wildcard include/config/arch/autcpu12.h) \
    $(wildcard include/config/sa1100/h3100.h) \
    $(wildcard include/config/sa1100/collie.h) \
    $(wildcard include/config/sa1100/badge4.h) \
    $(wildcard include/config/arch/fortunet.h) \
    $(wildcard include/config/arch/mx1ads.h) \
    $(wildcard include/config/arch/h7201.h) \
    $(wildcard include/config/arch/h7202.h) \
    $(wildcard include/config/arch/iq80321.h) \
    $(wildcard include/config/arch/ks8695.h) \
    $(wildcard include/config/arch/smdk2410.h) \
    $(wildcard include/config/arch/ceiva.h) \
    $(wildcard include/config/mach/voiceblue.h) \
    $(wildcard include/config/arch/h5400.h) \
    $(wildcard include/config/mach/omap/innovator.h) \
    $(wildcard include/config/arch/ixdp2400.h) \
    $(wildcard include/config/arch/ixdp2800.h) \
    $(wildcard include/config/arch/ixdp425.h) \
    $(wildcard include/config/sa1100/hackkit.h) \
    $(wildcard include/config/arch/ixcdp1100.h) \
    $(wildcard include/config/arch/at91rm9200dk.h) \
    $(wildcard include/config/arch/cintegrator.h) \
    $(wildcard include/config/arch/viper.h) \
    $(wildcard include/config/arch/adi/coyote.h) \
    $(wildcard include/config/arch/ixdp2401.h) \
    $(wildcard include/config/arch/ixdp2801.h) \
    $(wildcard include/config/arch/iq31244.h) \
    $(wildcard include/config/arch/bast.h) \
    $(wildcard include/config/arch/h1940.h) \
    $(wildcard include/config/arch/enp2611.h) \
    $(wildcard include/config/arch/s3c2440.h) \
    $(wildcard include/config/arch/gumstix.h) \
    $(wildcard include/config/mach/omap/h2.h) \
    $(wildcard include/config/mach/e740.h) \
    $(wildcard include/config/arch/iq80331.h) \
    $(wildcard include/config/arch/versatile/pb.h) \
    $(wildcard include/config/mach/kev7a400.h) \
    $(wildcard include/config/mach/lpd7a400.h) \
    $(wildcard include/config/mach/lpd7a404.h) \
    $(wildcard include/config/mach/csb337.h) \
    $(wildcard include/config/mach/mainstone.h) \
    $(wildcard include/config/mach/lite300.h) \
    $(wildcard include/config/mach/xcep.h) \
    $(wildcard include/config/mach/arcom/vulcan.h) \
    $(wildcard include/config/mach/nomadik.h) \
    $(wildcard include/config/mach/corgi.h) \
    $(wildcard include/config/mach/poodle.h) \
    $(wildcard include/config/mach/armcore.h) \
    $(wildcard include/config/mach/mx31ads.h) \
    $(wildcard include/config/mach/himalaya.h) \
    $(wildcard include/config/mach/edb9312.h) \
    $(wildcard include/config/mach/omap/generic.h) \
    $(wildcard include/config/mach/edb9301.h) \
    $(wildcard include/config/mach/edb9315.h) \
    $(wildcard include/config/mach/vr1000.h) \
    $(wildcard include/config/mach/omap/perseus2.h) \
    $(wildcard include/config/mach/e800.h) \
    $(wildcard include/config/mach/e750.h) \
    $(wildcard include/config/mach/scb9328.h) \
    $(wildcard include/config/mach/omap/h3.h) \
    $(wildcard include/config/mach/omap/h4.h) \
    $(wildcard include/config/mach/omap/osk.h) \
    $(wildcard include/config/mach/tosa.h) \
    $(wildcard include/config/mach/avila.h) \
    $(wildcard include/config/mach/edb9302.h) \
    $(wildcard include/config/mach/husky.h) \
    $(wildcard include/config/mach/shepherd.h) \
    $(wildcard include/config/mach/h4700.h) \
    $(wildcard include/config/mach/rx3715.h) \
    $(wildcard include/config/mach/nslu2.h) \
    $(wildcard include/config/mach/e400.h) \
    $(wildcard include/config/mach/ixdpg425.h) \
    $(wildcard include/config/mach/versatile/ab.h) \
    $(wildcard include/config/mach/edb9307.h) \
    $(wildcard include/config/mach/kb9200.h) \
    $(wildcard include/config/mach/sx1.h) \
    $(wildcard include/config/mach/ixdp465.h) \
    $(wildcard include/config/mach/ixdp2351.h) \
    $(wildcard include/config/mach/cm4008.h) \
    $(wildcard include/config/mach/iq80332.h) \
    $(wildcard include/config/mach/gtwx5715.h) \
    $(wildcard include/config/mach/csb637.h) \
    $(wildcard include/config/mach/n30.h) \
    $(wildcard include/config/mach/nec/mp900.h) \
    $(wildcard include/config/mach/kafa.h) \
    $(wildcard include/config/mach/cm41xx.h) \
    $(wildcard include/config/mach/ts72xx.h) \
    $(wildcard include/config/mach/otom.h) \
    $(wildcard include/config/mach/nexcoder/2440.h) \
    $(wildcard include/config/mach/eco920.h) \
    $(wildcard include/config/mach/roadrunner.h) \
    $(wildcard include/config/mach/at91rm9200ek.h) \
    $(wildcard include/config/mach/spitz.h) \
    $(wildcard include/config/mach/adssphere.h) \
    $(wildcard include/config/mach/colibri.h) \
    $(wildcard include/config/mach/gateway7001.h) \
    $(wildcard include/config/mach/pcm027.h) \
    $(wildcard include/config/mach/anubis.h) \
    $(wildcard include/config/mach/xboardgp8.h) \
    $(wildcard include/config/mach/akita.h) \
    $(wildcard include/config/mach/e330.h) \
    $(wildcard include/config/mach/nokia770.h) \
    $(wildcard include/config/mach/carmeva.h) \
    $(wildcard include/config/mach/edb9315a.h) \
    $(wildcard include/config/mach/stargate2.h) \
    $(wildcard include/config/mach/intelmote2.h) \
    $(wildcard include/config/mach/trizeps4.h) \
    $(wildcard include/config/mach/pnx4008.h) \
    $(wildcard include/config/mach/cpuat91.h) \
    $(wildcard include/config/mach/iq81340sc.h) \
    $(wildcard include/config/mach/iq81340mc.h) \
    $(wildcard include/config/mach/se4200.h) \
    $(wildcard include/config/mach/micro9.h) \
    $(wildcard include/config/mach/micro9l.h) \
    $(wildcard include/config/mach/omap/palmte.h) \
    $(wildcard include/config/mach/realview/eb.h) \
    $(wildcard include/config/mach/borzoi.h) \
    $(wildcard include/config/mach/palmld.h) \
    $(wildcard include/config/mach/ixdp28x5.h) \
    $(wildcard include/config/mach/omap/palmtt.h) \
    $(wildcard include/config/mach/arcom/zeus.h) \
    $(wildcard include/config/mach/osiris.h) \
    $(wildcard include/config/mach/palmte2.h) \
    $(wildcard include/config/mach/mx27ads.h) \
    $(wildcard include/config/mach/at91sam9261ek.h) \
    $(wildcard include/config/mach/loft.h) \
    $(wildcard include/config/mach/mx21ads.h) \
    $(wildcard include/config/mach/ams/delta.h) \
    $(wildcard include/config/mach/nas100d.h) \
    $(wildcard include/config/mach/magician.h) \
    $(wildcard include/config/mach/cm4002.h) \
    $(wildcard include/config/mach/nxdkn.h) \
    $(wildcard include/config/mach/palmtx.h) \
    $(wildcard include/config/mach/s3c2413.h) \
    $(wildcard include/config/mach/wg302v2.h) \
    $(wildcard include/config/mach/omap/2430sdp.h) \
    $(wildcard include/config/mach/davinci/evm.h) \
    $(wildcard include/config/mach/palmz72.h) \
    $(wildcard include/config/mach/nxdb500.h) \
    $(wildcard include/config/mach/apf9328.h) \
    $(wildcard include/config/mach/palmt5.h) \
    $(wildcard include/config/mach/palmtc.h) \
    $(wildcard include/config/mach/omap/apollon.h) \
    $(wildcard include/config/mach/ateb9200.h) \
    $(wildcard include/config/mach/n35.h) \
    $(wildcard include/config/mach/logicpd/pxa270.h) \
    $(wildcard include/config/mach/nxeb500hmi.h) \
    $(wildcard include/config/mach/espresso.h) \
    $(wildcard include/config/mach/rx1950.h) \
    $(wildcard include/config/mach/gesbc9312.h) \
    $(wildcard include/config/mach/picotux2xx.h) \
    $(wildcard include/config/mach/dsmg600.h) \
    $(wildcard include/config/mach/omap/fsample.h) \
    $(wildcard include/config/mach/snapper/cl15.h) \
    $(wildcard include/config/mach/omap/palmz71.h) \
    $(wildcard include/config/mach/smdk2412.h) \
    $(wildcard include/config/mach/smdk2413.h) \
    $(wildcard include/config/mach/aml/m5900.h) \
    $(wildcard include/config/mach/balloon3.h) \
    $(wildcard include/config/mach/ecbat91.h) \
    $(wildcard include/config/mach/onearm.h) \
    $(wildcard include/config/mach/smdk2443.h) \
    $(wildcard include/config/mach/fsg.h) \
    $(wildcard include/config/mach/at91sam9260ek.h) \
    $(wildcard include/config/mach/glantank.h) \
    $(wildcard include/config/mach/n2100.h) \
    $(wildcard include/config/mach/im42xx.h) \
    $(wildcard include/config/mach/qt2410.h) \
    $(wildcard include/config/mach/kixrp435.h) \
    $(wildcard include/config/mach/cc9p9360dev.h) \
    $(wildcard include/config/mach/edb9302a.h) \
    $(wildcard include/config/mach/edb9307a.h) \
    $(wildcard include/config/mach/omap/3430sdp.h) \
    $(wildcard include/config/mach/vstms.h) \
    $(wildcard include/config/mach/micro9m.h) \
    $(wildcard include/config/mach/bug.h) \
    $(wildcard include/config/mach/at91sam9263ek.h) \
    $(wildcard include/config/mach/em7210.h) \
    $(wildcard include/config/mach/vpac270.h) \
    $(wildcard include/config/mach/treo680.h) \
    $(wildcard include/config/mach/zylonite.h) \
    $(wildcard include/config/mach/mx31lite.h) \
    $(wildcard include/config/mach/mioa701.h) \
    $(wildcard include/config/mach/armadillo5x0.h) \
    $(wildcard include/config/mach/cc9p9360js.h) \
    $(wildcard include/config/mach/smdk6400.h) \
    $(wildcard include/config/mach/nokia/n800.h) \
    $(wildcard include/config/mach/ep80219.h) \
    $(wildcard include/config/mach/goramo/mlr.h) \
    $(wildcard include/config/mach/em/x270.h) \
    $(wildcard include/config/mach/neo1973/gta02.h) \
    $(wildcard include/config/mach/at91sam9rlek.h) \
    $(wildcard include/config/mach/colibri320.h) \
    $(wildcard include/config/mach/cam60.h) \
    $(wildcard include/config/mach/at91eb01.h) \
    $(wildcard include/config/mach/db88f5281.h) \
    $(wildcard include/config/mach/csb726.h) \
    $(wildcard include/config/mach/davinci/dm6467/evm.h) \
    $(wildcard include/config/mach/davinci/dm355/evm.h) \
    $(wildcard include/config/mach/littleton.h) \
    $(wildcard include/config/mach/im4004.h) \
    $(wildcard include/config/mach/realview/pb11mp.h) \
    $(wildcard include/config/mach/mx27/3ds.h) \
    $(wildcard include/config/mach/halibut.h) \
    $(wildcard include/config/mach/trout.h) \
    $(wildcard include/config/mach/tct/hammer.h) \
    $(wildcard include/config/mach/herald.h) \
    $(wildcard include/config/mach/sim/one.h) \
    $(wildcard include/config/mach/jive.h) \
    $(wildcard include/config/mach/sam9/l9260.h) \
    $(wildcard include/config/mach/realview/pb1176.h) \
    $(wildcard include/config/mach/yl9200.h) \
    $(wildcard include/config/mach/rd88f5182.h) \
    $(wildcard include/config/mach/kurobox/pro.h) \
    $(wildcard include/config/mach/mx31/3ds.h) \
    $(wildcard include/config/mach/qong.h) \
    $(wildcard include/config/mach/omap2evm.h) \
    $(wildcard include/config/mach/omap3evm.h) \
    $(wildcard include/config/mach/dns323.h) \
    $(wildcard include/config/mach/omap3/beagle.h) \
    $(wildcard include/config/mach/nokia/n810.h) \
    $(wildcard include/config/mach/pcm038.h) \
    $(wildcard include/config/mach/sg310.h) \
    $(wildcard include/config/mach/ts209.h) \
    $(wildcard include/config/mach/at91cap9adk.h) \
    $(wildcard include/config/mach/mx31moboard.h) \
    $(wildcard include/config/mach/vision/ep9307.h) \
    $(wildcard include/config/mach/terastation/pro2.h) \
    $(wildcard include/config/mach/linkstation/pro.h) \
    $(wildcard include/config/mach/e350.h) \
    $(wildcard include/config/mach/ts409.h) \
    $(wildcard include/config/mach/rsi/ews.h) \
    $(wildcard include/config/mach/cm/x300.h) \
    $(wildcard include/config/mach/at91sam9g20ek.h) \
    $(wildcard include/config/mach/smdk6410.h) \
    $(wildcard include/config/mach/u300.h) \
    $(wildcard include/config/mach/wrt350n/v2.h) \
    $(wildcard include/config/mach/omap/ldp.h) \
    $(wildcard include/config/mach/mx35/3ds.h) \
    $(wildcard include/config/mach/neuros/osd2.h) \
    $(wildcard include/config/mach/trizeps4wl.h) \
    $(wildcard include/config/mach/ts78xx.h) \
    $(wildcard include/config/mach/sffsdr.h) \
    $(wildcard include/config/mach/pcm037.h) \
    $(wildcard include/config/mach/db88f6281/bp.h) \
    $(wildcard include/config/mach/rd88f6192/nas.h) \
    $(wildcard include/config/mach/rd88f6281.h) \
    $(wildcard include/config/mach/db78x00/bp.h) \
    $(wildcard include/config/mach/smdk2416.h) \
    $(wildcard include/config/mach/wbd111.h) \
    $(wildcard include/config/mach/mv2120.h) \
    $(wildcard include/config/mach/mx51/3ds.h) \
    $(wildcard include/config/mach/imx27lite.h) \
    $(wildcard include/config/mach/usb/a9260.h) \
    $(wildcard include/config/mach/usb/a9263.h) \
    $(wildcard include/config/mach/qil/a9260.h) \
    $(wildcard include/config/mach/kzm/arm11/01.h) \
    $(wildcard include/config/mach/nokia/n810/wimax.h) \
    $(wildcard include/config/mach/sapphire.h) \
    $(wildcard include/config/mach/stmp37xx.h) \
    $(wildcard include/config/mach/stmp378x.h) \
    $(wildcard include/config/mach/ezx/a780.h) \
    $(wildcard include/config/mach/ezx/e680.h) \
    $(wildcard include/config/mach/ezx/a1200.h) \
    $(wildcard include/config/mach/ezx/e6.h) \
    $(wildcard include/config/mach/ezx/e2.h) \
    $(wildcard include/config/mach/ezx/a910.h) \
    $(wildcard include/config/mach/edmini/v2.h) \
    $(wildcard include/config/mach/zipit2.h) \
    $(wildcard include/config/mach/omap3/pandora.h) \
    $(wildcard include/config/mach/mss2.h) \
    $(wildcard include/config/mach/lb88rc8480.h) \
    $(wildcard include/config/mach/mx25/3ds.h) \
    $(wildcard include/config/mach/omap3530/lv/som.h) \
    $(wildcard include/config/mach/davinci/da830/evm.h) \
    $(wildcard include/config/mach/dove/db.h) \
    $(wildcard include/config/mach/overo.h) \
    $(wildcard include/config/mach/at2440evb.h) \
    $(wildcard include/config/mach/neocore926.h) \
    $(wildcard include/config/mach/wnr854t.h) \
    $(wildcard include/config/mach/rd88f5181l/ge.h) \
    $(wildcard include/config/mach/rd88f5181l/fxo.h) \
    $(wildcard include/config/mach/stamp9g20.h) \
    $(wildcard include/config/mach/smdkc100.h) \
    $(wildcard include/config/mach/tavorevb.h) \
    $(wildcard include/config/mach/saar.h) \
    $(wildcard include/config/mach/at91sam9m10g45ek.h) \
    $(wildcard include/config/mach/usb/a9g20.h) \
    $(wildcard include/config/mach/mxlads.h) \
    $(wildcard include/config/mach/linkstation/mini.h) \
    $(wildcard include/config/mach/afeb9260.h) \
    $(wildcard include/config/mach/imx27ipcam.h) \
    $(wildcard include/config/mach/rd88f6183ap/ge.h) \
    $(wildcard include/config/mach/realview/pba8.h) \
    $(wildcard include/config/mach/realview/pbx.h) \
    $(wildcard include/config/mach/micro9s.h) \
    $(wildcard include/config/mach/rut100.h) \
    $(wildcard include/config/mach/g3evm.h) \
    $(wildcard include/config/mach/w90p910evb.h) \
    $(wildcard include/config/mach/w90p950evb.h) \
    $(wildcard include/config/mach/w90n960evb.h) \
    $(wildcard include/config/mach/mv88f6281gtw/ge.h) \
    $(wildcard include/config/mach/ncp.h) \
    $(wildcard include/config/mach/davinci/dm365/evm.h) \
    $(wildcard include/config/mach/centro.h) \
    $(wildcard include/config/mach/nokia/rx51.h) \
    $(wildcard include/config/mach/omap/zoom2.h) \
    $(wildcard include/config/mach/cpuat9260.h) \
    $(wildcard include/config/mach/eukrea/cpuimx27.h) \
    $(wildcard include/config/mach/acs5k.h) \
    $(wildcard include/config/mach/snapper/9260.h) \
    $(wildcard include/config/mach/dsm320.h) \
    $(wildcard include/config/mach/exeda.h) \
    $(wildcard include/config/mach/mini2440.h) \
    $(wildcard include/config/mach/colibri300.h) \
    $(wildcard include/config/mach/linkstation/ls/hgl.h) \
    $(wildcard include/config/mach/cpuat9g20.h) \
    $(wildcard include/config/mach/smdk6440.h) \
    $(wildcard include/config/mach/nas4220b.h) \
    $(wildcard include/config/mach/zylonite2.h) \
    $(wildcard include/config/mach/aspenite.h) \
    $(wildcard include/config/mach/ttc/dkb.h) \
    $(wildcard include/config/mach/pcm043.h) \
    $(wildcard include/config/mach/sheevaplug.h) \
    $(wildcard include/config/mach/avengers/lite.h) \
    $(wildcard include/config/mach/mx51/babbage.h) \
    $(wildcard include/config/mach/rd78x00/masa.h) \
    $(wildcard include/config/mach/dm355/leopard.h) \
    $(wildcard include/config/mach/ts219.h) \
    $(wildcard include/config/mach/pca100.h) \
    $(wildcard include/config/mach/davinci/da850/evm.h) \
    $(wildcard include/config/mach/at91sam9g10ek.h) \
    $(wildcard include/config/mach/omap/4430sdp.h) \
    $(wildcard include/config/mach/magx/zn5.h) \
    $(wildcard include/config/mach/omap3/torpedo.h) \
    $(wildcard include/config/mach/anw6410.h) \
    $(wildcard include/config/mach/imx27/visstrim/m10.h) \
    $(wildcard include/config/mach/portuxg20.h) \
    $(wildcard include/config/mach/smdkc110.h) \
    $(wildcard include/config/mach/cabespresso.h) \
    $(wildcard include/config/mach/omap3517evm.h) \
    $(wildcard include/config/mach/netspace/v2.h) \
    $(wildcard include/config/mach/netspace/max/v2.h) \
    $(wildcard include/config/mach/d2net/v2.h) \
    $(wildcard include/config/mach/net2big/v2.h) \
    $(wildcard include/config/mach/net5big/v2.h) \
    $(wildcard include/config/mach/inetspace/v2.h) \
    $(wildcard include/config/mach/at91sam9g45ekes.h) \
    $(wildcard include/config/mach/spear600.h) \
    $(wildcard include/config/mach/spear300.h) \
    $(wildcard include/config/mach/lilly1131.h) \
    $(wildcard include/config/mach/hmt.h) \
    $(wildcard include/config/mach/vexpress.h) \
    $(wildcard include/config/mach/d2net.h) \
    $(wildcard include/config/mach/bigdisk.h) \
    $(wildcard include/config/mach/at91sam9g20ek/2mmc.h) \
    $(wildcard include/config/mach/bcmring.h) \
    $(wildcard include/config/mach/mahimahi.h) \
    $(wildcard include/config/mach/cerebric.h) \
    $(wildcard include/config/mach/smdk6442.h) \
    $(wildcard include/config/mach/openrd/base.h) \
    $(wildcard include/config/mach/devkit8000.h) \
    $(wildcard include/config/mach/mx51/efikamx.h) \
    $(wildcard include/config/mach/cm/t35.h) \
    $(wildcard include/config/mach/net2big.h) \
    $(wildcard include/config/mach/igep0020.h) \
    $(wildcard include/config/mach/nuc932evb.h) \
    $(wildcard include/config/mach/openrd/client.h) \
    $(wildcard include/config/mach/u8500.h) \
    $(wildcard include/config/mach/mx51/efikasb.h) \
    $(wildcard include/config/mach/marvell/jasper.h) \
    $(wildcard include/config/mach/flint.h) \
    $(wildcard include/config/mach/tavorevb3.h) \
    $(wildcard include/config/mach/touchbook.h) \
    $(wildcard include/config/mach/raumfeld/rc.h) \
    $(wildcard include/config/mach/raumfeld/connector.h) \
    $(wildcard include/config/mach/raumfeld/speaker.h) \
    $(wildcard include/config/mach/tnetv107x.h) \
    $(wildcard include/config/mach/smdkv210.h) \
    $(wildcard include/config/mach/omap/zoom3.h) \
    $(wildcard include/config/mach/omap/3630sdp.h) \
    $(wildcard include/config/mach/cybook2440.h) \
    $(wildcard include/config/mach/smartq7.h) \
    $(wildcard include/config/mach/watson/efm/plugin.h) \
    $(wildcard include/config/mach/g4evm.h) \
    $(wildcard include/config/mach/omapl138/hawkboard.h) \
    $(wildcard include/config/mach/ts41x.h) \
    $(wildcard include/config/mach/phy3250.h) \
    $(wildcard include/config/mach/mini6410.h) \
    $(wildcard include/config/mach/mx28evk.h) \
    $(wildcard include/config/mach/smartq5.h) \
    $(wildcard include/config/mach/davinci/dm6467tevm.h) \
    $(wildcard include/config/mach/mxt/td60.h) \
    $(wildcard include/config/mach/capc7117.h) \
    $(wildcard include/config/mach/icontrol.h) \
    $(wildcard include/config/mach/gplugd.h) \
    $(wildcard include/config/mach/qsd8x50a/st1/5.h) \
    $(wildcard include/config/mach/mx23evk.h) \
    $(wildcard include/config/mach/ap4evb.h) \
    $(wildcard include/config/mach/mityomapl138.h) \
    $(wildcard include/config/mach/guruplug.h) \
    $(wildcard include/config/mach/spear310.h) \
    $(wildcard include/config/mach/spear320.h) \
    $(wildcard include/config/mach/aquila.h) \
    $(wildcard include/config/mach/esata/sheevaplug.h) \
    $(wildcard include/config/mach/msm7x30/surf.h) \
    $(wildcard include/config/mach/terastation/wxl.h) \
    $(wildcard include/config/mach/msm7x25/surf.h) \
    $(wildcard include/config/mach/msm7x25/ffa.h) \
    $(wildcard include/config/mach/msm7x27/surf.h) \
    $(wildcard include/config/mach/msm7x27/ffa.h) \
    $(wildcard include/config/mach/msm7x30/ffa.h) \
    $(wildcard include/config/mach/qsd8x50/surf.h) \
    $(wildcard include/config/mach/mx53/evk.h) \
    $(wildcard include/config/mach/igep0030.h) \
    $(wildcard include/config/mach/sbc3530.h) \
    $(wildcard include/config/mach/saarb.h) \
    $(wildcard include/config/mach/harmony.h) \
    $(wildcard include/config/mach/cybook/orizon.h) \
    $(wildcard include/config/mach/msm7x30/fluid.h) \
    $(wildcard include/config/mach/cm/t3517.h) \
    $(wildcard include/config/mach/wbd222.h) \
    $(wildcard include/config/mach/msm8x60/surf.h) \
    $(wildcard include/config/mach/msm8x60/sim.h) \
    $(wildcard include/config/mach/tcc8000/sdk.h) \
    $(wildcard include/config/mach/cns3420vb.h) \
    $(wildcard include/config/mach/omap4/panda.h) \
    $(wildcard include/config/mach/ti8168evm.h) \
    $(wildcard include/config/mach/teton/bga.h) \
    $(wildcard include/config/mach/eukrea/cpuimx25sd.h) \
    $(wildcard include/config/mach/eukrea/cpuimx35sd.h) \
    $(wildcard include/config/mach/eukrea/cpuimx51sd.h) \
    $(wildcard include/config/mach/eukrea/cpuimx51.h) \
    $(wildcard include/config/mach/smdkc210.h) \
    $(wildcard include/config/mach/t5325.h) \
    $(wildcard include/config/mach/income.h) \
    $(wildcard include/config/mach/goni.h) \
    $(wildcard include/config/mach/bv07.h) \
    $(wildcard include/config/mach/openrd/ultimate.h) \
    $(wildcard include/config/mach/devixp.h) \
    $(wildcard include/config/mach/miccpt.h) \
    $(wildcard include/config/mach/mic256.h) \
    $(wildcard include/config/mach/u5500.h) \
    $(wildcard include/config/mach/linkstation/lschl.h) \
    $(wildcard include/config/mach/smdkv310.h) \
    $(wildcard include/config/mach/wm8505/7in/netbook.h) \
    $(wildcard include/config/mach/craneboard.h) \
    $(wildcard include/config/mach/smdk6450.h) \
    $(wildcard include/config/mach/brownstone.h) \
    $(wildcard include/config/mach/flexibity.h) \
    $(wildcard include/config/mach/mx50/rdp.h) \
    $(wildcard include/config/mach/universal/c210.h) \
    $(wildcard include/config/mach/real6410.h) \
    $(wildcard include/config/mach/dockstar.h) \
    $(wildcard include/config/mach/ti8148evm.h) \
    $(wildcard include/config/mach/seaboard.h) \
    $(wildcard include/config/mach/mx53/ard.h) \
    $(wildcard include/config/mach/mx53/smd.h) \
    $(wildcard include/config/mach/msm8x60/rumi3.h) \
    $(wildcard include/config/mach/msm8x60/ffa.h) \
    $(wildcard include/config/mach/cm/a510.h) \
    $(wildcard include/config/mach/tx28.h) \
    $(wildcard include/config/mach/pcontrol/g20.h) \
    $(wildcard include/config/mach/vpr200.h) \
    $(wildcard include/config/mach/torbreck.h) \
    $(wildcard include/config/mach/prima2/evb.h) \
    $(wildcard include/config/mach/paz00.h) \
    $(wildcard include/config/mach/acmenetusfoxg20.h) \
    $(wildcard include/config/mach/ag5evm.h) \
    $(wildcard include/config/mach/ics/if/voip.h) \
    $(wildcard include/config/mach/wlf/cragg/6410.h) \
    $(wildcard include/config/mach/trimslice.h) \
    $(wildcard include/config/mach/mackerel.h) \
    $(wildcard include/config/mach/kaen.h) \
    $(wildcard include/config/mach/nokia/rm680.h) \
    $(wildcard include/config/mach/msm8960/sim.h) \
    $(wildcard include/config/mach/msm8960/rumi3.h) \
    $(wildcard include/config/mach/gsia18s.h) \
    $(wildcard include/config/mach/mx53/loco.h) \
    $(wildcard include/config/mach/wario.h) \
    $(wildcard include/config/mach/cm/t3730.h) \
    $(wildcard include/config/mach/hrefv60.h) \
    $(wildcard include/config/mach/armlex4210.h) \
    $(wildcard include/config/mach/snowball.h) \
    $(wildcard include/config/mach/xilinx/ep107.h) \
    $(wildcard include/config/mach/nuri.h) \
    $(wildcard include/config/mach/origen.h) \
    $(wildcard include/config/mach/nspire.h) \
    $(wildcard include/config/mach/nokia/rm696.h) \
    $(wildcard include/config/mach/mikrap/x168.h) \
    $(wildcard include/config/mach/deto/macarm9.h) \
    $(wildcard include/config/mach/m28evk.h) \
    $(wildcard include/config/mach/kota2.h) \
    $(wildcard include/config/mach/bonito.h) \
    $(wildcard include/config/mach/omap3/egf.h) \
    $(wildcard include/config/mach/smdk4212.h) \
    $(wildcard include/config/mach/apx4devkit.h) \
    $(wildcard include/config/mach/smdk4412.h) \
    $(wildcard include/config/mach/marzen.h) \
    $(wildcard include/config/mach/krome.h) \
    $(wildcard include/config/mach/armadillo800eva.h) \
    $(wildcard include/config/mach/mx53/umobo.h) \
    $(wildcard include/config/mach/mt4.h) \
    $(wildcard include/config/mach/u8520.h) \
    $(wildcard include/config/mach/chupacabra.h) \
    $(wildcard include/config/mach/scorpion.h) \
    $(wildcard include/config/mach/davinci/he/hmi10.h) \
    $(wildcard include/config/mach/topkick.h) \
    $(wildcard include/config/mach/m3/auguestrush.h) \
    $(wildcard include/config/mach/ipc335x.h) \
    $(wildcard include/config/mach/sun4i.h) \
    $(wildcard include/config/mach/imx233/olinuxino.h) \
    $(wildcard include/config/mach/k2/wl.h) \
    $(wildcard include/config/mach/k2/ul.h) \
    $(wildcard include/config/mach/k2/cl.h) \
    $(wildcard include/config/mach/minbari/w.h) \
    $(wildcard include/config/mach/minbari/m.h) \
    $(wildcard include/config/mach/k035.h) \
    $(wildcard include/config/mach/ariel.h) \
    $(wildcard include/config/mach/arielsaarc.h) \
    $(wildcard include/config/mach/arieldkb.h) \
    $(wildcard include/config/mach/armadillo810.h) \
    $(wildcard include/config/mach/tam335x.h) \
    $(wildcard include/config/mach/grouper.h) \
    $(wildcard include/config/mach/mpcsa21/9g20.h) \
    $(wildcard include/config/mach/m6u/cpu.h) \
    $(wildcard include/config/mach/ginkgo.h) \
    $(wildcard include/config/mach/cgt/qmx6.h) \
    $(wildcard include/config/mach/profpga.h) \
    $(wildcard include/config/mach/acfx100oc.h) \
    $(wildcard include/config/mach/acfx100nb.h) \
    $(wildcard include/config/mach/capricorn.h) \
    $(wildcard include/config/mach/pisces.h) \
    $(wildcard include/config/mach/aries.h) \
    $(wildcard include/config/mach/cancer.h) \
    $(wildcard include/config/mach/leo.h) \
    $(wildcard include/config/mach/virgo.h) \
    $(wildcard include/config/mach/sagittarius.h) \
    $(wildcard include/config/mach/devil.h) \
    $(wildcard include/config/mach/ballantines.h) \
    $(wildcard include/config/mach/omap3/procerusvpu.h) \
    $(wildcard include/config/mach/my27.h) \
    $(wildcard include/config/mach/sun6i.h) \
    $(wildcard include/config/mach/sun5i.h) \
    $(wildcard include/config/mach/mx512/mx.h) \
    $(wildcard include/config/mach/kzm9g.h) \
    $(wildcard include/config/mach/vdstbn.h) \
    $(wildcard include/config/mach/cfa10036.h) \
    $(wildcard include/config/mach/cfa10049.h) \
    $(wildcard include/config/mach/pcm051.h) \
    $(wildcard include/config/mach/vybrid/vf7xx.h) \
    $(wildcard include/config/mach/vybrid/vf6xx.h) \
    $(wildcard include/config/mach/vybrid/vf5xx.h) \
    $(wildcard include/config/mach/vybrid/vf4xx.h) \
    $(wildcard include/config/mach/aria/g25.h) \
    $(wildcard include/config/mach/bcm21553.h) \
    $(wildcard include/config/mach/smdk5410.h) \
    $(wildcard include/config/mach/lpc18xx.h) \
    $(wildcard include/config/mach/oratisparty.h) \
    $(wildcard include/config/mach/qseven.h) \
    $(wildcard include/config/mach/gmv/generic.h) \
    $(wildcard include/config/mach/th/link/eth.h) \
    $(wildcard include/config/mach/tn/muninn.h) \
    $(wildcard include/config/mach/rampage.h) \
    $(wildcard include/config/mach/visstrim/mv10.h) \
    $(wildcard include/config/mach/mx28/wilma.h) \
    $(wildcard include/config/mach/msm8625/ffa.h) \
    $(wildcard include/config/mach/vpu101.h) \
    $(wildcard include/config/mach/baileys.h) \
    $(wildcard include/config/mach/familybox.h) \
    $(wildcard include/config/mach/ensemble/mx35.h) \
    $(wildcard include/config/mach/sc/sps/1.h) \
    $(wildcard include/config/mach/ucsimply/sam9260.h) \
    $(wildcard include/config/mach/unicorn.h) \
    $(wildcard include/config/mach/m9g45a.h) \
    $(wildcard include/config/mach/mtwebif.h) \
    $(wildcard include/config/mach/playstone.h) \
    $(wildcard include/config/mach/chelsea.h) \
    $(wildcard include/config/mach/bayern.h) \
    $(wildcard include/config/mach/mitwo.h) \
    $(wildcard include/config/mach/mx25/noah.h) \
    $(wildcard include/config/mach/stm/b2020.h) \
    $(wildcard include/config/mach/annax/src.h) \
    $(wildcard include/config/mach/ionics/stratus.h) \
    $(wildcard include/config/mach/hugo.h) \
    $(wildcard include/config/mach/em300.h) \
    $(wildcard include/config/mach/mmp3/qseven.h) \
    $(wildcard include/config/mach/bosphorus2.h) \
    $(wildcard include/config/mach/tt2200.h) \
    $(wildcard include/config/mach/ocelot3.h) \
    $(wildcard include/config/mach/tek/cobra.h) \
    $(wildcard include/config/mach/protou.h) \
    $(wildcard include/config/mach/msm8625/evt.h) \
    $(wildcard include/config/mach/mx53/sellwood.h) \
    $(wildcard include/config/mach/somiq/am35.h) \
    $(wildcard include/config/mach/somiq/am37.h) \
    $(wildcard include/config/mach/k2/plc/cl.h) \
    $(wildcard include/config/mach/tc2.h) \
    $(wildcard include/config/mach/dulex/j.h) \
    $(wildcard include/config/mach/stm/b2044.h) \
    $(wildcard include/config/mach/deluxe/j.h) \
    $(wildcard include/config/mach/mango2443.h) \
    $(wildcard include/config/mach/cp2dcg.h) \
    $(wildcard include/config/mach/cp2dtg.h) \
    $(wildcard include/config/mach/cp2dug.h) \
    $(wildcard include/config/mach/var/som/am33.h) \
    $(wildcard include/config/mach/pepper.h) \
    $(wildcard include/config/mach/mango2450.h) \
    $(wildcard include/config/mach/valente/wx/c9.h) \
    $(wildcard include/config/mach/minitv.h) \
    $(wildcard include/config/mach/u8540.h) \
    $(wildcard include/config/mach/iv/atlas/i/z7e.h) \
    $(wildcard include/config/mach/mach/type/sky.h) \
    $(wildcard include/config/mach/bluesky.h) \
    $(wildcard include/config/mach/ngrouter.h) \
    $(wildcard include/config/mach/mx53/denetim.h) \
    $(wildcard include/config/mach/opal.h) \
    $(wildcard include/config/mach/gnet/us3gref.h) \
    $(wildcard include/config/mach/gnet/nc3g.h) \
    $(wildcard include/config/mach/gnet/ge3g.h) \
    $(wildcard include/config/mach/adp2.h) \
    $(wildcard include/config/mach/tqma28.h) \
    $(wildcard include/config/mach/kacom3.h) \
    $(wildcard include/config/mach/rrhdemo.h) \
    $(wildcard include/config/mach/protodug.h) \
    $(wildcard include/config/mach/lago.h) \
    $(wildcard include/config/mach/ktt30.h) \
    $(wildcard include/config/mach/ts43xx.h) \
    $(wildcard include/config/mach/mx6q/denso.h) \
    $(wildcard include/config/mach/comsat/gsmumts8.h) \
    $(wildcard include/config/mach/dreamx.h) \
    $(wildcard include/config/mach/thunderstonem.h) \
    $(wildcard include/config/mach/yoyopad.h) \
    $(wildcard include/config/mach/yoyopatient.h) \
    $(wildcard include/config/mach/a10l.h) \
    $(wildcard include/config/mach/mq60.h) \
    $(wildcard include/config/mach/linkstation/lsql.h) \
    $(wildcard include/config/mach/am3703gateway.h) \
    $(wildcard include/config/mach/accipiter.h) \
    $(wildcard include/config/mach/magnidug.h) \
    $(wildcard include/config/mach/hydra.h) \
    $(wildcard include/config/mach/sun3i.h) \
    $(wildcard include/config/mach/stm/b2078.h) \
    $(wildcard include/config/mach/at91sam9263deskv2.h) \
    $(wildcard include/config/mach/deluxe/r.h) \
    $(wildcard include/config/mach/p/98/v.h) \
    $(wildcard include/config/mach/p/98/c.h) \
    $(wildcard include/config/mach/davinci/am18xx/omn.h) \
    $(wildcard include/config/mach/socfpga/cyclone5.h) \
    $(wildcard include/config/mach/cabatuin.h) \
    $(wildcard include/config/mach/yoyopad/ft.h) \
    $(wildcard include/config/mach/dan2400evb.h) \
    $(wildcard include/config/mach/dan3400evb.h) \
    $(wildcard include/config/mach/edm/sf/imx6.h) \
    $(wildcard include/config/mach/edm/cf/imx6.h) \
    $(wildcard include/config/mach/vpos3xx.h) \
    $(wildcard include/config/mach/vulcano/9x5.h) \
    $(wildcard include/config/mach/spmp8000.h) \
    $(wildcard include/config/mach/catalina.h) \
    $(wildcard include/config/mach/rd88f5181l/fe.h) \
    $(wildcard include/config/mach/mx535/mx.h) \
    $(wildcard include/config/mach/armadillo840.h) \
    $(wildcard include/config/mach/spc9000baseboard.h) \
    $(wildcard include/config/mach/iris.h) \
    $(wildcard include/config/mach/protodcg.h) \
    $(wildcard include/config/mach/palmtree.h) \
    $(wildcard include/config/mach/novena.h) \
    $(wildcard include/config/mach/ma/um.h) \
    $(wildcard include/config/mach/ma/am.h) \
    $(wildcard include/config/mach/ems348.h) \
    $(wildcard include/config/mach/cm/fx6.h) \
    $(wildcard include/config/mach/arndale.h) \
    $(wildcard include/config/mach/q5xr5.h) \
    $(wildcard include/config/mach/willow.h) \
    $(wildcard include/config/mach/omap3621/odyv3.h) \
    $(wildcard include/config/mach/omapl138/presonus.h) \
    $(wildcard include/config/mach/dvf99.h) \
    $(wildcard include/config/mach/impression/j.h) \
    $(wildcard include/config/mach/qblissa9.h) \
    $(wildcard include/config/mach/robin/heliview10.h) \
    $(wildcard include/config/mach/sun7i.h) \
    $(wildcard include/config/mach/mx6q/hdmidongle.h) \
    $(wildcard include/config/mach/mx6/sid2.h) \
    $(wildcard include/config/mach/helios/v3.h) \
    $(wildcard include/config/mach/helios/v4.h) \
    $(wildcard include/config/mach/q7/imx6.h) \
    $(wildcard include/config/mach/odroidx.h) \
    $(wildcard include/config/mach/robpro.h) \
    $(wildcard include/config/mach/research59if/mk1.h) \
    $(wildcard include/config/mach/bobsleigh.h) \
    $(wildcard include/config/mach/dcshgwt3.h) \
    $(wildcard include/config/mach/gld1018.h) \
    $(wildcard include/config/mach/ev10.h) \
    $(wildcard include/config/mach/nitrogen6x.h) \
    $(wildcard include/config/mach/p/107/bb.h) \
    $(wildcard include/config/mach/evita/utl.h) \
    $(wildcard include/config/mach/falconwing.h) \
    $(wildcard include/config/mach/dct3.h) \
    $(wildcard include/config/mach/cpx2e/cell.h) \
    $(wildcard include/config/mach/amiro.h) \
    $(wildcard include/config/mach/mx6q/brassboard.h) \
    $(wildcard include/config/mach/dalmore.h) \
    $(wildcard include/config/mach/omap3/portal7cp.h) \
    $(wildcard include/config/mach/tegra/pluto.h) \
    $(wildcard include/config/mach/mx6sl/evk.h) \
    $(wildcard include/config/mach/m7.h) \
    $(wildcard include/config/mach/pxm2.h) \
    $(wildcard include/config/mach/haba/knx/lite.h) \
    $(wildcard include/config/mach/tai.h) \
    $(wildcard include/config/mach/prototd.h) \
    $(wildcard include/config/mach/dst/tonto.h) \
    $(wildcard include/config/mach/draco.h) \
    $(wildcard include/config/mach/dxr2.h) \
    $(wildcard include/config/mach/rut.h) \
    $(wildcard include/config/mach/am180x/wsc.h) \
    $(wildcard include/config/mach/deluxe/u.h) \
    $(wildcard include/config/mach/deluxe/ul.h) \
    $(wildcard include/config/mach/at91sam9260medths.h) \
    $(wildcard include/config/mach/matrix516.h) \
    $(wildcard include/config/mach/vid401x.h) \
    $(wildcard include/config/mach/helios/v5.h) \
    $(wildcard include/config/mach/playpaq2.h) \
    $(wildcard include/config/mach/igam.h) \
    $(wildcard include/config/mach/amico/i.h) \
    $(wildcard include/config/mach/amico/e.h) \
    $(wildcard include/config/mach/sentient/mm3/ck.h) \
    $(wildcard include/config/mach/smx6.h) \
    $(wildcard include/config/mach/pango.h) \
    $(wildcard include/config/mach/ns115/stick.h) \
    $(wildcard include/config/mach/bctrm3.h) \
    $(wildcard include/config/mach/doctorws.h) \
    $(wildcard include/config/mach/m2601.h) \
    $(wildcard include/config/mach/vgg1111.h) \
    $(wildcard include/config/mach/countach.h) \
    $(wildcard include/config/mach/visstrim/sm20.h) \
    $(wildcard include/config/mach/a639.h) \
    $(wildcard include/config/mach/spacemonkey.h) \
    $(wildcard include/config/mach/zpdu/stamp.h) \
    $(wildcard include/config/mach/htc/g7/clone.h) \
    $(wildcard include/config/mach/ft2080/corvus.h) \
    $(wildcard include/config/mach/fisland.h) \
    $(wildcard include/config/mach/zpdu.h) \
    $(wildcard include/config/mach/urt.h) \
    $(wildcard include/config/mach/conti/ovip.h) \
    $(wildcard include/config/mach/omapl138/nagra.h) \
    $(wildcard include/config/mach/da850/at3kp1.h) \
    $(wildcard include/config/mach/da850/at3kp2.h) \
    $(wildcard include/config/mach/surma.h) \
    $(wildcard include/config/mach/stm/b2092.h) \
    $(wildcard include/config/mach/mx535/ycr.h) \
    $(wildcard include/config/mach/m7/wl.h) \
    $(wildcard include/config/mach/m7/u.h) \
    $(wildcard include/config/mach/omap3/stndt/evm.h) \
    $(wildcard include/config/mach/m7/wlv.h) \
    $(wildcard include/config/mach/xam3517.h) \
    $(wildcard include/config/mach/a220.h) \
    $(wildcard include/config/mach/aclima/odie.h) \
    $(wildcard include/config/mach/vibble.h) \
    $(wildcard include/config/mach/k2/u.h) \
    $(wildcard include/config/mach/mx53/egf.h) \
    $(wildcard include/config/mach/novpek/imx53.h) \
    $(wildcard include/config/mach/novpek/imx6x.h) \
    $(wildcard include/config/mach/mx25/smartbox.h) \
    $(wildcard include/config/mach/eicg6410.h) \
    $(wildcard include/config/mach/picasso/e3.h) \
    $(wildcard include/config/mach/motonavigator.h) \
    $(wildcard include/config/mach/varioconnect2.h) \
    $(wildcard include/config/mach/deluxe/tw.h) \
    $(wildcard include/config/mach/kore3.h) \
    $(wildcard include/config/mach/mx6s/drs.h) \
    $(wildcard include/config/mach/cmimx6.h) \
    $(wildcard include/config/mach/roth.h) \
    $(wildcard include/config/mach/eq4ux.h) \
    $(wildcard include/config/mach/x1plus.h) \
    $(wildcard include/config/mach/modimx27.h) \
    $(wildcard include/config/mach/videon/hduac.h) \
    $(wildcard include/config/mach/blackbird.h) \
    $(wildcard include/config/mach/runmaster.h) \
    $(wildcard include/config/mach/ceres.h) \
    $(wildcard include/config/mach/nad435.h) \
    $(wildcard include/config/mach/ns115/proto/type.h) \
    $(wildcard include/config/mach/fs20/vcc.h) \
    $(wildcard include/config/mach/meson6tv/skt.h) \
    $(wildcard include/config/mach/keystone.h) \
    $(wildcard include/config/mach/pcm052.h) \
    $(wildcard include/config/mach/qrd/skud/prime.h) \
    $(wildcard include/config/mach/guf/santaro.h) \
    $(wildcard include/config/mach/sheepshead.h) \
    $(wildcard include/config/mach/mx6/iwg15m/mxm.h) \
    $(wildcard include/config/mach/mx6/iwg15m/q7.h) \
    $(wildcard include/config/mach/at91sam9263if8mic.h) \
    $(wildcard include/config/mach/marcopolo.h) \
    $(wildcard include/config/mach/mx535/sdcr.h) \
    $(wildcard include/config/mach/mx53/csb2733.h) \
    $(wildcard include/config/mach/diva.h) \
    $(wildcard include/config/mach/ncr/7744.h) \
    $(wildcard include/config/mach/macallan.h) \
    $(wildcard include/config/mach/wnr3500.h) \
    $(wildcard include/config/mach/pgavrf.h) \
    $(wildcard include/config/mach/helios/v6.h) \
    $(wildcard include/config/mach/lcct.h) \
    $(wildcard include/config/mach/csndug.h) \
    $(wildcard include/config/mach/wandboard/imx6.h) \
    $(wildcard include/config/mach/omap4/jet.h) \
    $(wildcard include/config/mach/tegra/roth.h) \
    $(wildcard include/config/mach/m7dcg.h) \
    $(wildcard include/config/mach/m7dug.h) \
    $(wildcard include/config/mach/m7dtg.h) \
    $(wildcard include/config/mach/ap42x.h) \
    $(wildcard include/config/mach/var/som/mx6.h) \
    $(wildcard include/config/mach/pdlu.h) \
    $(wildcard include/config/mach/hydrogen.h) \
    $(wildcard include/config/mach/npa211e.h) \
    $(wildcard include/config/mach/arcadia.h) \
    $(wildcard include/config/mach/arcadia/l.h) \
    $(wildcard include/config/mach/msm8930dt.h) \
    $(wildcard include/config/mach/ktam3874.h) \
    $(wildcard include/config/mach/cec4.h) \
    $(wildcard include/config/mach/ape6evm.h) \
    $(wildcard include/config/mach/tx6.h) \
    $(wildcard include/config/mach/cfa10037.h) \
    $(wildcard include/config/mach/ezp1000.h) \
    $(wildcard include/config/mach/wgr826v.h) \
    $(wildcard include/config/mach/exuma.h) \
    $(wildcard include/config/mach/fregate.h) \
    $(wildcard include/config/mach/osirisimx508.h) \
    $(wildcard include/config/mach/st/exigo.h) \
    $(wildcard include/config/mach/pismo.h) \
    $(wildcard include/config/mach/atc7.h) \
    $(wildcard include/config/mach/nspireclp.h) \
    $(wildcard include/config/mach/nspiretp.h) \
    $(wildcard include/config/mach/nspirecx.h) \
    $(wildcard include/config/mach/maya.h) \
    $(wildcard include/config/mach/wecct.h) \
    $(wildcard include/config/mach/m2s.h) \
    $(wildcard include/config/mach/msm8625q/evbd.h) \
    $(wildcard include/config/mach/tiny210.h) \
    $(wildcard include/config/mach/g3.h) \
    $(wildcard include/config/mach/hurricane.h) \
    $(wildcard include/config/mach/mx6/pod.h) \
    $(wildcard include/config/mach/elondcn.h) \
    $(wildcard include/config/mach/cwmx535.h) \
    $(wildcard include/config/mach/m7/wlj.h) \
    $(wildcard include/config/mach/qsp/arm.h) \
    $(wildcard include/config/mach/msm8625q/skud.h) \
    $(wildcard include/config/mach/htcmondrian.h) \
    $(wildcard include/config/mach/watson/ead.h) \
    $(wildcard include/config/mach/mitwoa.h) \
    $(wildcard include/config/mach/omap3/wolverine.h) \
    $(wildcard include/config/mach/mapletree.h) \
    $(wildcard include/config/mach/msm8625/fih/sae.h) \
    $(wildcard include/config/mach/epc35.h) \
    $(wildcard include/config/mach/smartrtu.h) \
    $(wildcard include/config/mach/rcm101.h) \
    $(wildcard include/config/mach/amx/imx53/mxx.h) \
    $(wildcard include/config/mach/acer/a12.h) \
    $(wildcard include/config/mach/sbc6x.h) \
    $(wildcard include/config/mach/u2.h) \
    $(wildcard include/config/mach/smdk4270.h) \
    $(wildcard include/config/mach/priscillag.h) \
    $(wildcard include/config/mach/priscillac.h) \
    $(wildcard include/config/mach/priscilla.h) \
    $(wildcard include/config/mach/innova/shpu/v2.h) \
    $(wildcard include/config/mach/mach/type/dep2410.h) \
    $(wildcard include/config/mach/bctre3.h) \
    $(wildcard include/config/mach/omap/m100.h) \
    $(wildcard include/config/mach/flo.h) \
    $(wildcard include/config/mach/nanobone.h) \
    $(wildcard include/config/mach/stm/b2105.h) \
    $(wildcard include/config/mach/omap4/bsc/bap/v3.h) \
    $(wildcard include/config/mach/ss1pam.h) \
    $(wildcard include/config/mach/primominiu.h) \
    $(wildcard include/config/mach/mrt/35hd/dualnas/e.h) \
    $(wildcard include/config/mach/kiwi.h) \
    $(wildcard include/config/mach/hw90496.h) \
    $(wildcard include/config/mach/mep2440.h) \
    $(wildcard include/config/mach/colibri/t30.h) \
    $(wildcard include/config/mach/cwv1.h) \
    $(wildcard include/config/mach/nsa325.h) \
    $(wildcard include/config/mach/dpxmtc.h) \
    $(wildcard include/config/mach/tt/stuttgart.h) \
    $(wildcard include/config/mach/miranda/apcii.h) \
    $(wildcard include/config/mach/mx6q/moderox.h) \
    $(wildcard include/config/mach/mudskipper.h) \
    $(wildcard include/config/mach/urania.h) \
    $(wildcard include/config/mach/stm/b2112.h) \
    $(wildcard include/config/mach/mx6q/ats/phoenix.h) \
    $(wildcard include/config/mach/stm/b2116.h) \
    $(wildcard include/config/mach/mythology.h) \
    $(wildcard include/config/mach/fc360v1.h) \
    $(wildcard include/config/mach/gps/sensor.h) \
    $(wildcard include/config/mach/gazelle.h) \
    $(wildcard include/config/mach/mpq8064/dma.h) \
    $(wildcard include/config/mach/wems/asd01.h) \
    $(wildcard include/config/mach/apalis/t30.h) \
    $(wildcard include/config/mach/armstonea9.h) \
    $(wildcard include/config/mach/omap/blazetablet.h) \
    $(wildcard include/config/mach/ar6mxq.h) \
    $(wildcard include/config/mach/ar6mxs.h) \
    $(wildcard include/config/mach/gwventana.h) \
    $(wildcard include/config/mach/igep0033.h) \
    $(wildcard include/config/mach/h52c1/concerto.h) \
    $(wildcard include/config/mach/fcmbrd.h) \
    $(wildcard include/config/mach/pcaaxs1.h) \
    $(wildcard include/config/mach/ls/orca.h) \
    $(wildcard include/config/mach/pcm051lb.h) \
    $(wildcard include/config/mach/mx6s/lp507/gvci.h) \
    $(wildcard include/config/mach/dido.h) \
    $(wildcard include/config/mach/swarco/itc3/9g20.h) \
    $(wildcard include/config/mach/robo/roady.h) \
    $(wildcard include/config/mach/rskrza1.h) \
    $(wildcard include/config/mach/swarco/sid.h) \
    $(wildcard include/config/mach/mx6/iwg15s/sbc.h) \
    $(wildcard include/config/mach/mx6q/camaro.h) \
    $(wildcard include/config/mach/hb6mxs.h) \
    $(wildcard include/config/mach/lager.h) \
    $(wildcard include/config/mach/lp8x4x.h) \
    $(wildcard include/config/mach/tegratab7.h) \
    $(wildcard include/config/mach/andromeda.h) \
    $(wildcard include/config/mach/bootes.h) \
    $(wildcard include/config/mach/nethmi.h) \
    $(wildcard include/config/mach/tegratab.h) \
    $(wildcard include/config/mach/som5/evb.h) \
    $(wildcard include/config/mach/venaticorum.h) \
    $(wildcard include/config/mach/stm/b2110.h) \
    $(wildcard include/config/mach/elux/hathor.h) \
    $(wildcard include/config/mach/helios/v7.h) \
    $(wildcard include/config/mach/xc10v1.h) \
    $(wildcard include/config/mach/cp2u.h) \
    $(wildcard include/config/mach/iap/f.h) \
    $(wildcard include/config/mach/iap/g.h) \
    $(wildcard include/config/mach/aae.h) \
    $(wildcard include/config/mach/pegasus.h) \
    $(wildcard include/config/mach/cygnus.h) \
    $(wildcard include/config/mach/centaurus.h) \
    $(wildcard include/config/mach/msm8930/qrd8930.h) \
    $(wildcard include/config/mach/quby/tim.h) \
    $(wildcard include/config/mach/zedi3250a.h) \
    $(wildcard include/config/mach/grus.h) \
    $(wildcard include/config/mach/apollo3.h) \
    $(wildcard include/config/mach/cowon/r7.h) \
    $(wildcard include/config/mach/tonga3.h) \
    $(wildcard include/config/mach/p535.h) \
    $(wildcard include/config/mach/sa3874i.h) \
    $(wildcard include/config/mach/mx6/navico/com.h) \
    $(wildcard include/config/mach/proxmobil2.h) \
    $(wildcard include/config/mach/ubinux1.h) \
    $(wildcard include/config/mach/istos.h) \
    $(wildcard include/config/mach/benvolio4.h) \
    $(wildcard include/config/mach/eco5/bx2.h) \
    $(wildcard include/config/mach/eukrea/cpuimx28sd.h) \
    $(wildcard include/config/mach/domotab.h) \
    $(wildcard include/config/mach/pfla03.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/mach/arch.h \
  /home/pi/kernel/linux-4.0.2/include/linux/reboot.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/reboot.h \
  arch/arm/include/generated/asm/emergency-restart.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/emergency-restart.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/mach/flash.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/mach/map.h \
    $(wildcard include/config/debug/ll.h) \
  /home/pi/kernel/linux-4.0.2/include/video/omapdss.h \
    $(wildcard include/config/omap2/dss/venc.h) \
  /home/pi/kernel/linux-4.0.2/include/video/videomode.h \
  /home/pi/kernel/linux-4.0.2/include/video/display_timing.h \
  /home/pi/kernel/linux-4.0.2/include/video/omap-panel-data.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/common.h \
    $(wildcard include/config/arch/omap2.h) \
    $(wildcard include/config/arch/omap3.h) \
    $(wildcard include/config/arch/omap4.h) \
    $(wildcard include/config/soc/omap5.h) \
    $(wildcard include/config/soc/dra7xx.h) \
    $(wildcard include/config/cache/l2x0.h) \
    $(wildcard include/config/soc/bus.h) \
    $(wildcard include/config/soc/omap2420.h) \
    $(wildcard include/config/soc/omap2430.h) \
    $(wildcard include/config/soc/am33xx.h) \
    $(wildcard include/config/soc/ti81xx.h) \
    $(wildcard include/config/soc/am43xx.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/i2c.h \
    $(wildcard include/config/i2c.h) \
    $(wildcard include/config/i2c/slave.h) \
    $(wildcard include/config/i2c/boardinfo.h) \
    $(wildcard include/config/i2c/mux.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/i2c.h \
  /home/pi/kernel/linux-4.0.2/include/linux/i2c-omap.h \
  /home/pi/kernel/linux-4.0.2/include/linux/irqchip/irq-omap-intc.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/hardware/cache-l2x0.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/i2c.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/plat-omap/include/plat/i2c.h \
    $(wildcard include/config/i2c/omap.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/serial.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/include/mach/serial.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/usb.h \
  /home/pi/kernel/linux-4.0.2/include/linux/platform_data/usb-omap.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/mux.h \
    $(wildcard include/config/debug/fs.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/mux34xx.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/sdram-micron-mt46h32m32lf-6.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/sdrc.h \
    $(wildcard include/config/soc/has/omap2/sdrc.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/gpmc.h \
  /home/pi/kernel/linux-4.0.2/include/linux/omap-gpmc.h \
    $(wildcard include/config/wp.h) \
    $(wildcard include/config/mtd/nand/omap2.h) \
    $(wildcard include/config/mtd/onenand/omap2.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/hsmmc.h \
    $(wildcard include/config/mmc/omap/hs.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/board-flash.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/common-board-devices.h \
  /home/pi/kernel/linux-4.0.2/include/sound/tlv320aic3x.h \
  /home/pi/kernel/linux-4.0.2/include/linux/mfd/menelaus.h \
    $(wildcard include/config/menelaus.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/mach-omap2/twl-common.h \
  /home/pi/kernel/linux-4.0.2/include/linux/gpio_keys.h \

arch/arm/mach-omap2/board-overo.o: $(deps_arch/arm/mach-omap2/board-overo.o)

$(deps_arch/arm/mach-omap2/board-overo.o):
