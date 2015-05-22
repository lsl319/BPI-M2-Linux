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
	{ 0xc17350cb, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x54489689, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe3dda888, __VMLINUX_SYMBOL_STR(i2c_bit_add_numbered_bus) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xada6d2db, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x6d8bfe5e, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0xa9e9decc, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xa18e28b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x32dae526, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0xf9c10c8c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x531e7be1, __VMLINUX_SYMBOL_STR(of_count_phandle_with_args) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x50f878b9, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Ci2c-gpio*");

MODULE_INFO(srcversion, "3AB6AD091C116F4F8EAE6C4");
