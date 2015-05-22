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
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe40cfe07, __VMLINUX_SYMBOL_STR(power_supply_changed) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1bb5fc26, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_register) },
	{ 0x4df2b71d, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x103182d, __VMLINUX_SYMBOL_STR(devm_usb_get_phy) },
	{ 0xb954485c, __VMLINUX_SYMBOL_STR(devm_usb_get_phy_by_phandle) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x44e05cfe, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf9c10c8c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7844cb4f, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0x226a674d, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_unregister) },
	{ 0xc17350cb, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xa9e9decc, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,isp1704*");

MODULE_INFO(srcversion, "46C25CEA2806838CB6F373B");
