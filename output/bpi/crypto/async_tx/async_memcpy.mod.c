#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6cec1955, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3ed659b6, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x2faa2bb5, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x18fef9cb, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x66a86040, __VMLINUX_SYMBOL_STR(dmaengine_unmap_put) },
	{ 0xf36cc143, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xd8f765d8, __VMLINUX_SYMBOL_STR(async_tx_submit) },
	{ 0x2d833725, __VMLINUX_SYMBOL_STR(xen_dma_ops) },
	{ 0x9e48255b, __VMLINUX_SYMBOL_STR(dmaengine_get_unmap_data) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x9c4a9651, __VMLINUX_SYMBOL_STR(__async_tx_find_channel) },
	{ 0x7b4e4e2b, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_tx";


MODULE_INFO(srcversion, "0D355879031AC913002DA03");