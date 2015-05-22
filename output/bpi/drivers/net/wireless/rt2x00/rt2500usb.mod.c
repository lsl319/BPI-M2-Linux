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
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8d66af93, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0xb0013220, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0x1efd85f5, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0x46832b1e, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0xceb79489, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0xddf038b9, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0xd13016d5, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0x4c3735a6, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xec9118d1, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x5c5adfec, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xeb680668, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0xbbcbdc76, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xeaff6c0f, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0xfbabbb1e, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x52166e02, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0xf91973a6, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x2e354b52, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0x48fa78e1, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0xa4648c96, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xb170457e, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x935d6dfc, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0xd6f8bfb, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xa3d831df, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x354083ab, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0x1c4ce874, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0xb25763c1, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0x2d5d4d88, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0x46decf7f, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0x4b48a8d3, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x745b05ba, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0x59c3a857, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3a3829f3, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x30413454, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdfe8cce7, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0xd150e322, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "756D62982FBD19966317B74");
