#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6cec1955, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x9c9c932b, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x1f6bfcaf, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xea78907f, __VMLINUX_SYMBOL_STR(gnttab_map_refs) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8820b01c, __VMLINUX_SYMBOL_STR(gnttab_alloc_pages) },
	{ 0x55526907, __VMLINUX_SYMBOL_STR(xen_features) },
	{ 0x2cc6738, __VMLINUX_SYMBOL_STR(mmu_notifier_register) },
	{ 0x60442822, __VMLINUX_SYMBOL_STR(phys_to_mach) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9965b9ab, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0xafb07262, __VMLINUX_SYMBOL_STR(__pfn_to_mfn) },
	{ 0x7bccefe, __VMLINUX_SYMBOL_STR(gnttab_unmap_refs_async) },
	{ 0xd26dd355, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9312d80e, __VMLINUX_SYMBOL_STR(evtchn_put) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x605b80b1, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8624c4f3, __VMLINUX_SYMBOL_STR(gnttab_free_pages) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x58e14f15, __VMLINUX_SYMBOL_STR(HYPERVISOR_event_channel_op) },
	{ 0x952e2ea2, __VMLINUX_SYMBOL_STR(get_task_mm) },
	{ 0xff100ce6, __VMLINUX_SYMBOL_STR(mmu_notifier_unregister) },
	{ 0xb436ce20, __VMLINUX_SYMBOL_STR(apply_to_page_range) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3f9f1f9e, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x87e08c43, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0x8faabbb9, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xf5785b42, __VMLINUX_SYMBOL_STR(evtchn_get) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x1995a3e9, __VMLINUX_SYMBOL_STR(misc_deregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D2DC332213F880A782268E0");
