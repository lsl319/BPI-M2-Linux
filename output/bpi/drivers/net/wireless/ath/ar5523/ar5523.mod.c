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
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x4a8907de, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x83130f62, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x1aa80d81, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x21275951, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd0f1ee48, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3d49972d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xdfcc44b7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xfe783f31, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc264ef6f, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x819d26b, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xac7ceb61, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x39b0d99a, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x36e5c954, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8573510c, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xa296ca8b, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfcf5b186, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x95584648, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xce58a9b7, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xcca27eeb, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xc135468c, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x1ee40b25, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x80fe9d2c, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x2f7cbd82, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

MODULE_ALIAS("usb:v168Cp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v168Cp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0713d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0710d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp160Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp160Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p5F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p5F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0826d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0827d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0828d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0829d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p4251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F03d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8CF03A8A27B0456C4B3F686");
