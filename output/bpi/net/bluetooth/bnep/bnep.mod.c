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
	{ 0x96cfd810, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x9c9c932b, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xe99a4fa2, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x137f070, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x75abf89f, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x2dd36c1b, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x51d330cb, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x740710d, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x96d25e50, __VMLINUX_SYMBOL_STR(bt_sock_register) },
	{ 0xb1abb1bb, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xfd9867bc, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd26dd355, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0xc01452a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xc95538d0, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfb200235, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0x553efc46, __VMLINUX_SYMBOL_STR(bt_sock_unlink) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd2606db9, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xc5cf098a, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x91ce949, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xc73fff77, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xcabc6a68, __VMLINUX_SYMBOL_STR(l2cap_is_socket) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfffb82f5, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcc1fb551, __VMLINUX_SYMBOL_STR(baswap) },
	{ 0x2877cb3a, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x7487f46b, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xe61404da, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1b5b3082, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xfe8d1407, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x8fea24bd, __VMLINUX_SYMBOL_STR(bt_sock_unregister) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe9e2e456, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xad8a5656, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x5e11492d, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xc6254981, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x2bdf1b04, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x63bbe9a5, __VMLINUX_SYMBOL_STR(bt_sock_link) },
	{ 0x834d3d3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x922124ef, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xb22d1369, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x36e5c954, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xdb5f9e2c, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x17999ed4, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x69cd5a4, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xcafc5cf6, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0xe7048bb0, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x7f197567, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xc57ff866, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x81e5f806, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x2497111, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x76d9bf11, __VMLINUX_SYMBOL_STR(crc32_be) },
	{ 0x147f44d, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0xff45dab9, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x4cd900ee, __VMLINUX_SYMBOL_STR(bt_procfs_init) },
	{ 0x753ca2f0, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x27b62b90, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xcfe0fb7f, __VMLINUX_SYMBOL_STR(bt_procfs_cleanup) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "C2A6088329732260337E6B5");
