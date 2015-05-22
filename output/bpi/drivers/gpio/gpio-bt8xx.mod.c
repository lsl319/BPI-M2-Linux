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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa02212d9, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa88b5133, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x50c6d5b9, __VMLINUX_SYMBOL_STR(gpiochip_add) },
	{ 0x8da4b169, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x990ba3ca, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x31a83db3, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xbb68e861, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0x3b0b6930, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x8e50529f, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x4c121e54, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xed5afd60, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x6b3871df, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xd4c5f72, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000109Ed00000350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000351sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed0000036Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed0000036Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "63B97E160789F961EC6D810");
