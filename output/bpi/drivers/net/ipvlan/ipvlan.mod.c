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
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xecf5872d, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x17ea6e7d, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x87ee370c, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x6936ec07, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xe2afe35a, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xfb1e3b48, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x97405e6b, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x3e82303, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xa3302acf, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x22021987, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xc01452a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xed4c250d, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x40505663, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0x2877cb3a, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x22a5efae, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x658a1360, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x799e957d, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xa1f6d8c9, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xa669175, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xd27c5926, __VMLINUX_SYMBOL_STR(ip6_route_output) },
	{ 0x1fe99fc3, __VMLINUX_SYMBOL_STR(ip_local_out_sk) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x653e4f36, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x579fbcd2, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xecb1f9d2, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0xf19e539f, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x31805f80, __VMLINUX_SYMBOL_STR(__net_get_random_once) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x8fc4719e, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0x7862114f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xfabe1156, __VMLINUX_SYMBOL_STR(netdev_features_change) },
	{ 0x7f197567, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xc2e79c5f, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xf5038a47, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x4f7d2512, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xb04f0d96, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0x7288adf, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x97afcfc9, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x7bd62d1e, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8e302e85, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xa92e5590, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xe707071d, __VMLINUX_SYMBOL_STR(eth_rebuild_header) },
	{ 0x15f4e40b, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "80AA708612BF24DDFAB748B");
