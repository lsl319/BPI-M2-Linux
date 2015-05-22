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
	{ 0x2dd36c1b, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x75abf89f, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
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
	{ 0x68c8855f, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x1534dc11, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xdb5f9e2c, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xf5639ad0, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x29209c32, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0xb22d1369, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xe715f622, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xc1de5bf7, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x144e230d, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd7c52fc8, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0xd14d525, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xe61930e3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x6ba03f14, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x3090588e, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0xdf66e460, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa92e5590, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x6d20d905, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2523eb3b, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x4299966a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x5ef40e11, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x96cfd810, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xc73fff77, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x73c1a502, __VMLINUX_SYMBOL_STR(dev_get_by_name_rcu) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xe6c232d2, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0xb4b48f0b, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x6cec3f2f, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xfe8d1407, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x3d41d930, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xc01452a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x39a0c67e, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5e687e5e, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfb1e3b48, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x176c0151, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x3def72ab, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x40f3cd8a, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,ppp_generic";


MODULE_INFO(srcversion, "6F443256074EF1F0E7980E0");
