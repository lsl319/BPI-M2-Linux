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
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf6618aa3, __VMLINUX_SYMBOL_STR(mwifiex_cancel_hs) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x7c16914f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xd0da1a8d, __VMLINUX_SYMBOL_STR(mwifiex_write_data_complete) },
	{ 0x40b59e2, __VMLINUX_SYMBOL_STR(mwifiex_process_sleep_confirm_resp) },
	{ 0x30413454, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2f8865a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xb039ee3d, __VMLINUX_SYMBOL_STR(mwifiex_add_card) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xcabb5e60, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x922124ef, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x1811616a, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x19f9551a, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x3d49972d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xeb4ed746, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x65c77f7c, __VMLINUX_SYMBOL_STR(mwifiex_process_hs_config) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8471b479, __VMLINUX_SYMBOL_STR(mwifiex_deauthenticate_all) },
	{ 0x622c6cef, __VMLINUX_SYMBOL_STR(mwifiex_remove_card) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc29b51cd, __VMLINUX_SYMBOL_STR(mwifiex_enable_hs) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9b947e60, __VMLINUX_SYMBOL_STR(mwifiex_init_shutdown_fw) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("usb:v1286p2041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2042d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2044d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2049d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2046d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "1BA3818DA61E3994DD24214");
