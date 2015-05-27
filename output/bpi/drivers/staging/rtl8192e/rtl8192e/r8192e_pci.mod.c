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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6cec1955, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xffce48be, __VMLINUX_SYMBOL_STR(HT_update_self_and_peer_setting) },
	{ 0x76284c27, __VMLINUX_SYMBOL_STR(rtllib_wx_set_rawtx) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe811f215, __VMLINUX_SYMBOL_STR(rtllib_wpa_supplicant_ioctl) },
	{ 0xadf42bd5, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xf47dd479, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x10f8f435, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x1f6bfcaf, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xedfdf177, __VMLINUX_SYMBOL_STR(rtllib_start_scan_syncro) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x88b703ab, __VMLINUX_SYMBOL_STR(rtllib_stop_scan_syncro) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x2faa2bb5, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x18fef9cb, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0xc762d44f, __VMLINUX_SYMBOL_STR(rtllib_wx_set_auth) },
	{ 0x8adfaf37, __VMLINUX_SYMBOL_STR(rtllib_wx_set_mlme) },
	{ 0x3aad0feb, __VMLINUX_SYMBOL_STR(rtllib_wx_get_essid) },
	{ 0x8e50529f, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x897abb61, __VMLINUX_SYMBOL_STR(rtllib_ps_tx_ack) },
	{ 0x51d330cb, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x5dac7e96, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xbdae27db, __VMLINUX_SYMBOL_STR(rtllib_wx_set_power) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x6e4131ea, __VMLINUX_SYMBOL_STR(dot11d_init) },
	{ 0xc9adc23f, __VMLINUX_SYMBOL_STR(rtllib_wx_set_rate) },
	{ 0x8afcf5eb, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x59b99d29, __VMLINUX_SYMBOL_STR(rtllib_wx_get_encode) },
	{ 0x7c16914f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xeb859cf2, __VMLINUX_SYMBOL_STR(rtllib_sta_ps_send_null_frame) },
	{ 0xbe1420f2, __VMLINUX_SYMBOL_STR(rt_global_debug_component) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7bdea168, __VMLINUX_SYMBOL_STR(rtllib_wx_set_wap) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x30413454, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x638c2544, __VMLINUX_SYMBOL_STR(rtllib_DisableIntelPromiscuousMode) },
	{ 0x171c10dc, __VMLINUX_SYMBOL_STR(rtllib_wx_set_scan) },
	{ 0x2f8865a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa6d601dd, __VMLINUX_SYMBOL_STR(rtllib_wx_get_freq) },
	{ 0x8e2088ae, __VMLINUX_SYMBOL_STR(rtllib_xmit) },
	{ 0xaa901a4a, __VMLINUX_SYMBOL_STR(rtllib_wx_get_wap) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x990ba3ca, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe61930e3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x46afdab1, __VMLINUX_SYMBOL_STR(rtllib_wx_get_power) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9c636479, __VMLINUX_SYMBOL_STR(rtllib_wx_get_name) },
	{ 0x73670e82, __VMLINUX_SYMBOL_STR(rtllib_wx_set_freq) },
	{ 0x83130f62, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x91ce949, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xed5afd60, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x1c1ccd60, __VMLINUX_SYMBOL_STR(rtllib_wx_get_rate) },
	{ 0x2d833725, __VMLINUX_SYMBOL_STR(xen_dma_ops) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xc1acf281, __VMLINUX_SYMBOL_STR(rtllib_wx_set_essid) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x7487f46b, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdd82d8be, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xcdfebe6a, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc2eb2f4d, __VMLINUX_SYMBOL_STR(rtllib_wx_set_mode) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xd9605d4c, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xf4251492, __VMLINUX_SYMBOL_STR(rtllib_wx_set_encode) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x447deff1, __VMLINUX_SYMBOL_STR(rtllib_act_scanning) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x85d84005, __VMLINUX_SYMBOL_STR(rtllib_stop_send_beacons) },
	{ 0x52d87fe6, __VMLINUX_SYMBOL_STR(rtllib_wx_set_rts) },
	{ 0x8396c4c4, __VMLINUX_SYMBOL_STR(rtllib_wx_get_rts) },
	{ 0xc2d8352e, __VMLINUX_SYMBOL_STR(rtllib_legal_channel) },
	{ 0x922124ef, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xf1f2f3c4, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x9e11b861, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xcdd544d4, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xbda0620, __VMLINUX_SYMBOL_STR(RemovePeerTS) },
	{ 0x8770a68b, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x175a2012, __VMLINUX_SYMBOL_STR(rtllib_wx_get_mode) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0xb2f68fd, __VMLINUX_SYMBOL_STR(rtllib_rx) },
	{ 0xa94cd0f9, __VMLINUX_SYMBOL_STR(alloc_rtllib) },
	{ 0xdf78f620, __VMLINUX_SYMBOL_STR(rtllib_wlan_frequencies) },
	{ 0x9bce482f, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xa02212d9, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xeaa4540e, __VMLINUX_SYMBOL_STR(rtllib_reset_queue) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd4c5f72, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xe9f67304, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x2497111, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xa220c70, __VMLINUX_SYMBOL_STR(rtllib_MgntDisconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x85e8b8ac, __VMLINUX_SYMBOL_STR(Dot11d_Channelmap) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa3a69a, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0xa351a8db, __VMLINUX_SYMBOL_STR(rtllib_softmac_start_protocol) },
	{ 0xadf389ed, __VMLINUX_SYMBOL_STR(rtllib_wx_set_encode_ext) },
	{ 0x3ad97e3c, __VMLINUX_SYMBOL_STR(rtllib_stop_scan) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0x9178e54c, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x764fafea, __VMLINUX_SYMBOL_STR(rtllib_get_beacon) },
	{ 0x6939f8fb, __VMLINUX_SYMBOL_STR(rtllib_softmac_stop_protocol) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xa88b5133, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xdfcc44b7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x753ca2f0, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0x27b62b90, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3b0b6930, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6b3871df, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x23ddf27d, __VMLINUX_SYMBOL_STR(rtllib_wx_set_gen_ie) },
	{ 0xd0f1ee48, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x56272df5, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0x550669b7, __VMLINUX_SYMBOL_STR(notify_wx_assoc_event) },
	{ 0xc2ad1f83, __VMLINUX_SYMBOL_STR(rtllib_wx_get_scan) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x4c121e54, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x6fc8842, __VMLINUX_SYMBOL_STR(rtllib_start_send_beacons) },
	{ 0xfe001f93, __VMLINUX_SYMBOL_STR(rtllib_EnableIntelPromiscuousMode) },
	{ 0x5ed94c37, __VMLINUX_SYMBOL_STR(free_rtllib) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtllib";

MODULE_ALIAS("pci:v000010ECd00008192sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000007AAd00000044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000007AAd00000047sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C81C7B90CAA85AB587890BF");
