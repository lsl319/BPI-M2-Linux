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
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1bc3edc2, __VMLINUX_SYMBOL_STR(usb_stor_sense_invalidCDB) },
	{ 0x77a764a, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0xd17b6379, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x66d793ed, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x26d1c315, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x82701365, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x8f84ba74, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x930e3b1, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0xba418721, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2ac926c4, __VMLINUX_SYMBOL_STR(blk_init_tags) },
	{ 0x28d6b6f3, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x7afaf2d4, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x4e1893ec, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf1320649, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xe903b97, __VMLINUX_SYMBOL_STR(usb_stor_adjust_quirks) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x58076fda, __VMLINUX_SYMBOL_STR(usb_get_urb) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x5755a177, __VMLINUX_SYMBOL_STR(blk_queue_update_dma_alignment) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd907698b, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x398b07e8, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0xb153bb8a, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x96b60aa0, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xef66075c, __VMLINUX_SYMBOL_STR(usb_wait_anchor_empty_timeout) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x252c7e27, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xdc291ed1, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7143808f, __VMLINUX_SYMBOL_STR(scsi_report_bus_reset) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6eb737b9, __VMLINUX_SYMBOL_STR(usb_alloc_streams) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0x19f9551a, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x2e16da5b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x95755786, __VMLINUX_SYMBOL_STR(usb_free_streams) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p2312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p3312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p3320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pA003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pA013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pA0A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pAB20d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pAB21d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip62in*");

MODULE_INFO(srcversion, "3383BB6A8CE7905BE81D4D9");
