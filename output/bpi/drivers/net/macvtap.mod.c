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
	{ 0x27f90f08, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x86c06416, __VMLINUX_SYMBOL_STR(new_sync_write) },
	{ 0x96cfd810, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xa9428540, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xfbd6bd4d, __VMLINUX_SYMBOL_STR(iov_iter_npages) },
	{ 0xb86a214e, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0xe77f7185, __VMLINUX_SYMBOL_STR(macvlan_dellink) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xbd1f20d1, __VMLINUX_SYMBOL_STR(__skb_flow_dissect) },
	{ 0xe68fd0da, __VMLINUX_SYMBOL_STR(skb_copy_datagram_from_iter) },
	{ 0x6936ec07, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xc5dd40a0, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x7938185f, __VMLINUX_SYMBOL_STR(macvlan_common_newlink) },
	{ 0x6d20d905, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x9d57f314, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x3c81da9f, __VMLINUX_SYMBOL_STR(sock_alloc_send_pskb) },
	{ 0xaf3343e8, __VMLINUX_SYMBOL_STR(macvlan_link_register) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xffd44bb8, __VMLINUX_SYMBOL_STR(skb_partial_csum_set) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe61930e3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xc73fff77, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x4299966a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x26b0582d, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfe8d1407, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xf38128ca, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x3301d6a6, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xa1f6d8c9, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x6902e629, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x922124ef, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xec5fb8cc, __VMLINUX_SYMBOL_STR(macvlan_common_setup) },
	{ 0xecb1f9d2, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x662e7251, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xc1ab82ff, __VMLINUX_SYMBOL_STR(new_sync_read) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x66f594c0, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0xb9acd3d9, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xf91a7566, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x753ca2f0, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x95dbe078, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xd9648a1a, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xa92e5590, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x33a620d7, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xfafd8f8c, __VMLINUX_SYMBOL_STR(zerocopy_sg_from_iter) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "66D37D288CA76D8CB89F207");
