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
	{ 0x47aee1f9, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xc5501401, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x413d30f0, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0xba13187e, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdd226fa9, __VMLINUX_SYMBOL_STR(__raw_readsw) },
	{ 0x1f5fd02d, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xf7163ec9, __VMLINUX_SYMBOL_STR(__raw_readsb) },
	{ 0xeb03b389, __VMLINUX_SYMBOL_STR(__raw_readsl) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x992710fd, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x8e50529f, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x9e4a86bc, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xdad97f94, __VMLINUX_SYMBOL_STR(__raw_writesw) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd98c0a08, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x990ba3ca, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x6f96d9b5, __VMLINUX_SYMBOL_STR(sdio_writel) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xed5afd60, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xbe7e42b7, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xcb8f7f59, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x99264b49, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb478f170, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x7e252509, __VMLINUX_SYMBOL_STR(sdio_readl) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdd82d8be, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xaa5424f2, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xa9c6a3d8, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xd5416608, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xcdd544d4, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x8770a68b, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xa2d21ead, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xa02212d9, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa2617937, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xf0ed2ef4, __VMLINUX_SYMBOL_STR(__raw_writesb) },
	{ 0x45fa2066, __VMLINUX_SYMBOL_STR(sdio_writew) },
	{ 0xecf8a3b4, __VMLINUX_SYMBOL_STR(__raw_writesl) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3c0ce751, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xf999188e, __VMLINUX_SYMBOL_STR(pci_prepare_to_sleep) },
	{ 0xa88b5133, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe49b0311, __VMLINUX_SYMBOL_STR(pci_back_from_sleep) },
	{ 0xebe72555, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9c40507c, __VMLINUX_SYMBOL_STR(sdio_readw) },
	{ 0x50785bf7, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xcd9f0de9, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x653e4302, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x6b3871df, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xd094b7a2, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x78455f0d, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x4c121e54, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000014E4d00004301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014A4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004328sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004329sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004351sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2F0B11542AA7DE80F608B61");
