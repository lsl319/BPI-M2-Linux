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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6752d1de, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x7e4a5215, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0x2e47e34e, __VMLINUX_SYMBOL_STR(snd_soc_jack_new) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa18e28b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x5a756d31, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_pins) },
	{ 0xe0db6299, __VMLINUX_SYMBOL_STR(snd_soc_runtime_set_dai_fmt) },
	{ 0xf9c10c8c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x33b9cfbd, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0xbfcb320b, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x98950b67, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x938a8dd7, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,omap-twl4030*");

MODULE_INFO(srcversion, "B20904CF80E0999E90E44FA");
