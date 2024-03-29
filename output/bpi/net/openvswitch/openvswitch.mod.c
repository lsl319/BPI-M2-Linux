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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd611cde5, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xb826c628, __VMLINUX_SYMBOL_STR(genlmsg_new_unicast) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x367ba856, __VMLINUX_SYMBOL_STR(__crc32c_le_shift) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe715f622, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xb86a214e, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0xef30086d, __VMLINUX_SYMBOL_STR(netlink_has_listeners) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x7e5c5f7a, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x6936ec07, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xe2afe35a, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xfb1e3b48, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xdf66e460, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x9a8ce65c, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xcd61e007, __VMLINUX_SYMBOL_STR(skb_zerocopy) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x7c16914f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x62fe5560, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8cd57427, __VMLINUX_SYMBOL_STR(__skb_checksum) },
	{ 0xa80c97c3, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0xe2f6a0af, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x41e72320, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x30413454, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xb3d789b5, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace16) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9baf6acc, __VMLINUX_SYMBOL_STR(skb_zerocopy_headlen) },
	{ 0xe00c8b15, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_link) },
	{ 0x2f8865a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x22021987, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x6901abf0, __VMLINUX_SYMBOL_STR(skb_vlan_push) },
	{ 0xc01452a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6d2fc5a6, __VMLINUX_SYMBOL_STR(net_namespace_list) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xed4c250d, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x1534dc11, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x9e763530, __VMLINUX_SYMBOL_STR(reciprocal_value) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0xdcfaa5a1, __VMLINUX_SYMBOL_STR(__skb_warn_lro_forwarding) },
	{ 0x2877cb3a, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x87069b08, __VMLINUX_SYMBOL_STR(skb_ensure_writable) },
	{ 0x22a5efae, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x658a1360, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x75667d3a, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd3b4e2ad, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x284b5ac4, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x3301d6a6, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xa1f6d8c9, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xa37e78b6, __VMLINUX_SYMBOL_STR(flex_array_get) },
	{ 0x9b6eb137, __VMLINUX_SYMBOL_STR(ksize) },
	{ 0x834d3d3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xea736801, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x3ed4282a, __VMLINUX_SYMBOL_STR(skb_vlan_pop) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x36e5c954, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xb7f07341, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xec136ac5, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x579fbcd2, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xecb1f9d2, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x662e7251, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x17999ed4, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x69cd5a4, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x6ba03f14, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x7f197567, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x203d8eb5, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xf5038a47, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x4f7d2512, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x4f798371, __VMLINUX_SYMBOL_STR(netlink_set_err) },
	{ 0x7a4b576, __VMLINUX_SYMBOL_STR(flex_array_free) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x70462867, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xa1c36650, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x7288adf, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x13315729, __VMLINUX_SYMBOL_STR(flex_array_alloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4d4ed90, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x5e515be6, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0xa92e5590, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xa7bc530c, __VMLINUX_SYMBOL_STR(genl_notify) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf784f95b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x2c07258a, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xd4c036be, __VMLINUX_SYMBOL_STR(__nla_put) },
	{ 0x9fd7cda1, __VMLINUX_SYMBOL_STR(flex_array_prealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcrc32c";


MODULE_INFO(srcversion, "C6067C84BE8DB8273B4B34F");
