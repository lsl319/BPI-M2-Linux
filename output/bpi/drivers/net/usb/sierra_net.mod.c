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
	{ 0xc7bd5192, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x7c9b4fc2, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xe3a4ba5a, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x237d68b9, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xace74e2c, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0xc760caca, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x2497111, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xf784f95b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xa2ddd739, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xd8355213, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xd8199d9e, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb5931ea3, __VMLINUX_SYMBOL_STR(usbnet_status_stop) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x1d8679a3, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x249ae52, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x456824ee, __VMLINUX_SYMBOL_STR(usbnet_status_start) },
	{ 0x2de95041, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd9605d4c, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x5b24fa18, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfd675312, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x8afcf5eb, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x4fcde4ae, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x3f6882f6, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x5b859133, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xcac0ecd5, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x30413454, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xfb1e3b48, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7c16914f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x7862114f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "896313DAA9C61C842F37412");
