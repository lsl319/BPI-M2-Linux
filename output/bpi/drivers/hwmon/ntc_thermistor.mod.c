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
	{ 0xf1deabf2, __VMLINUX_SYMBOL_STR(div64_u64) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7572e365, __VMLINUX_SYMBOL_STR(thermal_zone_of_sensor_register) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x28120529, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0xdd7ab7ec, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xa18e28b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x1dda4714, __VMLINUX_SYMBOL_STR(iio_channel_get) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x20321bcc, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5e34e4dd, __VMLINUX_SYMBOL_STR(iio_read_channel_raw) },
	{ 0x8df2ad3c, __VMLINUX_SYMBOL_STR(thermal_zone_of_sensor_unregister) },
	{ 0x1cea6563, __VMLINUX_SYMBOL_STR(iio_channel_release) },
	{ 0x382aef34, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x289342af, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cmurata,ncp15wb473*");
MODULE_ALIAS("of:N*T*Cmurata,ncp18wb473*");
MODULE_ALIAS("of:N*T*Cmurata,ncp21wb473*");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wb473*");
MODULE_ALIAS("of:N*T*Cmurata,ncp15wl333*");
MODULE_ALIAS("of:N*T*Cepcos,b57330v2103*");
MODULE_ALIAS("of:N*T*Cntc,ncp15wb473*");
MODULE_ALIAS("of:N*T*Cntc,ncp18wb473*");
MODULE_ALIAS("of:N*T*Cntc,ncp21wb473*");
MODULE_ALIAS("of:N*T*Cntc,ncp03wb473*");
MODULE_ALIAS("of:N*T*Cntc,ncp15wl333*");

MODULE_INFO(srcversion, "DE560725ABDAAE15EC111AA");
