cmd_fs/cifs/smb2transport.o := arm-linux-gnueabihf-gcc -Wp,-MD,fs/cifs/.smb2transport.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabihf/4.6/include -I/home/pi/kernel/linux-4.0.2/arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -I/home/pi/kernel/linux-4.0.2/include -Iinclude -I/home/pi/kernel/linux-4.0.2/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/pi/kernel/linux-4.0.2/include/uapi -Iinclude/generated/uapi -include /home/pi/kernel/linux-4.0.2/include/linux/kconfig.h  -I/home/pi/kernel/linux-4.0.2/fs/cifs -Ifs/cifs -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -O2 -Wframe-larger-than=1024 -fstack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(smb2transport)"  -D"KBUILD_MODNAME=KBUILD_STR(cifs)" -c -o fs/cifs/.tmp_smb2transport.o /home/pi/kernel/linux-4.0.2/fs/cifs/smb2transport.c

source_fs/cifs/smb2transport.o := /home/pi/kernel/linux-4.0.2/fs/cifs/smb2transport.c

deps_fs/cifs/smb2transport.o := \
  /home/pi/kernel/linux-4.0.2/include/linux/fs.h \
    $(wildcard include/config/sysfs.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/fs/posix/acl.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/ima.h) \
    $(wildcard include/config/fsnotify.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/file/locking.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/fs/dax.h) \
    $(wildcard include/config/block.h) \
    $(wildcard include/config/migration.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/linkage.h \
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
  /home/pi/kernel/linux-4.0.2/include/linux/stringify.h \
  /home/pi/kernel/linux-4.0.2/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/linkage.h \
  /home/pi/kernel/linux-4.0.2/include/linux/wait.h \
    $(wildcard include/config/lockdep.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/const.h \
  /home/pi/kernel/linux-4.0.2/include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/panic/timeout.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /usr/lib/gcc/arm-linux-gnueabihf/4.6/include/stdarg.h \
  /home/pi/kernel/linux-4.0.2/include/linux/bitops.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/bitops.h \
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
  /home/pi/kernel/linux-4.0.2/include/linux/spinlock.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/generic/lockbreak.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/context/tracking.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  arch/arm/include/generated/asm/preempt.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/preempt.h \
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
  /home/pi/kernel/linux-4.0.2/include/linux/bottom_half.h \
  /home/pi/kernel/linux-4.0.2/include/linux/preempt_mask.h \
  /home/pi/kernel/linux-4.0.2/include/linux/spinlock_types.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/spinlock_types.h \
  /home/pi/kernel/linux-4.0.2/include/linux/lockdep.h \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/prove/rcu.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/rwlock_types.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/spinlock.h \
  /home/pi/kernel/linux-4.0.2/include/linux/prefetch.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/processor.h \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/arm/errata/754327.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/hw_breakpoint.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
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
  /home/pi/kernel/linux-4.0.2/include/linux/atomic.h \
    $(wildcard include/config/arch/has/atomic/or.h) \
    $(wildcard include/config/generic/atomic64.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/atomic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/cmpxchg.h \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/v6.h) \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/cmpxchg-local.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/atomic-long.h \
  arch/arm/include/generated/asm/current.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/current.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/wait.h \
  /home/pi/kernel/linux-4.0.2/include/linux/kdev_t.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/kdev_t.h \
  /home/pi/kernel/linux-4.0.2/include/linux/dcache.h \
  /home/pi/kernel/linux-4.0.2/include/linux/rculist.h \
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
  /home/pi/kernel/linux-4.0.2/include/linux/debugobjects.h \
    $(wildcard include/config/debug/objects.h) \
    $(wildcard include/config/debug/objects/free.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/rcutree.h \
  /home/pi/kernel/linux-4.0.2/include/linux/rculist_bl.h \
  /home/pi/kernel/linux-4.0.2/include/linux/list_bl.h \
  /home/pi/kernel/linux-4.0.2/include/linux/bit_spinlock.h \
  /home/pi/kernel/linux-4.0.2/include/linux/lockref.h \
    $(wildcard include/config/arch/use/cmpxchg/lockref.h) \
  include/generated/bounds.h \
  /home/pi/kernel/linux-4.0.2/include/linux/path.h \
  /home/pi/kernel/linux-4.0.2/include/linux/stat.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/stat.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/stat.h \
  /home/pi/kernel/linux-4.0.2/include/linux/time.h \
    $(wildcard include/config/arch/uses/gettimeoffset.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/math64.h \
    $(wildcard include/config/arch/supports/int128.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/time64.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/time.h \
  /home/pi/kernel/linux-4.0.2/include/linux/uidgid.h \
    $(wildcard include/config/user/ns.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/highuid.h \
  /home/pi/kernel/linux-4.0.2/include/linux/list_lru.h \
    $(wildcard include/config/memcg/kmem.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/nodemask.h \
    $(wildcard include/config/movable/node.h) \
    $(wildcard include/config/numa.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/shrinker.h \
  /home/pi/kernel/linux-4.0.2/include/linux/llist.h \
    $(wildcard include/config/arch/have/nmi/safe/cmpxchg.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/radix-tree.h \
  /home/pi/kernel/linux-4.0.2/include/linux/rbtree.h \
  /home/pi/kernel/linux-4.0.2/include/linux/pid.h \
  /home/pi/kernel/linux-4.0.2/include/linux/mutex.h \
    $(wildcard include/config/debug/mutexes.h) \
    $(wildcard include/config/mutex/spin/on/owner.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/osq_lock.h \
  /home/pi/kernel/linux-4.0.2/include/linux/rwsem.h \
    $(wildcard include/config/rwsem/spin/on/owner.h) \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  arch/arm/include/generated/asm/rwsem.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/rwsem.h \
  /home/pi/kernel/linux-4.0.2/include/linux/capability.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/capability.h \
  /home/pi/kernel/linux-4.0.2/include/linux/semaphore.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/fiemap.h \
  /home/pi/kernel/linux-4.0.2/include/linux/migrate_mode.h \
  /home/pi/kernel/linux-4.0.2/include/linux/percpu-rwsem.h \
  /home/pi/kernel/linux-4.0.2/include/linux/percpu.h \
    $(wildcard include/config/need/per/cpu/embed/first/chunk.h) \
    $(wildcard include/config/need/per/cpu/page/first/chunk.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/mmdebug.h \
    $(wildcard include/config/debug/vm.h) \
    $(wildcard include/config/debug/virtual.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/smp.h \
    $(wildcard include/config/up/late/init.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/errno.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/errno.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/errno-base.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/smp.h \
  /home/pi/kernel/linux-4.0.2/include/linux/pfn.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/percpu.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/percpu.h \
  /home/pi/kernel/linux-4.0.2/include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/blk_types.h \
    $(wildcard include/config/blk/cgroup.h) \
    $(wildcard include/config/blk/dev/integrity.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/fs.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/limits.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/ioctl.h \
  arch/arm/include/generated/asm/ioctl.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/ioctl.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/ioctl.h \
  /home/pi/kernel/linux-4.0.2/include/linux/quota.h \
    $(wildcard include/config/quota/netlink/interface.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/percpu_counter.h \
  /home/pi/kernel/linux-4.0.2/include/linux/gfp.h \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/pm/sleep.h) \
    $(wildcard include/config/cma.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/memory/isolation.h) \
    $(wildcard include/config/memcg.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/have/memblock/node/map.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/page/extension.h) \
    $(wildcard include/config/no/bootmem.h) \
    $(wildcard include/config/numa/balancing.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/have/memoryless/nodes.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/nodes/span/other/nodes.h) \
    $(wildcard include/config/holes/in/zone.h) \
    $(wildcard include/config/arch/has/holes/memorymodel.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/pageblock-flags.h \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/hugetlb/page/size/variable.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/page-flags-layout.h \
  /home/pi/kernel/linux-4.0.2/include/linux/memory_hotplug.h \
    $(wildcard include/config/memory/hotremove.h) \
    $(wildcard include/config/have/arch/nodedata/extension.h) \
    $(wildcard include/config/have/bootmem/info/node.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/notifier.h \
  /home/pi/kernel/linux-4.0.2/include/linux/srcu.h \
  /home/pi/kernel/linux-4.0.2/include/linux/workqueue.h \
    $(wildcard include/config/debug/objects/work.h) \
    $(wildcard include/config/freezer.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/timer.h \
    $(wildcard include/config/timer/stats.h) \
    $(wildcard include/config/debug/objects/timers.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/ktime.h \
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
  /home/pi/kernel/linux-4.0.2/include/linux/topology.h \
    $(wildcard include/config/use/percpu/numa/node/id.h) \
    $(wildcard include/config/sched/smt.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/topology.h \
    $(wildcard include/config/arm/cpu/topology.h) \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/topology.h \
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
  /home/pi/kernel/linux-4.0.2/include/linux/err.h \
  /home/pi/kernel/linux-4.0.2/include/linux/net.h \
  /home/pi/kernel/linux-4.0.2/include/linux/random.h \
    $(wildcard include/config/arch/random.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/random.h \
  /home/pi/kernel/linux-4.0.2/include/linux/irqnr.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/irqnr.h \
  /home/pi/kernel/linux-4.0.2/include/linux/kmemcheck.h \
    $(wildcard include/config/kmemcheck.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/mm_types.h \
    $(wildcard include/config/split/ptlock/cpus.h) \
    $(wildcard include/config/arch/enable/split/pmd/ptlock.h) \
    $(wildcard include/config/have/cmpxchg/double.h) \
    $(wildcard include/config/have/aligned/struct/page.h) \
    $(wildcard include/config/transparent/hugepage.h) \
    $(wildcard include/config/aio.h) \
    $(wildcard include/config/mmu/notifier.h) \
    $(wildcard include/config/x86/intel/mpx.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/auxvec.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/auxvec.h \
  arch/arm/include/generated/asm/auxvec.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/auxvec.h \
  /home/pi/kernel/linux-4.0.2/include/linux/uprobes.h \
    $(wildcard include/config/uprobes.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/mmu.h \
    $(wildcard include/config/cpu/has/asid.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/jump_label.h \
    $(wildcard include/config/jump/label.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/net.h \
  /home/pi/kernel/linux-4.0.2/include/linux/socket.h \
    $(wildcard include/config/proc/fs.h) \
  arch/arm/include/generated/asm/socket.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/socket.h \
  arch/arm/include/generated/asm/sockios.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/sockios.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/sockios.h \
  /home/pi/kernel/linux-4.0.2/include/linux/uio.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/uio.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/socket.h \
  /home/pi/kernel/linux-4.0.2/include/linux/delay.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/delay.h \
  /home/pi/kernel/linux-4.0.2/include/linux/uaccess.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/uaccess.h \
    $(wildcard include/config/have/efficient/unaligned/access.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/mempool.h \
  /home/pi/kernel/linux-4.0.2/include/linux/highmem.h \
    $(wildcard include/config/x86/32.h) \
    $(wildcard include/config/debug/highmem.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/mm.h \
    $(wildcard include/config/sysctl.h) \
    $(wildcard include/config/mem/soft/dirty.h) \
    $(wildcard include/config/x86.h) \
    $(wildcard include/config/ppc.h) \
    $(wildcard include/config/parisc.h) \
    $(wildcard include/config/metag.h) \
    $(wildcard include/config/ia64.h) \
    $(wildcard include/config/stack/growsup.h) \
    $(wildcard include/config/ksm.h) \
    $(wildcard include/config/shmem.h) \
    $(wildcard include/config/debug/vm/rb.h) \
    $(wildcard include/config/debug/pagealloc.h) \
    $(wildcard include/config/hibernation.h) \
    $(wildcard include/config/hugetlbfs.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/debug_locks.h \
    $(wildcard include/config/debug/locking/api/selftests.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/range.h \
  /home/pi/kernel/linux-4.0.2/include/linux/resource.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/resource.h \
  arch/arm/include/generated/asm/resource.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/resource.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/resource.h \
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
    $(wildcard include/config/cgroups.h) \
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
    $(wildcard include/config/bcache.h) \
    $(wildcard include/config/have/unstable/sched/clock.h) \
    $(wildcard include/config/irq/time/accounting.h) \
    $(wildcard include/config/no/hz/full.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/sched.h \
  /home/pi/kernel/linux-4.0.2/include/linux/sched/prio.h \
  /home/pi/kernel/linux-4.0.2/include/linux/plist.h \
    $(wildcard include/config/debug/pi/list.h) \
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
  /home/pi/kernel/linux-4.0.2/include/linux/sysctl.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/sysctl.h \
  /home/pi/kernel/linux-4.0.2/include/linux/assoc_array.h \
    $(wildcard include/config/associative/array.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/selinux.h \
    $(wildcard include/config/security/selinux.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/magic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/pgtable-2level.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/pgtable.h \
    $(wildcard include/config/have/arch/soft/dirty.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/page-flags.h \
    $(wildcard include/config/pageflags/extended.h) \
    $(wildcard include/config/arch/uses/pg/uncached.h) \
    $(wildcard include/config/memory/failure.h) \
    $(wildcard include/config/swap.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/huge_mm.h \
  /home/pi/kernel/linux-4.0.2/include/linux/vmstat.h \
    $(wildcard include/config/vm/event/counters.h) \
    $(wildcard include/config/debug/tlbflush.h) \
    $(wildcard include/config/debug/vm/vmacache.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/vm_event_item.h \
    $(wildcard include/config/memory/balloon.h) \
    $(wildcard include/config/balloon/compaction.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/hardirq.h \
  /home/pi/kernel/linux-4.0.2/include/linux/ftrace_irq.h \
    $(wildcard include/config/ftrace/nmi/enter.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/vtime.h \
  /home/pi/kernel/linux-4.0.2/include/linux/context_tracking_state.h \
  /home/pi/kernel/linux-4.0.2/include/linux/static_key.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/hardirq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/irq.h \
    $(wildcard include/config/sparse/irq.h) \
    $(wildcard include/config/multi/irq/handler.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/irq_cpustat.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/cacheflush.h \
    $(wildcard include/config/arm/errata/411920.h) \
    $(wildcard include/config/cpu/cache/vipt.h) \
    $(wildcard include/config/frame/pointer.h) \
    $(wildcard include/config/debug/rodata.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/glue-cache.h \
    $(wildcard include/config/cpu/cache/v4.h) \
    $(wildcard include/config/cpu/cache/v4wb.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/cachetype.h \
    $(wildcard include/config/cpu/cache/vivt.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/kmap_types.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/highmem.h \
  /home/pi/kernel/linux-4.0.2/fs/cifs/smb2pdu.h \
  /home/pi/kernel/linux-4.0.2/include/net/sock.h \
    $(wildcard include/config/net.h) \
    $(wildcard include/config/net/ns.h) \
    $(wildcard include/config/ipv6.h) \
    $(wildcard include/config/rps.h) \
    $(wildcard include/config/net/rx/busy/poll.h) \
    $(wildcard include/config/xfrm.h) \
    $(wildcard include/config/cgroup/net/prio.h) \
    $(wildcard include/config/inet.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/list_nulls.h \
  /home/pi/kernel/linux-4.0.2/include/linux/netdevice.h \
    $(wildcard include/config/dcb.h) \
    $(wildcard include/config/wlan.h) \
    $(wildcard include/config/ax25.h) \
    $(wildcard include/config/mac80211/mesh.h) \
    $(wildcard include/config/net/ipip.h) \
    $(wildcard include/config/net/ipgre.h) \
    $(wildcard include/config/ipv6/sit.h) \
    $(wildcard include/config/ipv6/tunnel.h) \
    $(wildcard include/config/netpoll.h) \
    $(wildcard include/config/xps.h) \
    $(wildcard include/config/bql.h) \
    $(wildcard include/config/rfs/accel.h) \
    $(wildcard include/config/fcoe.h) \
    $(wildcard include/config/net/poll/controller.h) \
    $(wildcard include/config/libfcoe.h) \
    $(wildcard include/config/net/switchdev.h) \
    $(wildcard include/config/wireless/ext.h) \
    $(wildcard include/config/vlan/8021q.h) \
    $(wildcard include/config/net/dsa.h) \
    $(wildcard include/config/tipc.h) \
    $(wildcard include/config/net/flow/limit.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/pm_qos.h \
    $(wildcard include/config/pm.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/miscdevice.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/major.h \
  /home/pi/kernel/linux-4.0.2/include/linux/device.h \
    $(wildcard include/config/debug/devres.h) \
    $(wildcard include/config/acpi.h) \
    $(wildcard include/config/pinctrl.h) \
    $(wildcard include/config/dma/cma.h) \
    $(wildcard include/config/devtmpfs.h) \
    $(wildcard include/config/sysfs/deprecated.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/ioport.h \
  /home/pi/kernel/linux-4.0.2/include/linux/kobject.h \
    $(wildcard include/config/uevent/helper.h) \
    $(wildcard include/config/debug/kobject/release.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/sysfs.h \
  /home/pi/kernel/linux-4.0.2/include/linux/kernfs.h \
    $(wildcard include/config/kernfs.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/idr.h \
  /home/pi/kernel/linux-4.0.2/include/linux/kobject_ns.h \
  /home/pi/kernel/linux-4.0.2/include/linux/kref.h \
  /home/pi/kernel/linux-4.0.2/include/linux/klist.h \
  /home/pi/kernel/linux-4.0.2/include/linux/pinctrl/devinfo.h \
  /home/pi/kernel/linux-4.0.2/include/linux/pinctrl/consumer.h \
  /home/pi/kernel/linux-4.0.2/include/linux/seq_file.h \
  /home/pi/kernel/linux-4.0.2/include/linux/pinctrl/pinctrl-state.h \
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
  /home/pi/kernel/linux-4.0.2/include/linux/dmaengine.h \
    $(wildcard include/config/async/tx/enable/channel/switch.h) \
    $(wildcard include/config/dma/engine.h) \
    $(wildcard include/config/rapidio/dma/engine.h) \
    $(wildcard include/config/async/tx/dma.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/scatterlist.h \
    $(wildcard include/config/debug/sg.h) \
    $(wildcard include/config/arch/has/sg/chain.h) \
  arch/arm/include/generated/asm/scatterlist.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/scatterlist.h \
    $(wildcard include/config/need/sg/dma/length.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/io.h \
    $(wildcard include/config/pci.h) \
    $(wildcard include/config/need/mach/io/h.h) \
    $(wildcard include/config/pcmcia/soc/common.h) \
    $(wildcard include/config/isa.h) \
    $(wildcard include/config/pccard.h) \
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
    $(wildcard include/config/has/ioport/map.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/vmalloc.h \
  /home/pi/kernel/linux-4.0.2/include/linux/dynamic_queue_limits.h \
  /home/pi/kernel/linux-4.0.2/include/linux/ethtool.h \
  /home/pi/kernel/linux-4.0.2/include/linux/compat.h \
    $(wildcard include/config/compat/old/sigaction.h) \
    $(wildcard include/config/odd/rt/sigaction.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/ethtool.h \
  /home/pi/kernel/linux-4.0.2/include/linux/if_ether.h \
  /home/pi/kernel/linux-4.0.2/include/linux/skbuff.h \
    $(wildcard include/config/nf/conntrack.h) \
    $(wildcard include/config/bridge/netfilter.h) \
    $(wildcard include/config/ipv6/ndisc/nodetype.h) \
    $(wildcard include/config/net/sched.h) \
    $(wildcard include/config/net/cls/act.h) \
    $(wildcard include/config/network/secmark.h) \
    $(wildcard include/config/network/phy/timestamping.h) \
    $(wildcard include/config/netfilter/xt/target/trace.h) \
    $(wildcard include/config/nf/tables.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/textsearch.h \
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
  /home/pi/kernel/linux-4.0.2/include/net/checksum.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/checksum.h \
  /home/pi/kernel/linux-4.0.2/include/linux/in6.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/in6.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/libc-compat.h \
  /home/pi/kernel/linux-4.0.2/include/linux/dma-mapping.h \
    $(wildcard include/config/has/dma.h) \
    $(wildcard include/config/arch/has/dma/set/coherent/mask.h) \
    $(wildcard include/config/have/dma/attrs.h) \
    $(wildcard include/config/need/dma/map/state.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/dma-attrs.h \
  /home/pi/kernel/linux-4.0.2/include/linux/dma-direction.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/dma-mapping.h \
  /home/pi/kernel/linux-4.0.2/include/linux/dma-debug.h \
    $(wildcard include/config/dma/api/debug.h) \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/dma-coherent.h \
    $(wildcard include/config/have/generic/dma/coherent.h) \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/dma-mapping-common.h \
  /home/pi/kernel/linux-4.0.2/include/linux/netdev_features.h \
  /home/pi/kernel/linux-4.0.2/include/net/flow_keys.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/if_ether.h \
  /home/pi/kernel/linux-4.0.2/include/net/net_namespace.h \
    $(wildcard include/config/ieee802154/6lowpan.h) \
    $(wildcard include/config/ip/sctp.h) \
    $(wildcard include/config/ip/dccp.h) \
    $(wildcard include/config/netfilter.h) \
    $(wildcard include/config/nf/defrag/ipv6.h) \
    $(wildcard include/config/wext/core.h) \
    $(wildcard include/config/ip/vs.h) \
  /home/pi/kernel/linux-4.0.2/include/net/flow.h \
  /home/pi/kernel/linux-4.0.2/include/net/netns/core.h \
  /home/pi/kernel/linux-4.0.2/include/net/netns/mib.h \
    $(wildcard include/config/xfrm/statistics.h) \
  /home/pi/kernel/linux-4.0.2/include/net/snmp.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/snmp.h \
  /home/pi/kernel/linux-4.0.2/include/linux/u64_stats_sync.h \
  /home/pi/kernel/linux-4.0.2/include/net/netns/unix.h \
  /home/pi/kernel/linux-4.0.2/include/net/netns/packet.h \
  /home/pi/kernel/linux-4.0.2/include/net/netns/ipv4.h \
    $(wildcard include/config/ip/multiple/tables.h) \
    $(wildcard include/config/ip/route/classid.h) \
    $(wildcard include/config/ip/mroute.h) \
    $(wildcard include/config/ip/mroute/multiple/tables.h) \
  /home/pi/kernel/linux-4.0.2/include/net/inet_frag.h \
  /home/pi/kernel/linux-4.0.2/include/net/netns/ipv6.h \
    $(wildcard include/config/ipv6/multiple/tables.h) \
    $(wildcard include/config/ipv6/mroute.h) \
    $(wildcard include/config/ipv6/mroute/multiple/tables.h) \
  /home/pi/kernel/linux-4.0.2/include/net/dst_ops.h \
  /home/pi/kernel/linux-4.0.2/include/net/netns/ieee802154_6lowpan.h \
  /home/pi/kernel/linux-4.0.2/include/net/netns/sctp.h \
  /home/pi/kernel/linux-4.0.2/include/net/netns/dccp.h \
  /home/pi/kernel/linux-4.0.2/include/net/netns/netfilter.h \
  /home/pi/kernel/linux-4.0.2/include/linux/proc_fs.h \
  /home/pi/kernel/linux-4.0.2/include/linux/netfilter.h \
    $(wildcard include/config/nf/nat/needed.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/if.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/hdlc/ioctl.h \
  /home/pi/kernel/linux-4.0.2/include/linux/in.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/in.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/netfilter.h \
  /home/pi/kernel/linux-4.0.2/include/net/netns/x_tables.h \
    $(wildcard include/config/bridge/nf/ebtables.h) \
  /home/pi/kernel/linux-4.0.2/include/net/netns/nftables.h \
  /home/pi/kernel/linux-4.0.2/include/net/netns/xfrm.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/xfrm.h \
  /home/pi/kernel/linux-4.0.2/include/net/flowcache.h \
  /home/pi/kernel/linux-4.0.2/include/linux/interrupt.h \
    $(wildcard include/config/irq/forced/threading.h) \
    $(wildcard include/config/generic/irq/probe.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/irqreturn.h \
  /home/pi/kernel/linux-4.0.2/include/linux/ns_common.h \
  /home/pi/kernel/linux-4.0.2/include/linux/seq_file_net.h \
  /home/pi/kernel/linux-4.0.2/include/net/dsa.h \
    $(wildcard include/config/net/dsa/hwmon.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/of.h \
    $(wildcard include/config/sparc.h) \
    $(wildcard include/config/of/dynamic.h) \
    $(wildcard include/config/of.h) \
    $(wildcard include/config/attach/node.h) \
    $(wildcard include/config/detach/node.h) \
    $(wildcard include/config/add/property.h) \
    $(wildcard include/config/remove/property.h) \
    $(wildcard include/config/update/property.h) \
    $(wildcard include/config/no/change.h) \
    $(wildcard include/config/change/add.h) \
    $(wildcard include/config/change/remove.h) \
    $(wildcard include/config/of/resolve.h) \
    $(wildcard include/config/of/overlay.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/mod_devicetable.h \
  /home/pi/kernel/linux-4.0.2/include/linux/uuid.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/uuid.h \
  /home/pi/kernel/linux-4.0.2/include/linux/property.h \
  /home/pi/kernel/linux-4.0.2/include/linux/phy.h \
  /home/pi/kernel/linux-4.0.2/include/linux/mii.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/mii.h \
  /home/pi/kernel/linux-4.0.2/include/linux/phy_fixed.h \
    $(wildcard include/config/fixed/phy.h) \
  /home/pi/kernel/linux-4.0.2/include/net/netprio_cgroup.h \
  /home/pi/kernel/linux-4.0.2/include/linux/cgroup.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/cgroupstats.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/taskstats.h \
  /home/pi/kernel/linux-4.0.2/include/linux/percpu-refcount.h \
  /home/pi/kernel/linux-4.0.2/include/linux/cgroup_subsys.h \
    $(wildcard include/config/cgroup/cpuacct.h) \
    $(wildcard include/config/cgroup/device.h) \
    $(wildcard include/config/cgroup/freezer.h) \
    $(wildcard include/config/cgroup/net/classid.h) \
    $(wildcard include/config/cgroup/perf.h) \
    $(wildcard include/config/cgroup/hugetlb.h) \
    $(wildcard include/config/cgroup/debug.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/neighbour.h \
  /home/pi/kernel/linux-4.0.2/include/linux/netlink.h \
  /home/pi/kernel/linux-4.0.2/include/net/scm.h \
    $(wildcard include/config/security/network.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/security.h \
    $(wildcard include/config/fw/loader/user/helper.h) \
    $(wildcard include/config/security/path.h) \
    $(wildcard include/config/security/network/xfrm.h) \
    $(wildcard include/config/securityfs.h) \
    $(wildcard include/config/security/yama.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/nsproxy.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/netlink.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/netdevice.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/if_packet.h \
  /home/pi/kernel/linux-4.0.2/include/linux/if_link.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/if_link.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/if_bonding.h \
  /home/pi/kernel/linux-4.0.2/include/linux/page_counter.h \
  /home/pi/kernel/linux-4.0.2/include/linux/memcontrol.h \
    $(wildcard include/config/memcg/swap.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/aio.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/aio_abi.h \
  /home/pi/kernel/linux-4.0.2/include/linux/filter.h \
    $(wildcard include/config/debug/set/module/ronx.h) \
    $(wildcard include/config/bpf/jit.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/filter.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/bpf_common.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/bpf.h \
  /home/pi/kernel/linux-4.0.2/include/linux/rculist_nulls.h \
  /home/pi/kernel/linux-4.0.2/include/linux/poll.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/poll.h \
  arch/arm/include/generated/asm/poll.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/poll.h \
  /home/pi/kernel/linux-4.0.2/include/net/dst.h \
  /home/pi/kernel/linux-4.0.2/include/linux/rtnetlink.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/rtnetlink.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/if_addr.h \
  /home/pi/kernel/linux-4.0.2/include/net/neighbour.h \
  /home/pi/kernel/linux-4.0.2/include/net/rtnetlink.h \
  /home/pi/kernel/linux-4.0.2/include/net/netlink.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/net_tstamp.h \
  /home/pi/kernel/linux-4.0.2/fs/cifs/cifsglob.h \
    $(wildcard include/config/cifs/smb2.h) \
    $(wildcard include/config/cifs/fscache.h) \
    $(wildcard include/config/cifs/stats2.h) \
    $(wildcard include/config/cifs/stats.h) \
    $(wildcard include/config/cifs/weak/pw/hash.h) \
    $(wildcard include/config/cifs/upcall.h) \
    $(wildcard include/config/cifs/dnotify/experimental.h) \
    $(wildcard include/config/cifs/acl.h) \
  /home/pi/kernel/linux-4.0.2/fs/cifs/cifs_fs_sb.h \
  /home/pi/kernel/linux-4.0.2/include/linux/backing-dev.h \
    $(wildcard include/config/debug/fs.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/flex_proportions.h \
  /home/pi/kernel/linux-4.0.2/include/linux/writeback.h \
  /home/pi/kernel/linux-4.0.2/fs/cifs/cifsacl.h \
  /home/pi/kernel/linux-4.0.2/include/crypto/internal/hash.h \
  /home/pi/kernel/linux-4.0.2/include/crypto/algapi.h \
  /home/pi/kernel/linux-4.0.2/include/linux/crypto.h \
  /home/pi/kernel/linux-4.0.2/include/crypto/hash.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/cifs/cifs_mount.h \
  /home/pi/kernel/linux-4.0.2/fs/cifs/cifspdu.h \
    $(wildcard include/config/cifs/posix.h) \
  arch/arm/include/generated/asm/unaligned.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/unaligned.h \
  /home/pi/kernel/linux-4.0.2/include/linux/unaligned/access_ok.h \
  /home/pi/kernel/linux-4.0.2/include/linux/unaligned/generic.h \
  /home/pi/kernel/linux-4.0.2/fs/cifs/smbfsctl.h \
  /home/pi/kernel/linux-4.0.2/fs/cifs/cifsproto.h \
    $(wildcard include/config/cifs/dfs/upcall.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/nls.h \
  /home/pi/kernel/linux-4.0.2/fs/cifs/smb2proto.h \
  /home/pi/kernel/linux-4.0.2/include/linux/key-type.h \
  /home/pi/kernel/linux-4.0.2/fs/cifs/cifs_debug.h \
    $(wildcard include/config/cifs/debug2.h) \
    $(wildcard include/config/cifs/debug.h) \
  /home/pi/kernel/linux-4.0.2/fs/cifs/smb2status.h \
    $(wildcard include/config/error.h) \
    $(wildcard include/config/enabled.h) \
  /home/pi/kernel/linux-4.0.2/fs/cifs/smb2glob.h \

fs/cifs/smb2transport.o: $(deps_fs/cifs/smb2transport.o)

$(deps_fs/cifs/smb2transport.o):
