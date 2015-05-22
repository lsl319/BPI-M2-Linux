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
	{ 0x3ed9088d, __VMLINUX_SYMBOL_STR(dev_mc_sync_multiple) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xf47dd479, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x17ea6e7d, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xa7d59f8b, __VMLINUX_SYMBOL_STR(dev_disable_lro) },
	{ 0x7e5c5f7a, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x6936ec07, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0x841ea967, __VMLINUX_SYMBOL_STR(vlan_uses_dev) },
	{ 0x5dac7e96, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xfb1e3b48, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x8afcf5eb, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x97405e6b, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x3e82303, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xd94e5224, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0x7c16914f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4a8907de, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa80c97c3, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0xa3302acf, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0x5f572074, __VMLINUX_SYMBOL_STR(vlan_vids_del_by_dev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xaadc0acb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x30413454, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe256da74, __VMLINUX_SYMBOL_STR(vlan_vids_add_by_dev) },
	{ 0xe00c8b15, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_link) },
	{ 0x2767b434, __VMLINUX_SYMBOL_STR(netdev_change_features) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa07d13e4, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xed4c250d, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x40505663, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0x2877cb3a, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x22a5efae, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x658a1360, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfb4182e, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x75a61c2e, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xf4f14de6, __VMLINUX_SYMBOL_STR(rtnl_trylock) },
	{ 0x284b5ac4, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x5fd246c2, __VMLINUX_SYMBOL_STR(dev_mc_flush) },
	{ 0xa1f6d8c9, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xd3238a0, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0xb190bfc, __VMLINUX_SYMBOL_STR(dev_uc_flush) },
	{ 0x834d3d3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x36e5c954, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xec136ac5, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x579fbcd2, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xecb1f9d2, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7862114f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x7f197567, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xc2e79c5f, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x87f32fc0, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x70462867, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd7bb1530, __VMLINUX_SYMBOL_STR(dev_uc_sync_multiple) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa1c36650, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x7288adf, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa92e5590, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xa3911b87, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
	{ 0x2c07258a, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xfe99a94d, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "67060D028D9DB84A56EC629");
