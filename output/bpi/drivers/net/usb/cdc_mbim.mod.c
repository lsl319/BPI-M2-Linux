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
	{ 0x3a566e91, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2de95041, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xc760caca, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x3f6882f6, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x2497111, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xf784f95b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xa2ddd739, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xd8355213, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xd8199d9e, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x70234099, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x2c9fe4a7, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xd6f95671, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0x2e16da5b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x6b112888, __VMLINUX_SYMBOL_STR(usb_cdc_wdm_register) },
	{ 0x44fda18c, __VMLINUX_SYMBOL_STR(cdc_ncm_bind_common) },
	{ 0xd2dba7c6, __VMLINUX_SYMBOL_STR(cdc_ncm_select_altsetting) },
	{ 0xfb899690, __VMLINUX_SYMBOL_STR(cdc_ncm_unbind) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe79aa2e9, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xf46000af, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x59c1be7, __VMLINUX_SYMBOL_STR(in6_dev_finish_destroy) },
	{ 0x674c73d7, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0xa5a3837a, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xaadc0acb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xcac0ecd5, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2f8865a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x85e1f382, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_ndp16) },
	{ 0x96e40596, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_nth16) },
	{ 0x7862114f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xfdb902c6, __VMLINUX_SYMBOL_STR(cdc_ncm_fill_tx_frame) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7c16914f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdc-wdm,cdc_ncm";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "727EAEE3DB9E93F48283CF2");
