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
	{ 0xd3385742, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7a3017e3, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x5807f8f5, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x52a4e9d9, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x911bcb50, __VMLINUX_SYMBOL_STR(__devm_gpiod_get) },
	{ 0xd29e263e, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0x171523db, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x332520f8, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xcd2ef4ce, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw_range) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc24c258e, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xbfd2e166, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw_range) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9bb75f92, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw_range) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x5f6c8623, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x44056a92, __VMLINUX_SYMBOL_STR(of_property_read_u8_array) },
	{ 0x8c8c1610, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0xc6c47d89, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0x87e9d401, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x3511b756, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x44ff7f70, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x13fb9177, __VMLINUX_SYMBOL_STR(of_property_read_u16_array) },
	{ 0xda15bd4c, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x957107b6, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xdd1c6e3e, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6ad4434e, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x3ed3be8, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x32645bfb, __VMLINUX_SYMBOL_STR(regcache_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:sta350");
MODULE_ALIAS("of:N*T*Cst,sta350*");

MODULE_INFO(srcversion, "877AE9CCCC258B904952940");