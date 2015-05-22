	.arch armv7-a
	.fpu softvfp
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 2
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.file	"asm-offsets.c"
@ GNU C (Ubuntu/Linaro 4.6.3-1ubuntu5) version 4.6.3 (arm-linux-gnueabihf)
@	compiled by GNU C version 4.6.3, GMP version 5.0.2, MPFR version 3.1.0-p3, MPC version 0.9
@ warning: GMP header version 5.0.2 differs from library version 5.1.3.
@ warning: MPFR header version 3.1.0-p3 differs from library version 3.1.2-p3.
@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
@ options passed:  -nostdinc
@ -I /home/pi/kernel/linux-4.0.2/arch/arm/include
@ -I arch/arm/include/generated/uapi -I arch/arm/include/generated
@ -I /home/pi/kernel/linux-4.0.2/include -I include
@ -I /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi
@ -I arch/arm/include/generated/uapi
@ -I /home/pi/kernel/linux-4.0.2/include/uapi -I include/generated/uapi
@ -I /home/pi/kernel/linux-4.0.2/. -I . -imultilib sf
@ -imultiarch arm-linux-gnueabi -D __KERNEL__ -D __LINUX_ARM_ARCH__=7
@ -U arm -D KBUILD_STR(s)=#s -D KBUILD_BASENAME=KBUILD_STR(asm_offsets)
@ -D KBUILD_MODNAME=KBUILD_STR(asm_offsets)
@ -isystem /usr/lib/gcc/arm-linux-gnueabihf/4.6/include
@ -include /home/pi/kernel/linux-4.0.2/include/linux/kconfig.h
@ -MD arch/arm/kernel/.asm-offsets.s.d
@ /home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c -mlittle-endian
@ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -marm -march=armv7-a
@ -msoft-float -auxbase-strip arch/arm/kernel/asm-offsets.s -O2 -Wall
@ -Wundef -Wstrict-prototypes -Wno-trigraphs
@ -Werror=implicit-function-declaration -Wno-format-security
@ -Wframe-larger-than=1024 -Wno-unused-but-set-variable
@ -Wdeclaration-after-statement -Wno-pointer-sign -Werror=implicit-int
@ -Werror=strict-prototypes -std=gnu90 -fno-strict-aliasing -fno-common
@ -fno-dwarf2-cfi-asm -funwind-tables -fno-delete-null-pointer-checks
@ -fomit-frame-pointer -fno-var-tracking-assignments -fno-strict-overflow
@ -fconserve-stack -fverbose-asm -fstack-protector
@ options enabled:  -fauto-inc-dec -fbranch-count-reg -fcaller-saves
@ -fcombine-stack-adjustments -fcompare-elim -fcprop-registers
@ -fcrossjumping -fcse-follow-jumps -fdefer-pop -fdevirtualize
@ -fearly-inlining -feliminate-unused-debug-types -fexpensive-optimizations
@ -fforward-propagate -ffunction-cse -fgcse -fgcse-lm
@ -fguess-branch-probability -fident -fif-conversion -fif-conversion2
@ -findirect-inlining -finline -finline-functions-called-once
@ -finline-small-functions -fipa-cp -fipa-profile -fipa-pure-const
@ -fipa-reference -fipa-sra -fira-share-save-slots -fira-share-spill-slots
@ -fivopts -fkeep-static-consts -fleading-underscore -fmath-errno
@ -fmerge-constants -fmerge-debug-strings -fmove-loop-invariants
@ -fomit-frame-pointer -foptimize-register-move -foptimize-sibling-calls
@ -fpartial-inlining -fpeephole -fpeephole2 -fprefetch-loop-arrays
@ -freg-struct-return -fregmove -freorder-blocks -freorder-functions
@ -frerun-cse-after-loop -fsched-critical-path-heuristic
@ -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
@ -fsched-last-insn-heuristic -fsched-rank-heuristic -fsched-spec
@ -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-insns
@ -fschedule-insns2 -fsection-anchors -fshow-column -fsigned-zeros
@ -fsplit-ivs-in-unroller -fsplit-wide-types -fstack-protector
@ -fstrict-volatile-bitfields -fthread-jumps -ftoplevel-reorder
@ -ftrapping-math -ftree-bit-ccp -ftree-builtin-call-dce -ftree-ccp
@ -ftree-ch -ftree-copy-prop -ftree-copyrename -ftree-cselim -ftree-dce
@ -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
@ -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
@ -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
@ -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink
@ -ftree-slp-vectorize -ftree-sra -ftree-switch-conversion -ftree-ter
@ -ftree-vect-loop-version -ftree-vrp -funit-at-a-time -funwind-tables
@ -fverbose-asm -fzero-initialized-in-bss -mglibc -mlittle-endian
@ -msched-prolog -munaligned-access -mvectorize-with-neon-quad

