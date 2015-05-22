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
	{ 0xb71871f6, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2c9fe4a7, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x70234099, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x3a566e91, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2de95041, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x1fd9424f, __VMLINUX_SYMBOL_STR(rndis_tx_fixup) },
	{ 0xc42dd6ea, __VMLINUX_SYMBOL_STR(rndis_rx_fixup) },
	{ 0x6980ce7c, __VMLINUX_SYMBOL_STR(rndis_status) },
	{ 0xc760caca, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x2497111, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xf784f95b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xa2ddd739, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xd8355213, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xd8199d9e, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7862114f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xc21469cf, __VMLINUX_SYMBOL_STR(usbnet_purge_paused_rxq) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xfd6b9596, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x12f36d68, __VMLINUX_SYMBOL_STR(generic_rndis_bind) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x979d7bea, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x3ef2da5f, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x243c9fd, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xe516c3de, __VMLINUX_SYMBOL_STR(rndis_unbind) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd6a3c456, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0xf190f23a, __VMLINUX_SYMBOL_STR(cfg80211_connect_result) },
	{ 0x77743277, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x5fb69ed5, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x5dac7e96, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x5587a5b4, __VMLINUX_SYMBOL_STR(usbnet_resume_rx) },
	{ 0x8afcf5eb, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x4a8907de, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc48e84ef, __VMLINUX_SYMBOL_STR(cfg80211_cqm_rssi_notify) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0xad98bbcb, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb436c3c, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0xc775e21b, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_width) },
	{ 0x26452080, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x87f32fc0, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb7b07c0b, __VMLINUX_SYMBOL_STR(rndis_command) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfa875e4e, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0xaadc0acb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x2b9da25e, __VMLINUX_SYMBOL_STR(cfg80211_pmksa_candidate_notify) },
	{ 0xd7c45f5a, __VMLINUX_SYMBOL_STR(usbnet_pause_rx) },
	{ 0xf47dd479, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rndis_host,cfg80211";

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");

MODULE_INFO(srcversion, "A5CF77E32AC78D65DCB3A85");
