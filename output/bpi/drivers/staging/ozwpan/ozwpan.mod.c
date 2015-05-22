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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6cec1955, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd611cde5, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x27f90f08, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa9428540, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0x981fb2c8, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf90b7cc8, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x9c01eaab, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x7281ee, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0xe06f1b2, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xfb1e3b48, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xdf66e460, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xdabc3583, __VMLINUX_SYMBOL_STR(usb_hcd_poll_rh_status) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x9d57f314, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x95c55562, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x1c32402d, __VMLINUX_SYMBOL_STR(usb_get_hcd) },
	{ 0xe32e13ae, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd4ca7bb3, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xcabeabfa, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xefb6275c, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x219a0ab8, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x75667d3a, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x68c8855f, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xf38128ca, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xeb182862, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xad8a5656, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x6fedc27a, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x6902e629, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xce38d2e5, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x36e5c954, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x428d4cf0, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x31380354, __VMLINUX_SYMBOL_STR(getrawmonotonic64) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x203d8eb5, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3197aae5, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xce0e5eaf, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xf5639ad0, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa92e5590, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xdfe6d439, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0xef69921d, __VMLINUX_SYMBOL_STR(usb_hcd_resume_root_hub) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x33a620d7, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xe26cf89a, __VMLINUX_SYMBOL_STR(platform_device_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E92CE6619E64524BCFA4C40");
