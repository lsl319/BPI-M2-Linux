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
	{ 0x6752d1de, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x7e4a5215, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe530e794, __VMLINUX_SYMBOL_STR(tegra_asoc_utils_set_ac97_rate) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x160b0af0, __VMLINUX_SYMBOL_STR(platform_device_del) },
	{ 0xefb6275c, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x219a0ab8, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x9afac64b, __VMLINUX_SYMBOL_STR(tegra_asoc_utils_init) },
	{ 0xeb182862, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x26d4eae6, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0x1d45f8bd, __VMLINUX_SYMBOL_STR(tegra_asoc_utils_fini) },
	{ 0x33b9cfbd, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0x278b891d, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5cd5ab3b, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
	{ 0xe26cf89a, __VMLINUX_SYMBOL_STR(platform_device_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-tegra-utils";

MODULE_ALIAS("of:N*T*Cnvidia,tegra-audio-wm9712*");

MODULE_INFO(srcversion, "26FEF0FEF6610B88DFB6425");
