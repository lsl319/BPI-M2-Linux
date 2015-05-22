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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd3393b7e, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x535afb5e, __VMLINUX_SYMBOL_STR(regmap_register_patch) },
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc23de616, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xa9e9decc, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xb8f584d1, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0x70617a04, __VMLINUX_SYMBOL_STR(rl6231_get_clk_info) },
	{ 0xff6a1710, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0x7a3017e3, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x5807f8f5, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x52a4e9d9, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x332520f8, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x9c98add8, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xcd734d4e, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc3a73ae2, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xa18e28b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xeaa9182c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x44e05cfe, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x5f6c8623, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8c8c1610, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x87e9d401, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0xf9c10c8c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xdba4502f, __VMLINUX_SYMBOL_STR(rl6231_calc_dmic_clk) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x44ff7f70, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xc8269f94, __VMLINUX_SYMBOL_STR(snd_soc_params_to_frame_size) },
	{ 0x2156650c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xda15bd4c, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x7f68b24d, __VMLINUX_SYMBOL_STR(rl6231_pll_calc) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1353ea67, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x957107b6, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6ad4434e, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x3ed3be8, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x32645bfb, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x4d66883, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0xae5f1e2c, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x85a09022, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-rl6231";

MODULE_ALIAS("of:N*T*Crealtek,rt5639*");
MODULE_ALIAS("of:N*T*Crealtek,rt5640*");
MODULE_ALIAS("i2c:rt5640");
MODULE_ALIAS("i2c:rt5639");
MODULE_ALIAS("i2c:rt5642");

MODULE_INFO(srcversion, "BEBB17B99409BA0651B1111");
