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
	{ 0xfb200235, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0x147f44d, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0x2dd36c1b, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x75abf89f, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x2bdf1b04, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xe61404da, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xdd420895, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0xfd9867bc, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x1b5b3082, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xc5cf098a, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x3de315ba, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0xdb5f9e2c, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x29209c32, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0xb22d1369, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xa5369a87, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xd7c52fc8, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0xd14d525, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xe61930e3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xfe8d1407, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xe6c232d2, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71a6c8d1, __VMLINUX_SYMBOL_STR(ppp_register_channel) },
	{ 0x7f8e6f62, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0x2deda4a1, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0xb4b48f0b, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x6cec3f2f, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0xa057aba3, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x1fe99fc3, __VMLINUX_SYMBOL_STR(ip_local_out_sk) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0x9272dff0, __VMLINUX_SYMBOL_STR(__ip_select_ident) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x4f3a6faf, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x4f7d2512, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x96cfd810, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xc73fff77, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xc01452a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xe2afe35a, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x39a0c67e, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,gre,ppp_generic";


MODULE_INFO(srcversion, "AB59DA57899B648A030EB6F");
