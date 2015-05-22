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
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x4468dddf, __VMLINUX_SYMBOL_STR(pmbus_read_word_data) },
	{ 0xb6d2276a, __VMLINUX_SYMBOL_STR(pmbus_read_byte_data) },
	{ 0x72a4c4f9, __VMLINUX_SYMBOL_STR(pmbus_get_driver_info) },
	{ 0x471711b2, __VMLINUX_SYMBOL_STR(pmbus_write_word_data) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xae20604b, __VMLINUX_SYMBOL_STR(pmbus_do_probe) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4288b3ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xcabb5e60, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x8e5135a4, __VMLINUX_SYMBOL_STR(i2c_smbus_read_block_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("i2c:adm1075");
MODULE_ALIAS("i2c:adm1275");
MODULE_ALIAS("i2c:adm1276");

MODULE_INFO(srcversion, "CAC76EB237483A4F1C03389");
