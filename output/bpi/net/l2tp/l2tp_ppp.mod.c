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
	{ 0xc95538d0, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x2bdf1b04, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xe61404da, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xdd420895, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0xc1347d03, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x1b5b3082, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xc5cf098a, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xfffb82f5, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xe23c8d61, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0xc5744afc, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7f2a1be4, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x1534dc11, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xdb5f9e2c, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x29209c32, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0xb22d1369, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xe715f622, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xc01452a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x756612cd, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x58d8f1a0, __VMLINUX_SYMBOL_STR(l2tp_session_set_header_len) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x276ae45e, __VMLINUX_SYMBOL_STR(l2tp_session_find_nth) },
	{ 0xc386150b, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0xc1de5bf7, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x28e08a97, __VMLINUX_SYMBOL_STR(ppp_dev_name) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x144e230d, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe2c603fb, __VMLINUX_SYMBOL_STR(l2tp_udp_encap_recv) },
	{ 0xe61930e3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x65764ebe, __VMLINUX_SYMBOL_STR(l2tp_session_queue_purge) },
	{ 0xa00fe52d, __VMLINUX_SYMBOL_STR(__l2tp_session_unhash) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xe6c232d2, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0xea736801, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0xd14d525, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xd7c52fc8, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9f4e1b52, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0x5c1af6ce, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0x3090588e, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0xb4b48f0b, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xe2afe35a, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x655e8f0f, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x6cec3f2f, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6ba03f14, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x8c8fcbbc, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0x6d20d905, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2523eb3b, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4299966a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x5ef40e11, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x96cfd810, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xc73fff77, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xa78309e, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xfe8d1407, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x176c0151, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1cc034b, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0x3def72ab, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x40f3cd8a, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,l2tp_core,ppp_generic";


MODULE_INFO(srcversion, "DDD393AC7999EE1498D55E5");
