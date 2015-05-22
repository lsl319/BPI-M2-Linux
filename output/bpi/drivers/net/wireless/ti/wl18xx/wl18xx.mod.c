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
	{ 0xee347b95, __VMLINUX_SYMBOL_STR(wl12xx_cmd_build_probe_req) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x895168d6, __VMLINUX_SYMBOL_STR(wl1271_ps_elp_wakeup) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0x793d2a0a, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x6a35da20, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xf982d4b2, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x72b2c3c6, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xc45ea68a, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0x3666525e, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0xf919e5b7, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0x5f3e5daf, __VMLINUX_SYMBOL_STR(ieee80211_radar_detected) },
	{ 0xaa80bce4, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xf755311b, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0x54bc0491, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb9228a85, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2e01a8ce, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x77092dcc, __VMLINUX_SYMBOL_STR(wlcore_get_native_channel_type) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4f3f5caf, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x83130f62, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xc377a64d, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x49b19e33, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0x1301261, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5772ac3b, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x42f62c09, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0x22a5efae, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4567c226, __VMLINUX_SYMBOL_STR(wl1271_ps_elp_sleep) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xdcddd285, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x1aa80d81, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x57b15a1e, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x922124ef, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x4646c28e, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5a5a73c8, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xc56bf2ce, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5178f590, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0xea07ec7, __VMLINUX_SYMBOL_STR(kstrtou8_from_user) },
	{ 0x4e824e7a, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0x686b945f, __VMLINUX_SYMBOL_STR(wl1271_free_tx_id) },
	{ 0x9aed6bc5, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0xac7ceb61, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x8a6c5aab, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x91da5146, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2022a22c, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0x67f9f440, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0xdfcc44b7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xfc022bf7, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x14bedef2, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa8856e72, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x42b457f7, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xbddfa01c, __VMLINUX_SYMBOL_STR(wl12xx_is_dummy_packet) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x3b36cfe6, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0xd0f1ee48, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xb7a8461b, __VMLINUX_SYMBOL_STR(ieee80211_connection_loss) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211,cfg80211";

MODULE_ALIAS("platform:wl18xx");

MODULE_INFO(srcversion, "AFE10276F3EC8DA3E96BE97");
