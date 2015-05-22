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
	{ 0xb225bf0d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x249ee234, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xeb182862, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xa02212d9, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa88b5133, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe26cf89a, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xad51fb88, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0x219a0ab8, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x25b92de6, __VMLINUX_SYMBOL_STR(platform_device_add_resources) },
	{ 0xefb6275c, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xcdd544d4, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xd98c0a08, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x59d8223a, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x28120529, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0xdd7ab7ec, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x31a83db3, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0x8f5d3eae, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x382aef34, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x289342af, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("pci:v00001106d00003057sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7C10838B010765DCF5B22A5");
