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
	{ 0xdf3b53ec, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd3393b7e, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb7792708, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xa9e9decc, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x7a3017e3, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x5807f8f5, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x52a4e9d9, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xd29e263e, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0x171523db, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x332520f8, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xada6d2db, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x20321bcc, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x45bb4fc4, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x5f6c8623, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xc6c47d89, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf9c10c8c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x3511b756, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x44ff7f70, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x2156650c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xc17350cb, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xe8d7b9cc, __VMLINUX_SYMBOL_STR(devm_regmap_init) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x957107b6, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x32dae526, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0x6ad4434e, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x3ed3be8, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x32645bfb, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x85a09022, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:tas5086");
MODULE_ALIAS("of:N*T*Cti,tas5086*");

MODULE_INFO(srcversion, "CF8CF1B5661440BDB41E5FB");
