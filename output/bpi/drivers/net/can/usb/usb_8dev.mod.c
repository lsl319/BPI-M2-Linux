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
	{ 0xa5e00fc6, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xe02aa551, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0x990f8e7e, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x22021987, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xe5cf0370, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xd27258dd, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4da6f35c, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd4ee9c98, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xcd957728, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4dc5a4fb, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3d49972d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91ce949, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xc7b7334b, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x9e11b861, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x26d1c315, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x39036827, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7862114f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x5b3364e1, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x8f84ba74, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x87f32fc0, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x2f7cbd82, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfe783f31, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x6167fc32, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0x27b62b90, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf47dd479, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0483p1234d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FF570C184A498FCD37D6786");
