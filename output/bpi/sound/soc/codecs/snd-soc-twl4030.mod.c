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
	{ 0xc471c67a, __VMLINUX_SYMBOL_STR(twl4030_audio_disable_resource) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd3393b7e, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x3acdf325, __VMLINUX_SYMBOL_STR(twl4030_audio_enable_resource) },
	{ 0xc23de616, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xa9e9decc, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0xc7563db8, __VMLINUX_SYMBOL_STR(twl_set_regcache_bypass) },
	{ 0xc0823e4c, __VMLINUX_SYMBOL_STR(twl_i2c_write) },
	{ 0x7a3017e3, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x48b5f8d, __VMLINUX_SYMBOL_STR(twl4030_audio_get_mclk) },
	{ 0x52a4e9d9, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x332520f8, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xcd734d4e, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc3a73ae2, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xeaa9182c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x5f6c8623, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x8c8c1610, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x7c98845d, __VMLINUX_SYMBOL_STR(twl_i2c_read) },
	{ 0xf9c10c8c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x44ff7f70, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xda15bd4c, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x6b4731d6, __VMLINUX_SYMBOL_STR(of_find_node_by_name) },
	{ 0xc17350cb, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xb30b7a6c, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x957107b6, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x85a09022, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4BF06046E559CD38F199A63");
