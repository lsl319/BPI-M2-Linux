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
	{ 0xe8461e15, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdaa6416a, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x4ea4d0fa, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x37d91069, __VMLINUX_SYMBOL_STR(smsendian_handle_tx_message) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xab1eabb3, __VMLINUX_SYMBOL_STR(smscore_getbuffer) },
	{ 0xfbe96549, __VMLINUX_SYMBOL_STR(smscore_onresponse) },
	{ 0x45284ae9, __VMLINUX_SYMBOL_STR(smsendian_handle_rx_message) },
	{ 0xb30da5d5, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xc5501401, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf32660ee, __VMLINUX_SYMBOL_STR(smscore_start_device) },
	{ 0xba87b523, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x534b0b84, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x985abc9b, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x423f01f6, __VMLINUX_SYMBOL_STR(smscore_set_board_id) },
	{ 0x23e47735, __VMLINUX_SYMBOL_STR(smscore_register_device) },
	{ 0x844539ae, __VMLINUX_SYMBOL_STR(sms_get_board) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x78455f0d, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x2e16935e, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x86e50aa0, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xcd9f0de9, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x84ca47d9, __VMLINUX_SYMBOL_STR(smscore_unregister_device) },
	{ 0x2378b88a, __VMLINUX_SYMBOL_STR(smscore_putbuffer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv";

MODULE_ALIAS("sdio:c*v039Ad5347*");
MODULE_ALIAS("sdio:c*v039Ad1100*");
MODULE_ALIAS("sdio:c*v039Ad0201*");
MODULE_ALIAS("sdio:c*v039Ad0300*");
MODULE_ALIAS("sdio:c*v039Ad0301*");
MODULE_ALIAS("sdio:c*v039Ad0302*");
MODULE_ALIAS("sdio:c*v039Ad0500*");
MODULE_ALIAS("sdio:c*v039Ad0600*");
MODULE_ALIAS("sdio:c*v039Ad0700*");
MODULE_ALIAS("sdio:c*v039Ad0800*");

MODULE_INFO(srcversion, "529BB8308E2822B0AFB542D");
