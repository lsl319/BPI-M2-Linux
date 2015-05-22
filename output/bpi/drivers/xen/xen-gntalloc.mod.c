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
	{ 0xb4e14553, __VMLINUX_SYMBOL_STR(gnttab_query_foreign_access) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x1f6bfcaf, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xb6230f1f, __VMLINUX_SYMBOL_STR(gnttab_grant_foreign_access) },
	{ 0x60442822, __VMLINUX_SYMBOL_STR(phys_to_mach) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xafb07262, __VMLINUX_SYMBOL_STR(__pfn_to_mfn) },
	{ 0xb8555fe1, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x9312d80e, __VMLINUX_SYMBOL_STR(evtchn_put) },
	{ 0x605b80b1, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x58e14f15, __VMLINUX_SYMBOL_STR(HYPERVISOR_event_channel_op) },
	{ 0xeebbe214, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3f9f1f9e, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x87e08c43, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x31abbb0a, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x68b13b9c, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xf5785b42, __VMLINUX_SYMBOL_STR(evtchn_get) },
	{ 0x5a2b1b67, __VMLINUX_SYMBOL_STR(gnttab_free_grant_reference) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xfd51b281, __VMLINUX_SYMBOL_STR(gnttab_end_foreign_access_ref) },
	{ 0x1995a3e9, __VMLINUX_SYMBOL_STR(misc_deregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "75650BB293A4CC28CD7B61E");
