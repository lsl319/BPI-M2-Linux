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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf47dd479, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7e9efe8e, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcca27eeb, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x1dae2053, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x5dac7e96, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xfb1e3b48, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x8afcf5eb, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x7c16914f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb1abb1bb, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb71871f6, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x2f8865a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x22021987, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe61930e3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x91ce949, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x76f6c5ef, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2877cb3a, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x7487f46b, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x430bca5a, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0x249ae52, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf6770391, __VMLINUX_SYMBOL_STR(mac_pton) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xd18fd63e, __VMLINUX_SYMBOL_STR(kill_pid) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x29edba3, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x922124ef, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xf1f2f3c4, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x9e11b861, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x1811616a, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x19f9551a, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xeb4ed746, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x69cd5a4, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xe7048bb0, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x7862114f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x87f32fc0, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xa3a69a, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x753ca2f0, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x27b62b90, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf829286a, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xd0f1ee48, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe449ea4d, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8171d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8173d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8713d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDApC512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1786d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1791d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp945Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0047d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9603d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0167d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB28d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED16d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0059d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0063d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0154d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0752d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p646Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApC512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v25D4p4CA1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v25D4p4CABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8172d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8192d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3342d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3333d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3334d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3335d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3336d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp815Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED18d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0049d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p004Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3339d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3340d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3341d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3325d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8174d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp845Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p02B6d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "57ACA8FBADFD2B9F168DB37");
