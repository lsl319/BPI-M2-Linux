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
	{ 0xab2fe89, __VMLINUX_SYMBOL_STR(adt7x10_dev_pm_ops) },
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x4288b3ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xeed9caa, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x82151008, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x57a3350d, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0xe5ea7961, __VMLINUX_SYMBOL_STR(adt7x10_probe) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb66ae3a2, __VMLINUX_SYMBOL_STR(adt7x10_remove) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=adt7x10";

MODULE_ALIAS("i2c:adt7410");
MODULE_ALIAS("i2c:adt7420");

MODULE_INFO(srcversion, "6BF79B4D53125AF9AD8E95E");