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
	{ 0xa8479ff7, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0xb478f170, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x32a17e6c, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x4aea3240, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4103e724, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x5581e1ba, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xd38af9c6, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x924d385c, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x5363324b, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf94f86be, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x99a4cd4d, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:ad9832");
MODULE_ALIAS("spi:ad9835");

MODULE_INFO(srcversion, "E9D183FE0432A161BF1B762");
