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
	{ 0x91a55cf3, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0xb3f162bb, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_card_name) },
	{ 0x6752d1de, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x7e4a5215, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1977f078, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cgoogle,snow-audio-max98090*");
MODULE_ALIAS("of:N*T*Cgoogle,snow-audio-max98091*");
MODULE_ALIAS("of:N*T*Cgoogle,snow-audio-max98095*");

MODULE_INFO(srcversion, "40EC1A490DB0D4DB31DA4F0");
