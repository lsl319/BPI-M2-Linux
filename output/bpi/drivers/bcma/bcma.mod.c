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
	{ 0x413d30f0, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x530afd45, __VMLINUX_SYMBOL_STR(of_translate_address) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdd226fa9, __VMLINUX_SYMBOL_STR(__raw_readsw) },
	{ 0x1f5fd02d, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xf7163ec9, __VMLINUX_SYMBOL_STR(__raw_readsb) },
	{ 0xeb03b389, __VMLINUX_SYMBOL_STR(__raw_readsl) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8be6cc22, __VMLINUX_SYMBOL_STR(irq_create_of_mapping) },
	{ 0x8e50529f, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x9e4a86bc, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xdad97f94, __VMLINUX_SYMBOL_STR(__raw_writesw) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc1942f, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x990ba3ca, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbe7e42b7, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xcb8f7f59, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb478f170, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdd82d8be, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xeb182862, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xaa5424f2, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x19b929e8, __VMLINUX_SYMBOL_STR(of_get_address) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x8770a68b, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xa2d21ead, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5a1aa1ef, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x332e460b, __VMLINUX_SYMBOL_STR(of_irq_parse_raw) },
	{ 0xa02212d9, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb3f96df5, __VMLINUX_SYMBOL_STR(of_irq_parse_one) },
	{ 0xf0ed2ef4, __VMLINUX_SYMBOL_STR(__raw_writesb) },
	{ 0xecf8a3b4, __VMLINUX_SYMBOL_STR(__raw_writesl) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3c0ce751, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xa88b5133, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xebe72555, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x50785bf7, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x653e4302, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x6b3871df, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000014E4d00000576sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004313sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004331sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004357sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004359sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DCsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5D714A30B3A5B7CBB91D08C");
