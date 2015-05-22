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
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8573510c, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xf94f86be, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x66213969, __VMLINUX_SYMBOL_STR(crc7_be) },
	{ 0x3ad4e747, __VMLINUX_SYMBOL_STR(wl1251_free_hw) },
	{ 0xa9e9decc, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x48e4722e, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa18e28b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xb478f170, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x44e05cfe, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x5363324b, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xbc477a2, __VMLINUX_SYMBOL_STR(irq_set_irq_type) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x924d385c, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x7522f3ba, __VMLINUX_SYMBOL_STR(irq_modify_status) },
	{ 0x432827da, __VMLINUX_SYMBOL_STR(wl1251_init_ieee80211) },
	{ 0xf9c10c8c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc17350cb, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x1ee40b25, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x32a17e6c, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0xdf571566, __VMLINUX_SYMBOL_STR(wl1251_alloc_hw) },
	{ 0xdb533ab0, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xd38af9c6, __VMLINUX_SYMBOL_STR(regulator_enable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,crc7,wl1251";


MODULE_INFO(srcversion, "C48F683B20B7A201533EB1D");
