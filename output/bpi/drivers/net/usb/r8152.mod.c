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
	{ 0xed4c250d, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x2497111, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xec19f928, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x5dac7e96, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x99bbca9, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xc01452a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x91ce949, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x662e7251, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x6ba03f14, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0xb86a214e, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x60bdc354, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_async) },
	{ 0x2a99ad1f, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xb6d90f99, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x7c16914f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xf829286a, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x2f8865a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x69cd5a4, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x53d0b3bb, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xf1f2f3c4, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6827fdaa, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x632780, __VMLINUX_SYMBOL_STR(work_busy) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc7a8ba2c, __VMLINUX_SYMBOL_STR(usb_driver_set_configuration) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x7487f46b, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x60cd52f9, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe449ea4d, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x19f9551a, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x44e00d39, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_async) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8afcf5eb, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x66152e33, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x1c9b9056, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x922124ef, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x85155a9d, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf47dd479, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x9e11b861, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x7862114f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x51d330cb, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x87f32fc0, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x66d793ed, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xf932a5b0, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7f9867d6, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xe79aa2e9, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf46000af, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x2877cb3a, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x27b62b90, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x20387ea3, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4a8907de, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xd094b7a2, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x249ae52, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "EF4094F01F6435D84622601");
