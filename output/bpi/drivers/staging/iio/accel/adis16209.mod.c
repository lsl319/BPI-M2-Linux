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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6cec1955, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xff2dccee, __VMLINUX_SYMBOL_STR(adis_update_scan_mode) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4aea3240, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x867a1e3b, __VMLINUX_SYMBOL_STR(adis_initial_startup) },
	{ 0x99a4cd4d, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x5581e1ba, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xb45c9609, __VMLINUX_SYMBOL_STR(adis_init) },
	{ 0xb478f170, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8915d131, __VMLINUX_SYMBOL_STR(adis_write_reg) },
	{ 0xc274eb7a, __VMLINUX_SYMBOL_STR(adis_cleanup_buffer_and_trigger) },
	{ 0x8a6a21db, __VMLINUX_SYMBOL_STR(adis_setup_buffer_and_trigger) },
	{ 0xc71c9b44, __VMLINUX_SYMBOL_STR(adis_read_reg) },
	{ 0x2d0efc64, __VMLINUX_SYMBOL_STR(adis_single_conversion) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x32a17e6c, __VMLINUX_SYMBOL_STR(spi_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=adis_lib";


MODULE_INFO(srcversion, "FBBB25032EB8BE42CB21A99");
