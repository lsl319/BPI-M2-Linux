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
	{ 0x2aefa1d1, __VMLINUX_SYMBOL_STR(pmbus_do_remove) },
	{ 0x895e6213, __VMLINUX_SYMBOL_STR(pmbus_regulator_ops) },
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x5391df73, __VMLINUX_SYMBOL_STR(pmbus_write_byte) },
	{ 0x4468dddf, __VMLINUX_SYMBOL_STR(pmbus_read_word_data) },
	{ 0x72a4c4f9, __VMLINUX_SYMBOL_STR(pmbus_get_driver_info) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xae20604b, __VMLINUX_SYMBOL_STR(pmbus_do_probe) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x82151008, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("i2c:ltc2974");
MODULE_ALIAS("i2c:ltc2977");
MODULE_ALIAS("i2c:ltc2978");
MODULE_ALIAS("i2c:ltc3880");
MODULE_ALIAS("i2c:ltc3883");
MODULE_ALIAS("i2c:ltm4676");
MODULE_ALIAS("of:N*T*Clltc,ltc2974*");
MODULE_ALIAS("of:N*T*Clltc,ltc2977*");
MODULE_ALIAS("of:N*T*Clltc,ltc2978*");
MODULE_ALIAS("of:N*T*Clltc,ltc3880*");
MODULE_ALIAS("of:N*T*Clltc,ltc3883*");
MODULE_ALIAS("of:N*T*Clltc,ltm4676*");

MODULE_INFO(srcversion, "EEF3EE0E638D80430D4C224");
