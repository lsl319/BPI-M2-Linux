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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc4048f22, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x6b313a4c, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb1a24305, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0xa9ad21ac, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0xa5cf435, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3a8a66cd, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x1f984435, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x3243eed7, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x8573510c, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x9e9b2ba4, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0x177ccdc8, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x24c9c446, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0xa89eebde, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0x22b8835b, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0xf264e821, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x22056c54, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xee7fb209, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x3291e8da, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x9a609c02, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0xe7d58de6, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x80fe9d2c, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0x7c16914f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4a8907de, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xeb74f4dd, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x4cabecaa, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x40bb3e92, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x19589c49, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x57cfcbbc, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x1934df38, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x1b7c9f65, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x81d90d03, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0x30413454, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa296ca8b, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x26d1c315, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x81f3afb, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x2f8865a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x6963ce89, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xb3d8774d, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd2b45ef8, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x5ce08f2a, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x13f152a9, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0xc5542835, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xeb7242c3, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xc264ef6f, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x76f6c5ef, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x555747c4, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0xb0bf126a, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x422ce6cf, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0xc135468c, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x20e2b220, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x6fee285c, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x36b37df8, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0xd8838413, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x1ee67856, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x249ae52, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x75e96271, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2a280b21, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7278c647, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x29edba3, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xc57e3562, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0x1aa80d81, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x7c298226, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x18c8dc0b, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x5f7cb389, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0xa989ed3e, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x922124ef, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x302ce1b6, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x3637be9b, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xde135472, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0xd3323d78, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x36e5c954, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1811616a, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x1965cfe7, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x72c2956a, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x3d49972d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xeb4ed746, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x8792c25, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xfcf5b186, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x36d0753e, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x5239ee62, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x33752698, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xe64b2b26, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x5d1c5fb7, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdfb41fd7, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4efb5f95, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0xa3f1b7e4, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0x606eee82, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xac7ceb61, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0xbdd92345, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0xdc3a2b9d, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x21275951, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xc1ce4f73, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xed150067, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x381c5a34, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x49b8ba13, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0xfa1baa29, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0x8e9aca36, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0x90deafd3, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xdfcc44b7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xafcac976, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x1ee40b25, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x84e5437f, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0x753ca2f0, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x4cbb26f6, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xeb2e34c, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x42b18b3, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x63071c34, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xd0f1ee48, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xfc01010b, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x8f84ba74, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,ath9k_common,mac80211,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "79EF94AC4282C818FFF0BF2");
