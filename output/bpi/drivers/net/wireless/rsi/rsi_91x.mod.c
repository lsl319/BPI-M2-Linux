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
	{ 0x819d26b, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7e9efe8e, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0xf982d4b2, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x7ad95aef, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc1de5bf7, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xe4dcdd24, __VMLINUX_SYMBOL_STR(ieee80211_cqm_rssi_notify) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x144e230d, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x80fe9d2c, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2e01a8ce, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xb0f1d512, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xc5744afc, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xb1abb1bb, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa296ca8b, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x2f8865a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x70c5de9a, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe61930e3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xc264ef6f, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xce58a9b7, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x18dd0792, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x310917fe, __VMLINUX_SYMBOL_STR(sort) },
	{ 0xa989ed3e, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x922124ef, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x973d0f9e, __VMLINUX_SYMBOL_STR(kstrtoul_from_user) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x95584648, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xe7048bb0, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xf084d054, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x81072811, __VMLINUX_SYMBOL_STR(ieee80211_generic_frame_duration) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x21275951, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x7f2a1be4, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa1baa29, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0x1ee40b25, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x753ca2f0, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xfc01010b, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xe15e73fb, __VMLINUX_SYMBOL_STR(ieee80211_queue_stopped) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


MODULE_INFO(srcversion, "EF8746CEFA692BB92C334D9");
