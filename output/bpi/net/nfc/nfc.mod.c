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
	{ 0x720084e, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd6c100f, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0xb4b48f0b, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x96cfd810, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcca27eeb, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7e5c5f7a, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x75abf89f, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x2dd36c1b, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xc17cf7c5, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xfb1e3b48, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc237195b, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x6d20d905, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x740710d, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xd14d525, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x5ef40e11, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcbee6439, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xa80c97c3, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x4cabed9, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x88a5249a, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0x30413454, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xc95538d0, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe61930e3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xc5cf098a, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x99cea35b, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0xbff5ee92, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xc73fff77, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x23e2d14f, __VMLINUX_SYMBOL_STR(class_dev_iter_init) },
	{ 0xdcd56eaa, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0x4299966a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfffb82f5, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x6cec3f2f, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x26b0582d, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x29e1b020, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x22a5efae, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xe61404da, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x1b5b3082, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xfe8d1407, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x284b5ac4, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xae5a15d7, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xad8a5656, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x84609a19, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x87e7a6ab, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x2bdf1b04, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x9b927fd, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x834d3d3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x922124ef, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xb22d1369, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x36e5c954, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xec136ac5, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xa2d21ead, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xc1347d03, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xb1e604f8, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xdb5f9e2c, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xf1259018, __VMLINUX_SYMBOL_STR(class_dev_iter_exit) },
	{ 0x38ce4e48, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xc8c7d46d, __VMLINUX_SYMBOL_STR(__pskb_copy_fclone) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x81e5f806, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa1c36650, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x147f44d, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0x6cdc5c6b, __VMLINUX_SYMBOL_STR(nla_strlcpy) },
	{ 0xa3a03169, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xa414882d, __VMLINUX_SYMBOL_STR(add_wait_queue_exclusive) },
	{ 0xc0763484, __VMLINUX_SYMBOL_STR(rfkill_blocked) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x753ca2f0, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x653e4302, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0x2c07258a, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x3f49d1d7, __VMLINUX_SYMBOL_STR(class_dev_iter_next) },
	{ 0xe2dfdf58, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xda10ec3, __VMLINUX_SYMBOL_STR(security_sock_graft) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AC3173F304719B956CF9713");