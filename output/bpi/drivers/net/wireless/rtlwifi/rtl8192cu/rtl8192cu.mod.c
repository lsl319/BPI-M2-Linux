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
	{ 0x33c8a771, __VMLINUX_SYMBOL_STR(rtl_cam_delete_one_entry) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc9078fe2, __VMLINUX_SYMBOL_STR(rtl_fw_cb) },
	{ 0x1efe3868, __VMLINUX_SYMBOL_STR(rtl_cam_get_free_entry) },
	{ 0xe547fff3, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_rfpath_switch) },
	{ 0x32082585, __VMLINUX_SYMBOL_STR(rtl_usb_disconnect) },
	{ 0x20c690eb, __VMLINUX_SYMBOL_STR(_rtl92c_phy_fw_rf_serial_read) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x878bbad3, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_txpower_level) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf7d29b26, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_rsvdpagepkt) },
	{ 0xcfec6a4, __VMLINUX_SYMBOL_STR(rtl92c_dm_check_txpower_tracking) },
	{ 0x5c8da148, __VMLINUX_SYMBOL_STR(rtl_ps_disable_nic) },
	{ 0xfa68bec1, __VMLINUX_SYMBOL_STR(rtl92c_dm_watchdog) },
	{ 0xbc74af3f, __VMLINUX_SYMBOL_STR(_rtl92c_phy_init_bb_rf_register_definition) },
	{ 0x9f8a723d, __VMLINUX_SYMBOL_STR(_rtl92c_phy_rf_serial_write) },
	{ 0xd16ccb39, __VMLINUX_SYMBOL_STR(rtl_get_tcb_desc) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x8aa6f971, __VMLINUX_SYMBOL_STR(_rtl92c_phy_rf_serial_read) },
	{ 0xe0c22910, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_bw_mode) },
	{ 0x791e58b3, __VMLINUX_SYMBOL_STR(rtl92c_phy_lc_calibrate) },
	{ 0xb3314d48, __VMLINUX_SYMBOL_STR(_rtl92c_phy_calculate_bit_shift) },
	{ 0x3f1692b6, __VMLINUX_SYMBOL_STR(rtl_efuse_shadow_map_update) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2fc6d0f8, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5d4410f2, __VMLINUX_SYMBOL_STR(rtl_phy_scan_operation_backup) },
	{ 0x859c2ac, __VMLINUX_SYMBOL_STR(rtl92c_dm_init_edca_turbo) },
	{ 0xc0be5cb3, __VMLINUX_SYMBOL_STR(rtl92c_phy_iq_calibrate) },
	{ 0x36d8a848, __VMLINUX_SYMBOL_STR(rtl92c_dm_init) },
	{ 0xdfd7bc80, __VMLINUX_SYMBOL_STR(rtl_usb_probe) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x6429dd0e, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_bb_reg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc3b12f28, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6d613524, __VMLINUX_SYMBOL_STR(rtl92c_dm_rf_saving) },
	{ 0x5369b3ea, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_pwrmode_cmd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2a280b21, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0xf233cff4, __VMLINUX_SYMBOL_STR(dm_writepowerindex) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb4f3587d, __VMLINUX_SYMBOL_STR(_rtl92c_phy_fw_rf_serial_write) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x1671d73f, __VMLINUX_SYMBOL_STR(_rtl92c_phy_set_rf_sleep) },
	{ 0x29edba3, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x23f4b97, __VMLINUX_SYMBOL_STR(rtlwifi_rate_mapping) },
	{ 0x9c24a6, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_joinbss_report_cmd) },
	{ 0xc2ca7b24, __VMLINUX_SYMBOL_STR(rtl92c_download_fw) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x30af07b6, __VMLINUX_SYMBOL_STR(rtl_rfreg_delay) },
	{ 0x7e1641e8, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_io_cmd) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfcf5b186, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x42fb3193, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0x1ba7446, __VMLINUX_SYMBOL_STR(rtl92c_phy_rf_config) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x38d068cf, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0xca98fdb6, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0x80797c94, __VMLINUX_SYMBOL_STR(rtl92ce_phy_set_rf_on) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x289951e6, __VMLINUX_SYMBOL_STR(rtl92c_phy_query_bb_reg) },
	{ 0x4460f0a2, __VMLINUX_SYMBOL_STR(_rtl92c_store_pwrIndex_diffrate_offset) },
	{ 0x753ca2f0, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x125c3f32, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x59081ae4, __VMLINUX_SYMBOL_STR(rtl_process_phyinfo) },
	{ 0xb84ccfca, __VMLINUX_SYMBOL_STR(dm_restorepowerindex) },
	{ 0xa7356c5e, __VMLINUX_SYMBOL_STR(efuse_read_1byte) },
	{ 0xa533c778, __VMLINUX_SYMBOL_STR(_rtl92c_phy_bb8192c_config_parafile) },
	{ 0x303edd67, __VMLINUX_SYMBOL_STR(rtl92c_fill_h2c_cmd) },
	{ 0x6d0e05d9, __VMLINUX_SYMBOL_STR(rtl92c_phy_sw_chnl) },
	{ 0x980848e2, __VMLINUX_SYMBOL_STR(rtl_addr_delay) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl8192c-common,rtl_usb,mac80211";

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp819Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CE95DE6C9C2805BBE018E40");
