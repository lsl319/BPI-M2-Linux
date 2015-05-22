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
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd1b45396, __VMLINUX_SYMBOL_STR(sch56xx_watchdog_register) },
	{ 0x28120529, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0xd5416608, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8f5d3eae, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf5877d4, __VMLINUX_SYMBOL_STR(sch56xx_read_virtual_reg16) },
	{ 0xed1d2a08, __VMLINUX_SYMBOL_STR(sch56xx_write_virtual_reg) },
	{ 0xe2a6864, __VMLINUX_SYMBOL_STR(sch56xx_read_virtual_reg) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xba13187e, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x289342af, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x34257f35, __VMLINUX_SYMBOL_STR(sch56xx_watchdog_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sch56xx-common,hwmon";


MODULE_INFO(srcversion, "9AB82D788F8C1523A00B5ED");