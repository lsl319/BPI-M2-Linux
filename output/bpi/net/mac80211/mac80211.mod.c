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
	{ 0x99ed8993, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x918ca53e, __VMLINUX_SYMBOL_STR(cfg80211_rx_unprot_mlme_mgmt) },
	{ 0x49ce9e24, __VMLINUX_SYMBOL_STR(cfg80211_auth_timeout) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf47dd479, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc48e84ef, __VMLINUX_SYMBOL_STR(cfg80211_cqm_rssi_notify) },
	{ 0x2334c823, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xab6babaf, __VMLINUX_SYMBOL_STR(pm_qos_request) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x3ef2da5f, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x8629bbfc, __VMLINUX_SYMBOL_STR(cfg80211_unlink_bss) },
	{ 0xfed4d591, __VMLINUX_SYMBOL_STR(cfg80211_find_vendor_ie) },
	{ 0x1f6bfcaf, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcca27eeb, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x1879fcbd, __VMLINUX_SYMBOL_STR(bridge_tunnel_header) },
	{ 0x7f7d59fb, __VMLINUX_SYMBOL_STR(cfg80211_radar_event) },
	{ 0x75034145, __VMLINUX_SYMBOL_STR(cfg80211_shutdown_all_interfaces) },
	{ 0x320707c6, __VMLINUX_SYMBOL_STR(led_trigger_event) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x19e03378, __VMLINUX_SYMBOL_STR(cfg80211_get_p2p_attr) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x252c7e27, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x10568c49, __VMLINUX_SYMBOL_STR(cfg80211_report_wowlan_wakeup) },
	{ 0x95ec735e, __VMLINUX_SYMBOL_STR(led_set_brightness) },
	{ 0xefc56354, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0x5dac7e96, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x5e866d85, __VMLINUX_SYMBOL_STR(prandom_bytes) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xfb1e3b48, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xc237195b, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xe63f09cc, __VMLINUX_SYMBOL_STR(led_trigger_register) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x8afcf5eb, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb2c345cc, __VMLINUX_SYMBOL_STR(led_blink_set) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x10b4301f, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x7c16914f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4a8907de, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc63f1b81, __VMLINUX_SYMBOL_STR(ieee80211_radiotap_iterator_next) },
	{ 0x3b0f2d13, __VMLINUX_SYMBOL_STR(cfg80211_stop_iface) },
	{ 0x60c4ed63, __VMLINUX_SYMBOL_STR(ieee80211_data_to_8023) },
	{ 0xc79737b, __VMLINUX_SYMBOL_STR(cfg80211_probe_status) },
	{ 0x7e8fed7, __VMLINUX_SYMBOL_STR(cfg80211_unregister_wdev) },
	{ 0x7fe1a403, __VMLINUX_SYMBOL_STR(cfg80211_find_ie) },
	{ 0xa192813b, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0xeea52d24, __VMLINUX_SYMBOL_STR(cfg80211_reg_can_beacon) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x8fb28c65, __VMLINUX_SYMBOL_STR(cfg80211_check_station_change) },
	{ 0x91397cc7, __VMLINUX_SYMBOL_STR(cfg80211_ch_switch_started_notify) },
	{ 0x30413454, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x634b46d8, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x2f8865a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x22021987, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xc01452a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x865029ac, __VMLINUX_SYMBOL_STR(__hw_addr_sync) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x8c617203, __VMLINUX_SYMBOL_STR(cfg80211_cqm_beacon_loss_notify) },
	{ 0x69b18f43, __VMLINUX_SYMBOL_STR(rfc1042_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe61930e3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x9febb34f, __VMLINUX_SYMBOL_STR(cfg80211_chandef_usable) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd2606db9, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x83130f62, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x26452080, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x8b240043, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xed4c250d, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xaf91d89f, __VMLINUX_SYMBOL_STR(__kernel_param_lock) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4437fc59, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped_rtnl) },
	{ 0x982e6b6d, __VMLINUX_SYMBOL_STR(ieee80211_radiotap_iterator_init) },
	{ 0x34bf624f, __VMLINUX_SYMBOL_STR(led_trigger_unregister) },
	{ 0x1e5b03dc, __VMLINUX_SYMBOL_STR(pm_qos_add_notifier) },
	{ 0x2877cb3a, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x243c9fd, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x768c08f8, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0xd38195b3, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6d6cb9ad, __VMLINUX_SYMBOL_STR(ieee80211_operating_class_to_band) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xfb4182e, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xbd22555a, __VMLINUX_SYMBOL_STR(cfg80211_cqm_pktloss_notify) },
	{ 0xfa875e4e, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x60cd52f9, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xd9605d4c, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x8a6b9993, __VMLINUX_SYMBOL_STR(cfg80211_report_obss_beacon) },
	{ 0xdc3fcbc9, __VMLINUX_SYMBOL_STR(__sw_hweight8) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xf7dc4c72, __VMLINUX_SYMBOL_STR(cfg80211_iter_combinations) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3d470c4d, __VMLINUX_SYMBOL_STR(cfg80211_chandef_compatible) },
	{ 0x77743277, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0xd5ef4ace, __VMLINUX_SYMBOL_STR(cfg80211_rx_spurious_frame) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x57ad2084, __VMLINUX_SYMBOL_STR(cfg80211_assoc_timeout) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0xc91f9649, __VMLINUX_SYMBOL_STR(cfg80211_get_drvinfo) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x50214c28, __VMLINUX_SYMBOL_STR(ieee80211_bss_get_ie) },
	{ 0xf1b191b1, __VMLINUX_SYMBOL_STR(cfg80211_tdls_oper_request) },
	{ 0xadc98846, __VMLINUX_SYMBOL_STR(cfg80211_check_combinations) },
	{ 0x922124ef, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x61545d85, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x99c3cbf2, __VMLINUX_SYMBOL_STR(cfg80211_gtk_rekey_notify) },
	{ 0x53d0b3bb, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7a27c184, __VMLINUX_SYMBOL_STR(ewma_init) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb6eba1ee, __VMLINUX_SYMBOL_STR(cfg80211_tx_mlme_mgmt) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x967dbbe4, __VMLINUX_SYMBOL_STR(cfg80211_ch_switch_notify) },
	{ 0xdb436c3c, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x36e5c954, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0xfd6b9596, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x14cb6048, __VMLINUX_SYMBOL_STR(cfg80211_rx_mlme_mgmt) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x30163882, __VMLINUX_SYMBOL_STR(cfg80211_classify8021d) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb627d91b, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_width_frame) },
	{ 0x5898043a, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x19f115c3, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x979d7bea, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x17999ed4, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x69cd5a4, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x8623aef0, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x50fad434, __VMLINUX_SYMBOL_STR(round_jiffies_up) },
	{ 0x495457ff, __VMLINUX_SYMBOL_STR(cfg80211_calculate_bitrate) },
	{ 0xd11c0dc1, __VMLINUX_SYMBOL_STR(__kernel_param_unlock) },
	{ 0x6ba03f14, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x7f197567, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x23a0ed73, __VMLINUX_SYMBOL_STR(netdev_set_default_ethtool_ops) },
	{ 0xf5038a47, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x2b983f9c, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x3e285fec, __VMLINUX_SYMBOL_STR(cfg80211_chandef_valid) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xcb1757f3, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xe789e81f, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x4a112df8, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xf14c5ab5, __VMLINUX_SYMBOL_STR(__bitmap_empty) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x3d41d930, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xa3a69a, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0x76d9bf11, __VMLINUX_SYMBOL_STR(crc32_be) },
	{ 0x8a7062a5, __VMLINUX_SYMBOL_STR(ieee80211_mandatory_rates) },
	{ 0x3633620c, __VMLINUX_SYMBOL_STR(cfg80211_ref_bss) },
	{ 0x3e9110fa, __VMLINUX_SYMBOL_STR(__hw_addr_unsync) },
	{ 0x51aae37c, __VMLINUX_SYMBOL_STR(ieee80211_amsdu_to_8023s) },
	{ 0x67f67b43, __VMLINUX_SYMBOL_STR(led_trigger_blink_oneshot) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x753ca2f0, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6249a217, __VMLINUX_SYMBOL_STR(cfg80211_cac_event) },
	{ 0x80340074, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0xbcac6160, __VMLINUX_SYMBOL_STR(pm_qos_remove_notifier) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7af8e472, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x62612f0f, __VMLINUX_SYMBOL_STR(skb_clone_sk) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x36b6fb61, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x5e515be6, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x57674fd7, __VMLINUX_SYMBOL_STR(__sw_hweight16) },
	{ 0xad98bbcb, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0xad3af4ac, __VMLINUX_SYMBOL_STR(cfg80211_chandef_dfs_required) },
	{ 0x528d0c14, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0xa92e5590, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf784f95b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x6cd6c097, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xf829286a, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x54146533, __VMLINUX_SYMBOL_STR(cfg80211_rx_unexpected_4addr_frame) },
	{ 0xce63eb85, __VMLINUX_SYMBOL_STR(cfg80211_rx_assoc_resp) },
	{ 0xf389fe60, __VMLINUX_SYMBOL_STR(__hw_addr_init) },
	{ 0xec0664f0, __VMLINUX_SYMBOL_STR(skb_complete_wifi_ack) },
	{ 0xb3aeeac8, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_results) },
	{ 0xa14f3d8c, __VMLINUX_SYMBOL_STR(ewma_add) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";


MODULE_INFO(srcversion, "DE93ED2C71D08BD3B968103");