@ Compiler executable checksum: a6307c82fe8e2ed98c5aea4a84de9cda

#APP
		.macro	it, cond
	.endm
	.macro	itt, cond
	.endm
	.macro	ite, cond
	.endm
	.macro	ittt, cond
	.endm
	.macro	itte, cond
	.endm
	.macro	itet, cond
	.endm
	.macro	itee, cond
	.endm
	.macro	itttt, cond
	.endm
	.macro	ittte, cond
	.endm
	.macro	ittet, cond
	.endm
	.macro	ittee, cond
	.endm
	.macro	itett, cond
	.endm
	.macro	itete, cond
	.endm
	.macro	iteet, cond
	.endm
	.macro	iteee, cond
	.endm

	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.type	main, %function
main:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
#APP
@ 60 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TSK_ACTIVE_MM #424 offsetof(struct task_struct, active_mm)	@
@ 0 "" 2
@ 62 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TSK_STACK_CANARY #544 offsetof(struct task_struct, stack_canary)	@
@ 0 "" 2
@ 64 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 65 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TI_FLAGS #0 offsetof(struct thread_info, flags)	@
@ 0 "" 2
@ 66 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TI_PREEMPT #4 offsetof(struct thread_info, preempt_count)	@
@ 0 "" 2
@ 67 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TI_ADDR_LIMIT #8 offsetof(struct thread_info, addr_limit)	@
@ 0 "" 2
@ 68 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TI_TASK #12 offsetof(struct thread_info, task)	@
@ 0 "" 2
@ 69 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TI_EXEC_DOMAIN #16 offsetof(struct thread_info, exec_domain)	@
@ 0 "" 2
@ 70 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TI_CPU #20 offsetof(struct thread_info, cpu)	@
@ 0 "" 2
@ 71 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TI_CPU_DOMAIN #24 offsetof(struct thread_info, cpu_domain)	@
@ 0 "" 2
@ 72 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TI_CPU_SAVE #28 offsetof(struct thread_info, cpu_context)	@
@ 0 "" 2
@ 73 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TI_USED_CP #80 offsetof(struct thread_info, used_cp)	@
@ 0 "" 2
@ 74 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TI_TP_VALUE #96 offsetof(struct thread_info, tp_value)	@
@ 0 "" 2
@ 75 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TI_FPSTATE #104 offsetof(struct thread_info, fpstate)	@
@ 0 "" 2
@ 77 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TI_VFPSTATE #256 offsetof(struct thread_info, vfpstate)	@
@ 0 "" 2
@ 79 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->VFP_CPU #272 offsetof(union vfp_state, hard.cpu)	@
@ 0 "" 2
@ 83 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TI_THUMBEE_STATE #536 offsetof(struct thread_info, thumbee_state)	@
@ 0 "" 2
@ 86 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->TI_IWMMXT_STATE #104 offsetof(struct thread_info, fpstate.iwmmxt)	@
@ 0 "" 2
@ 91 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 92 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_R0 #0 offsetof(struct pt_regs, ARM_r0)	@
@ 0 "" 2
@ 93 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_R1 #4 offsetof(struct pt_regs, ARM_r1)	@
@ 0 "" 2
@ 94 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_R2 #8 offsetof(struct pt_regs, ARM_r2)	@
@ 0 "" 2
@ 95 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_R3 #12 offsetof(struct pt_regs, ARM_r3)	@
@ 0 "" 2
@ 96 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_R4 #16 offsetof(struct pt_regs, ARM_r4)	@
@ 0 "" 2
@ 97 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_R5 #20 offsetof(struct pt_regs, ARM_r5)	@
@ 0 "" 2
@ 98 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_R6 #24 offsetof(struct pt_regs, ARM_r6)	@
@ 0 "" 2
@ 99 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_R7 #28 offsetof(struct pt_regs, ARM_r7)	@
@ 0 "" 2
@ 100 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_R8 #32 offsetof(struct pt_regs, ARM_r8)	@
@ 0 "" 2
@ 101 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_R9 #36 offsetof(struct pt_regs, ARM_r9)	@
@ 0 "" 2
@ 102 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_R10 #40 offsetof(struct pt_regs, ARM_r10)	@
@ 0 "" 2
@ 103 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_FP #44 offsetof(struct pt_regs, ARM_fp)	@
@ 0 "" 2
@ 104 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_IP #48 offsetof(struct pt_regs, ARM_ip)	@
@ 0 "" 2
@ 105 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_SP #52 offsetof(struct pt_regs, ARM_sp)	@
@ 0 "" 2
@ 106 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_LR #56 offsetof(struct pt_regs, ARM_lr)	@
@ 0 "" 2
@ 107 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_PC #60 offsetof(struct pt_regs, ARM_pc)	@
@ 0 "" 2
@ 108 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_PSR #64 offsetof(struct pt_regs, ARM_cpsr)	@
@ 0 "" 2
@ 109 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_OLD_R0 #68 offsetof(struct pt_regs, ARM_ORIG_r0)	@
@ 0 "" 2
@ 110 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->S_FRAME_SIZE #72 sizeof(struct pt_regs)	@
@ 0 "" 2
@ 111 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 113 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_PHY_BASE #0 offsetof(struct l2x0_regs, phy_base)	@
@ 0 "" 2
@ 114 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_AUX_CTRL #4 offsetof(struct l2x0_regs, aux_ctrl)	@
@ 0 "" 2
@ 115 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_TAG_LATENCY #8 offsetof(struct l2x0_regs, tag_latency)	@
@ 0 "" 2
@ 116 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_DATA_LATENCY #12 offsetof(struct l2x0_regs, data_latency)	@
@ 0 "" 2
@ 117 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_FILTER_START #16 offsetof(struct l2x0_regs, filter_start)	@
@ 0 "" 2
@ 118 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_FILTER_END #20 offsetof(struct l2x0_regs, filter_end)	@
@ 0 "" 2
@ 119 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_PREFETCH_CTRL #24 offsetof(struct l2x0_regs, prefetch_ctrl)	@
@ 0 "" 2
@ 120 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_PWR_CTRL #28 offsetof(struct l2x0_regs, pwr_ctrl)	@
@ 0 "" 2
@ 121 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 124 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->MM_CONTEXT_ID #360 offsetof(struct mm_struct, context.id.counter)	@
@ 0 "" 2
@ 125 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 127 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->VMA_VM_MM #32 offsetof(struct vm_area_struct, vm_mm)	@
@ 0 "" 2
@ 128 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->VMA_VM_FLAGS #40 offsetof(struct vm_area_struct, vm_flags)	@
@ 0 "" 2
@ 129 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 130 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->VM_EXEC #4 VM_EXEC	@
@ 0 "" 2
@ 131 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 132 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->PAGE_SZ #4096 PAGE_SIZE	@
@ 0 "" 2
@ 133 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 134 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->SYS_ERROR0 #10420224 0x9f0000	@
@ 0 "" 2
@ 135 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 136 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->SIZEOF_MACHINE_DESC #108 sizeof(struct machine_desc)	@
@ 0 "" 2
@ 137 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->MACHINFO_TYPE #0 offsetof(struct machine_desc, nr)	@
@ 0 "" 2
@ 138 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->MACHINFO_NAME #4 offsetof(struct machine_desc, name)	@
@ 0 "" 2
@ 139 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 140 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->PROC_INFO_SZ #52 sizeof(struct proc_info_list)	@
@ 0 "" 2
@ 141 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->PROCINFO_INITFUNC #16 offsetof(struct proc_info_list, __cpu_flush)	@
@ 0 "" 2
@ 142 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->PROCINFO_MM_MMUFLAGS #8 offsetof(struct proc_info_list, __cpu_mm_mmu_flags)	@
@ 0 "" 2
@ 143 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->PROCINFO_IO_MMUFLAGS #12 offsetof(struct proc_info_list, __cpu_io_mmu_flags)	@
@ 0 "" 2
@ 144 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 152 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->CPU_SLEEP_SIZE #36 offsetof(struct processor, suspend_size)	@
@ 0 "" 2
@ 153 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->CPU_DO_SUSPEND #40 offsetof(struct processor, do_suspend)	@
@ 0 "" 2
@ 154 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->CPU_DO_RESUME #44 offsetof(struct processor, do_resume)	@
@ 0 "" 2
@ 160 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->SLEEP_SAVE_SP_SZ #8 sizeof(struct sleep_save_sp)	@
@ 0 "" 2
@ 161 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->SLEEP_SAVE_SP_PHYS #4 offsetof(struct sleep_save_sp, save_ptr_stash_phys)	@
@ 0 "" 2
@ 162 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->SLEEP_SAVE_SP_VIRT #0 offsetof(struct sleep_save_sp, save_ptr_stash)	@
@ 0 "" 2
@ 164 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 165 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->DMA_BIDIRECTIONAL #0 DMA_BIDIRECTIONAL	@
@ 0 "" 2
@ 166 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->DMA_TO_DEVICE #1 DMA_TO_DEVICE	@
@ 0 "" 2
@ 167 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->DMA_FROM_DEVICE #2 DMA_FROM_DEVICE	@
@ 0 "" 2
@ 168 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 169 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->CACHE_WRITEBACK_ORDER #6 __CACHE_WRITEBACK_ORDER	@
@ 0 "" 2
@ 170 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->CACHE_WRITEBACK_GRANULE #64 __CACHE_WRITEBACK_GRANULE	@
@ 0 "" 2
@ 171 "/home/pi/kernel/linux-4.0.2/arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
	mov	r0, #0	@,
	bx	lr	@
	.fnend
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",%progbits
