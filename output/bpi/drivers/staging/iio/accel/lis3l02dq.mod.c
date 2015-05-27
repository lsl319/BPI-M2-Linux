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
	{ 0xfb409b23, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0xa8479ff7, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0x3b60ca41, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0x51459d1e, __VMLINUX_SYMBOL_STR(iio_trigger_alloc) },
	{ 0xa9e9decc, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x86c64a35, __VMLINUX_SYMBOL_STR(iio_kfifo_allocate) },
	{ 0x4aea3240, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x48e4722e, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x99a4cd4d, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5581e1ba, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf6d15b99, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7f092853, __VMLINUX_SYMBOL_STR(iio_trigger_poll) },
	{ 0xb478f170, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xf83823dd, __VMLINUX_SYMBOL_STR(iio_buffer_get) },
	{ 0x5363324b, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xe2859fb1, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xe15a98d6, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0xf9c10c8c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xcb73888d, __VMLINUX_SYMBOL_STR(iio_kfifo_free) },
	{ 0x13310e81, __VMLINUX_SYMBOL_STR(iio_trigger_free) },
	{ 0xf14c5ab5, __VMLINUX_SYMBOL_STR(__bitmap_empty) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e65b632, __VMLINUX_SYMBOL_STR(iio_alloc_pollfunc) },
	{ 0xb287f55e, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x54489689, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x806c9f3e, __VMLINUX_SYMBOL_STR(iio_push_event) },
	{ 0x32a17e6c, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x8b4e2fbd, __VMLINUX_SYMBOL_STR(iio_dealloc_pollfunc) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8849314D8440B29EE3FBBF6");
