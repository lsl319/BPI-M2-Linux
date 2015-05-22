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
	{ 0x2c9fe4a7, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x70234099, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x3a566e91, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2de95041, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xf47dd479, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x5b24fa18, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xfd675312, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x30413454, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xaadc0acb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x1ae0a2b, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x4fcde4ae, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x7c16914f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x61545d85, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EFF27B20292EA2953ACFB09");
