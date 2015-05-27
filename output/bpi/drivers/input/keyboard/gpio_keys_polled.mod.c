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
	{ 0xd538e4bf, __VMLINUX_SYMBOL_STR(fwnode_handle_put) },
	{ 0xe3a387c6, __VMLINUX_SYMBOL_STR(devm_get_gpiod_from_child) },
	{ 0x7074b17f, __VMLINUX_SYMBOL_STR(fwnode_property_present) },
	{ 0xd7ab2108, __VMLINUX_SYMBOL_STR(fwnode_property_read_u32_array) },
	{ 0xd42ca088, __VMLINUX_SYMBOL_STR(fwnode_property_read_string) },
	{ 0x3dd1cd3, __VMLINUX_SYMBOL_STR(device_get_next_child_node) },
	{ 0xcf29d2f0, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0x675e8ee9, __VMLINUX_SYMBOL_STR(device_property_present) },
	{ 0xa3109444, __VMLINUX_SYMBOL_STR(device_get_child_node_count) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3be4f212, __VMLINUX_SYMBOL_STR(input_register_polled_device) },
	{ 0xa9e9decc, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x44e05cfe, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xefdfa2ae, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x232d2cf5, __VMLINUX_SYMBOL_STR(gpiod_cansleep) },
	{ 0x11f46bc2, __VMLINUX_SYMBOL_STR(devm_input_allocate_polled_device) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf010f271, __VMLINUX_SYMBOL_STR(gpiod_get_value) },
	{ 0x79f39947, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xf8ff4d00, __VMLINUX_SYMBOL_STR(gpiod_get_value_cansleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cgpio-keys-polled*");

MODULE_INFO(srcversion, "69F1B8A9B39C938EFE311DF");
