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
	{ 0xb3f162bb, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_card_name) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6752d1de, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x7e4a5215, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xad8250c0, __VMLINUX_SYMBOL_STR(of_match_node) },
	{ 0xa18e28b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x26d4eae6, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0x1977f078, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x33b9cfbd, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x5cd5ab3b, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Csamsung,odroidx2-audio*");
MODULE_ALIAS("of:N*T*Csamsung,odroidu3-audio*");

MODULE_INFO(srcversion, "801320E1E65C4A8148A47C8");
