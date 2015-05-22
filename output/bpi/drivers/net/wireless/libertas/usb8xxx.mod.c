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
	{ 0xf47dd479, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x791a57b8, __VMLINUX_SYMBOL_STR(lbs_host_sleep_cfg) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xeae81475, __VMLINUX_SYMBOL_STR(lbs_resume) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc3553e20, __VMLINUX_SYMBOL_STR(lbs_stop_card) },
	{ 0x4779e7ca, __VMLINUX_SYMBOL_STR(__lbs_cmd) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2f8865a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5847923d, __VMLINUX_SYMBOL_STR(lbs_start_card) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7e3ef906, __VMLINUX_SYMBOL_STR(lbs_queue_event) },
	{ 0x8bf953cb, __VMLINUX_SYMBOL_STR(lbs_send_tx_feedback) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xc3f955f0, __VMLINUX_SYMBOL_STR(lbs_get_firmware_async) },
	{ 0xc31daf9f, __VMLINUX_SYMBOL_STR(lbs_cmd_copyback) },
	{ 0x2f6a3b6f, __VMLINUX_SYMBOL_STR(lbs_suspend) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xebc23203, __VMLINUX_SYMBOL_STR(lbs_remove_card) },
	{ 0x9204dc5, __VMLINUX_SYMBOL_STR(lbs_process_rxed_packet) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x1811616a, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x19f9551a, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xeff90257, __VMLINUX_SYMBOL_STR(lbs_host_to_card_done) },
	{ 0xeb4ed746, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe4b6adc8, __VMLINUX_SYMBOL_STR(lbs_add_card) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xa9a58c4b, __VMLINUX_SYMBOL_STR(lbs_notify_command_response) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas";

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F72832D29610CF817E10A6E");
