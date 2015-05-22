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
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xc971060, __VMLINUX_SYMBOL_STR(ar9003_paprd_is_done) },
	{ 0xc4048f22, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0xccff41a5, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0x6b313a4c, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x10f8f435, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xb1a24305, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0xa9ad21ac, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0xaf9adf38, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0xa5cf435, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0x1f6bfcaf, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x3bef3da1, __VMLINUX_SYMBOL_STR(ar9003_mci_send_wlan_channels) },
	{ 0x3a0a0a8f, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9020bbfc, __VMLINUX_SYMBOL_STR(ath9k_hw_setantenna) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x85789b71, __VMLINUX_SYMBOL_STR(ath9k_hw_gen_timer_start) },
	{ 0x1f984435, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x3243eed7, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x8573510c, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x9e9b2ba4, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0x177ccdc8, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x185c33b9, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x8b44fb6b, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xffd02408, __VMLINUX_SYMBOL_STR(ath9k_hw_get_tsf_offset) },
	{ 0xde762ad8, __VMLINUX_SYMBOL_STR(ath9k_hw_numtxpending) },
	{ 0x2faa2bb5, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xa84af467, __VMLINUX_SYMBOL_STR(ar9003_paprd_setup_gain_table) },
	{ 0x24c9c446, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x18fef9cb, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0xa89eebde, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xfa28e30f, __VMLINUX_SYMBOL_STR(ath9k_hw_set_interrupts) },
	{ 0x22b8835b, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0xf264e821, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0xd46b89a7, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_mci) },
	{ 0xefc56354, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0xb0c142e0, __VMLINUX_SYMBOL_STR(ar9003_paprd_enable) },
	{ 0xe9955911, __VMLINUX_SYMBOL_STR(ath9k_hw_getchan_noise) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0x22056c54, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xee7fb209, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xc8e31b02, __VMLINUX_SYMBOL_STR(ath9k_hw_computetxtime) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x1e0100eb, __VMLINUX_SYMBOL_STR(ath9k_hw_disable_interrupts) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xfe947cc9, __VMLINUX_SYMBOL_STR(ath9k_hw_bstuck_nfcal) },
	{ 0x3291e8da, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x9a609c02, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0xe7d58de6, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xc7775b80, __VMLINUX_SYMBOL_STR(ath9k_hw_gettxbuf) },
	{ 0xf6342117, __VMLINUX_SYMBOL_STR(dfs_pattern_detector_init) },
	{ 0x80fe9d2c, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0x7c16914f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9faa594a, __VMLINUX_SYMBOL_STR(pcie_capability_clear_and_set_word) },
	{ 0x4a8907de, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xeb74f4dd, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x314f9a54, __VMLINUX_SYMBOL_STR(ieee80211_scan_completed) },
	{ 0xab77205e, __VMLINUX_SYMBOL_STR(ath_gen_timer_free) },
	{ 0x4cabecaa, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x40bb3e92, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x19589c49, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x57cfcbbc, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x1934df38, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x1b7c9f65, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x570ead57, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_gpio_input) },
	{ 0x9c7a3624, __VMLINUX_SYMBOL_STR(ath9k_hw_kill_interrupts) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x81d90d03, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0x8969fb79, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf32) },
	{ 0x30413454, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa296ca8b, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x7c552846, __VMLINUX_SYMBOL_STR(ieee80211_ready_on_channel) },
	{ 0x70c5de9a, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x6963ce89, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xb3d8774d, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xa7f16981, __VMLINUX_SYMBOL_STR(ath9k_hw_process_rxdesc_edma) },
	{ 0x53da1878, __VMLINUX_SYMBOL_STR(ar9003_paprd_populate_single_table) },
	{ 0xd2b45ef8, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x990ba3ca, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x5ce08f2a, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x13f152a9, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x211f82ff, __VMLINUX_SYMBOL_STR(ath_gen_timer_isr) },
	{ 0xbaaa4d3e, __VMLINUX_SYMBOL_STR(ath9k_hw_rxprocdesc) },
	{ 0xc5542835, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xeb7242c3, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0x2d833725, __VMLINUX_SYMBOL_STR(xen_dma_ops) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x26e619fc, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_2wire) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xc264ef6f, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xce58a9b7, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x555747c4, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd87774d9, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_dbg_info) },
	{ 0xdfb7064d, __VMLINUX_SYMBOL_STR(ar9003_paprd_create_curve) },
	{ 0xb0bf126a, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x422ce6cf, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0x3cc73d4c, __VMLINUX_SYMBOL_STR(ieee80211_tx_prepare_skb) },
	{ 0xc135468c, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x20e2b220, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x6fee285c, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x36b37df8, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0xd8838413, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x1ee67856, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x75e96271, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0xd0617734, __VMLINUX_SYMBOL_STR(ath9k_hw_gen_timer_stop) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdd82d8be, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x2a280b21, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc34ebd31, __VMLINUX_SYMBOL_STR(ieee80211_remain_on_channel_expired) },
	{ 0x7458c40c, __VMLINUX_SYMBOL_STR(ath9k_hw_addrxbuf_edma) },
	{ 0x8f5d3eae, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x77779c7f, __VMLINUX_SYMBOL_STR(ieee80211_find_sta_by_ifaddr) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7dd3ef2f, __VMLINUX_SYMBOL_STR(ath9k_hw_setup_statusring) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7278c647, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x29edba3, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x2357db21, __VMLINUX_SYMBOL_STR(ar9003_mci_get_next_gpm_offset) },
	{ 0xc57e3562, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0x1aa80d81, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x3f9c8843, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x7c298226, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x9b0c46b, __VMLINUX_SYMBOL_STR(ath9k_hw_puttxbuf) },
	{ 0x18c8dc0b, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x3c877032, __VMLINUX_SYMBOL_STR(ar9003_mci_state) },
	{ 0x6a555b, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_scheme) },
	{ 0x5f7cb389, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0xa989ed3e, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x302ce1b6, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3637be9b, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xde135472, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0x39ade316, __VMLINUX_SYMBOL_STR(ath9k_hw_abortpcurecv) },
	{ 0xd3323d78, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x36e5c954, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x8770a68b, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x1965cfe7, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0x3335face, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tx_filter) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x72c2956a, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x80f353a8, __VMLINUX_SYMBOL_STR(ieee80211_sta_set_buffered) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xc26dc26d, __VMLINUX_SYMBOL_STR(ar9003_mci_get_interrupt) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x8792c25, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xe47a9c9b, __VMLINUX_SYMBOL_STR(ieee80211_send_bar) },
	{ 0xc7e9aaf, __VMLINUX_SYMBOL_STR(ath9k_hw_updatetxtriglevel) },
	{ 0xbe9dcdad, __VMLINUX_SYMBOL_STR(ath_hw_cycle_counters_update) },
	{ 0xf8648627, __VMLINUX_SYMBOL_STR(ar9003_mci_set_bt_version) },
	{ 0x7ab39c9d, __VMLINUX_SYMBOL_STR(ath9k_hw_set_rx_bufsize) },
	{ 0xfb79e4a0, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0xcb791fb4, __VMLINUX_SYMBOL_STR(ar9003_is_paprd_enabled) },
	{ 0xfcf5b186, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x4203e8f1, __VMLINUX_SYMBOL_STR(ar9003_get_pll_sqsum_dvc) },
	{ 0x5790c8da, __VMLINUX_SYMBOL_STR(ar9003_mci_send_message) },
	{ 0x36d0753e, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x9a044b2, __VMLINUX_SYMBOL_STR(ar9003_mci_cleanup) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x6ba03f14, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x33752698, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0x96d3d92b, __VMLINUX_SYMBOL_STR(ath9k_hw_txstart) },
	{ 0xe64b2b26, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0xe2f5057c, __VMLINUX_SYMBOL_STR(ath9k_hw_check_alive) },
	{ 0xa02212d9, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x31380354, __VMLINUX_SYMBOL_STR(getrawmonotonic64) },
	{ 0x5d1c5fb7, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1f7e4e7, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_concur_txprio) },
	{ 0xdfb41fd7, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf084d054, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x4efb5f95, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0xa3f1b7e4, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x606eee82, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x8e70e999, __VMLINUX_SYMBOL_STR(ar9003_mci_setup) },
	{ 0xbdd92345, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0xfd52e267, __VMLINUX_SYMBOL_STR(ieee80211_sta_eosp) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xdc3a2b9d, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0xe9f67304, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xc1ce4f73, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x21275951, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xed150067, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0xd72625cb, __VMLINUX_SYMBOL_STR(ieee80211_parse_p2p_noa) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x36309510, __VMLINUX_SYMBOL_STR(ieee80211_nullfunc_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x381c5a34, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x49b8ba13, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf876730f, __VMLINUX_SYMBOL_STR(ath9k_hw_check_nav) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xa3205354, __VMLINUX_SYMBOL_STR(ath9k_hw_putrxbuf) },
	{ 0x9178e54c, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x5ff951e5, __VMLINUX_SYMBOL_STR(ath_rxbuf_alloc) },
	{ 0x167c833, __VMLINUX_SYMBOL_STR(ar9003_paprd_init_table) },
	{ 0xa88b5133, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x8e9aca36, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0x69c648a9, __VMLINUX_SYMBOL_STR(ath9k_hw_setuprxdesc) },
	{ 0x90deafd3, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xeeb82b29, __VMLINUX_SYMBOL_STR(ath9k_hw_abort_tx_dma) },
	{ 0xafcac976, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0xf3cab56, __VMLINUX_SYMBOL_STR(ieee80211_probereq_get) },
	{ 0x1ee40b25, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x84e5437f, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x78934e6a, __VMLINUX_SYMBOL_STR(ath_gen_timer_alloc) },
	{ 0xeb2e34c, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x42b18b3, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x41ccdaae, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_check) },
	{ 0x67e258e8, __VMLINUX_SYMBOL_STR(ath9k_hw_enable_interrupts) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xa665293e, __VMLINUX_SYMBOL_STR(ath9k_hw_intrpend) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x63071c34, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0xd0f1ee48, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xfc01010b, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x56272df5, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0x77ea65c4, __VMLINUX_SYMBOL_STR(ieee80211_update_p2p_noa) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe5d6fd84, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x97222b5, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txpowerlimit) },
	{ 0x52aae78b, __VMLINUX_SYMBOL_STR(ath9k_hw_stop_dma_queue) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,mac80211,ath9k_common,cfg80211,ath";

MODULE_ALIAS("platform:ath9k");
MODULE_ALIAS("platform:ar933x_wmac");
MODULE_ALIAS("platform:ar934x_wmac");
MODULE_ALIAS("platform:qca955x_wmac");
MODULE_ALIAS("platform:qca953x_wmac");
MODULE_ALIAS("platform:qca956x_wmac");
MODULE_ALIAS("pci:v0000168Cd00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A3Bsd00001C71bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000105Bsd0000E01Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A32sd00000306bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000185Fsd0000309Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd00001536bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv00001A3Bsd00002C37bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002086bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001237bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002126bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd0000126Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002152bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E075bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003122bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004105bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004106bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C706bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C680bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C708bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003218bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003219bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002C97bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002100bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001C56sd00004001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006627bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006628bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Fsd00007197bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001186bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F86bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001195bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F95bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C00bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C01bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001043sd0000850Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002116bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006661bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000168Csd00003117bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000017AAsd00003214bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001969sd00000091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002110bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001043sd0000850Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006631bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006641bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000103Csd00001864bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000063bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000064bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000010CFsd00001783bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002003bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002176bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E068bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006B2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000842bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00001842bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00006671bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002811bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002812bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A1bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002F8Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003025bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E069bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000622bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000672bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000662bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000682bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd000018E3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd0000217Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd00002005bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd00004129bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000412Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000652bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000612bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000832bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00001832bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000692bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000803bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000813bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002130bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002182bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002F82bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Fsd00007202bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002810bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002813bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A4bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A120bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E07Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E08Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E081bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E099bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00004026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001043sd000085F2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "01ED929B61B4EFC3FA9F3C0");
