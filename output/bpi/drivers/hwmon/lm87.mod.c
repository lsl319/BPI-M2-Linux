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
	{ 0xef1c781c, __VMLINUX_SYMBOL_STR(vid_which_vrm) },
	{ 0xdd7ab7ec, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xeed9caa, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x289342af, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x903c239, __VMLINUX_SYMBOL_STR(vid_from_reg) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x382aef34, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4288b3ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon,hwmon-vid";

MODULE_ALIAS("i2c:lm87");
MODULE_ALIAS("i2c:adm1024");

MODULE_INFO(srcversion, "CB5B5F4CCC766E3F6299BA3");
