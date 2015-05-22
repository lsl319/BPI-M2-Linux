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
	{ 0xf3cbc2eb, __VMLINUX_SYMBOL_STR(snd_soc_test_bits) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd3393b7e, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x52ba23b5, __VMLINUX_SYMBOL_STR(snd_soc_dapm_mixer_update_power) },
	{ 0x535afb5e, __VMLINUX_SYMBOL_STR(regmap_register_patch) },
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc23de616, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xa9e9decc, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x3f4316a6, __VMLINUX_SYMBOL_STR(regulator_register_notifier) },
	{ 0xb8f584d1, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xff6a1710, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0x7a3017e3, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x52a4e9d9, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xd29e263e, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0x171523db, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x332520f8, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x63e91250, __VMLINUX_SYMBOL_STR(regulator_unregister_notifier) },
	{ 0x9c98add8, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xcd734d4e, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x19765ceb, __VMLINUX_SYMBOL_STR(snd_soc_dapm_kcontrol_codec) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc3a73ae2, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xeaa9182c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0xada6d2db, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x5f6c8623, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8c8c1610, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0xc6c47d89, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0x87e9d401, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0xf9c10c8c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x44ff7f70, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x2156650c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xda15bd4c, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0xc17350cb, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x957107b6, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x32645bfb, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x4d66883, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0xae5f1e2c, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x85a09022, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,tlv320aic3x*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic33*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3007*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3106*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3104*");
MODULE_ALIAS("i2c:tlv320aic3x");
MODULE_ALIAS("i2c:tlv320aic33");
MODULE_ALIAS("i2c:tlv320aic3007");
MODULE_ALIAS("i2c:tlv320aic3106");
MODULE_ALIAS("i2c:tlv320aic3104");

MODULE_INFO(srcversion, "12CC665C4E4485482C2BE30");
