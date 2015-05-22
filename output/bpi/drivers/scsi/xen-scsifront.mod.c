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
	{ 0x3a451acc, __VMLINUX_SYMBOL_STR(xenbus_unregister_driver) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xf723a939, __VMLINUX_SYMBOL_STR(__xenbus_register_frontend) },
	{ 0xb4e14553, __VMLINUX_SYMBOL_STR(gnttab_query_foreign_access) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x252c7e27, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x18f83fab, __VMLINUX_SYMBOL_STR(gnttab_grant_foreign_access_ref) },
	{ 0x5af03a28, __VMLINUX_SYMBOL_STR(gnttab_claim_grant_reference) },
	{ 0x1f6bfcaf, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x9d3850e1, __VMLINUX_SYMBOL_STR(gnttab_alloc_grant_references) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x30241fe6, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x60442822, __VMLINUX_SYMBOL_STR(phys_to_mach) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x4e1893ec, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8c06a108, __VMLINUX_SYMBOL_STR(xenbus_transaction_start) },
	{ 0xca81ea9a, __VMLINUX_SYMBOL_STR(xenbus_transaction_end) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xc26351f8, __VMLINUX_SYMBOL_STR(bind_evtchn_to_irq) },
	{ 0x2d555b16, __VMLINUX_SYMBOL_STR(xenbus_dev_fatal) },
	{ 0x2889e7ff, __VMLINUX_SYMBOL_STR(xenbus_alloc_evtchn) },
	{ 0x67399985, __VMLINUX_SYMBOL_STR(xenbus_grant_ring) },
	{ 0xafb07262, __VMLINUX_SYMBOL_STR(__pfn_to_mfn) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xf1320649, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x86623fd7, __VMLINUX_SYMBOL_STR(notify_remote_via_irq) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb4369999, __VMLINUX_SYMBOL_STR(xenbus_frontend_closed) },
	{ 0xcb67c980, __VMLINUX_SYMBOL_STR(xenbus_switch_state) },
	{ 0xd72feba2, __VMLINUX_SYMBOL_STR(xenbus_read_driver_state) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x887a3bf7, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x89dc8b76, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xd3a36dd7, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0xbec00190, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x964add15, __VMLINUX_SYMBOL_STR(xenbus_scanf) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfe2d570, __VMLINUX_SYMBOL_STR(xenbus_directory) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x73013896, __VMLINUX_SYMBOL_STR(xenbus_printf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x7afaf2d4, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x7712771a, __VMLINUX_SYMBOL_STR(unbind_from_irqhandler) },
	{ 0xedbc6f67, __VMLINUX_SYMBOL_STR(gnttab_end_foreign_access) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xba418721, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "43E3033FEE14A0794C4424B");
