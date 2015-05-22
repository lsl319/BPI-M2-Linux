#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6cec1955, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xd3393b7e, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xc23de616, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x7a3017e3, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x52a4e9d9, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xd29e263e, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0x171523db, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x332520f8, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc3a73ae2, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x4c88b416, __VMLINUX_SYMBOL_STR(dev_get_regmap) },
	{ 0xeaa9182c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x45bb4fc4, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x5f6c8623, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x8c8c1610, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0xc6c47d89, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xcd41c085, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2156650c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xda15bd4c, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x957107b6, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x32645bfb, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xae5f1e2c, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x85a09022, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FFB154786FF111942090C15");
