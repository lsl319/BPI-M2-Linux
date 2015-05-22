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
	{ 0x70234099, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x3a566e91, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2de95041, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xc760caca, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x3f6882f6, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x2497111, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xa2ddd739, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xd8355213, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xd8199d9e, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xd2451e1c, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0xc7bd5192, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x7c9b4fc2, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xe3a4ba5a, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x237d68b9, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xace74e2c, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x2c9fe4a7, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x4fcde4ae, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x30413454, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5b859133, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfd675312, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x1ae0a2b, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x5b24fa18, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x94a6f391, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xaadc0acb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x1d8679a3, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8304C82BA1FAE5770C1DB51");
