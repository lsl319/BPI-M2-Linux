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
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x28120529, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0xe28c3471, __VMLINUX_SYMBOL_STR(sysfs_chmod_file) },
	{ 0xdd7ab7ec, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xeed9caa, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x382aef34, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x289342af, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4288b3ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("i2c:f75373");
MODULE_ALIAS("i2c:f75375");
MODULE_ALIAS("i2c:f75387");

MODULE_INFO(srcversion, "2F19ACD77A3654970B9CE17");
