#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6cec1955, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x131a5ed7, __VMLINUX_SYMBOL_STR(regmap_del_irq_chip) },
	{ 0x20a789ac, __VMLINUX_SYMBOL_STR(irq_set_chip_data) },
	{ 0xa9e9decc, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x50458f8e, __VMLINUX_SYMBOL_STR(irq_create_mapping) },
	{ 0x2269c721, __VMLINUX_SYMBOL_STR(handle_edge_irq) },
	{ 0xb23bef0e, __VMLINUX_SYMBOL_STR(__irq_domain_add) },
	{ 0x549525ef, __VMLINUX_SYMBOL_STR(handle_nested_irq) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x44e05cfe, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x13c776eb, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value_cansleep) },
	{ 0xb4d1ecb4, __VMLINUX_SYMBOL_STR(regmap_add_irq_chip) },
	{ 0xe016d0f, __VMLINUX_SYMBOL_STR(irq_set_chip_and_handler_name) },
	{ 0x7522f3ba, __VMLINUX_SYMBOL_STR(irq_modify_status) },
	{ 0xd9f22f6f, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6cc78c5c, __VMLINUX_SYMBOL_STR(set_irq_flags) },
	{ 0x3ed3be8, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xe2e3c3, __VMLINUX_SYMBOL_STR(irq_domain_xlate_twocell) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "33226F3CE4697639A2ED777");
