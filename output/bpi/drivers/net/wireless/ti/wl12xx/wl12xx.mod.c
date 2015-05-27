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
	{ 0xe59e1274, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_nvs) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0x793d2a0a, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0x7f63e93f, __VMLINUX_SYMBOL_STR(wl1271_acx_init_mem_config) },
	{ 0x6a35da20, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xf982d4b2, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x72b2c3c6, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc45ea68a, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0x3666525e, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0xf919e5b7, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0x633e422b, __VMLINUX_SYMBOL_STR(wl1271_acx_pm_config) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0x7f84cb56, __VMLINUX_SYMBOL_STR(wlcore_calc_packet_alignment) },
	{ 0xaa80bce4, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xf755311b, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0x54bc0491, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0xb9228a85, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2e01a8ce, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x3a55577, __VMLINUX_SYMBOL_STR(wl1271_acx_set_ht_capabilities) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4f3f5caf, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x3bb140bf, __VMLINUX_SYMBOL_STR(wl1271_cmd_data_path) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x58e19505, __VMLINUX_SYMBOL_STR(wl12xx_acx_mem_cfg) },
	{ 0x83130f62, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x49b19e33, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0x1301261, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0x791f15ff, __VMLINUX_SYMBOL_STR(wl1271_acx_sleep_auth) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5772ac3b, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0x42f62c09, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0x9e96b086, __VMLINUX_SYMBOL_STR(wl1271_cmd_test) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xdcddd285, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x1aa80d81, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x4646c28e, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xc56bf2ce, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0x5178f590, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0x4e824e7a, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0x9aed6bc5, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0xd05e8390, __VMLINUX_SYMBOL_STR(wlcore_event_soft_gemini_sense) },
	{ 0x8a6c5aab, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x95db28d0, __VMLINUX_SYMBOL_STR(wlcore_tx_complete) },
	{ 0x91da5146, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2022a22c, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0x67f9f440, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0xfc022bf7, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x14bedef2, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa8856e72, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x42b457f7, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x3b36cfe6, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0xb926a413, __VMLINUX_SYMBOL_STR(wl1271_tx_min_rate_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211";

MODULE_ALIAS("platform:wl12xx");

MODULE_INFO(srcversion, "AE8286E0616B4789F69C3AD");
