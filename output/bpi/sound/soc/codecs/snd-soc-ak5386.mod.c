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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa9e9decc, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xd29e263e, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0x171523db, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x20321bcc, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x44e05cfe, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xc6c47d89, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xf9c10c8c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x44ff7f70, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xc17350cb, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x957107b6, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Casahi-kasei,ak5386*");

MODULE_INFO(srcversion, "9821BA85920722A099F5CE9");
