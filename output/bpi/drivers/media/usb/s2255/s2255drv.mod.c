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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x64757ecd, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x412fc244, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xd616f03b, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xbd9a6017, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xd991f93, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x4c5c592b, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xa149c4b0, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x9003be7f, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0xe85639a8, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x8463f4b8, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x1b94a9f0, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0xa788abd8, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xcecd179, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xf657b1db, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x8bb24fd2, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x1e07cc47, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x86c24da7, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xfe7c09ed, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12add75e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0xe8192ece, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x5ee285fe, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x6802f14f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xbf1d3501, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xba4e25db, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x76f6c5ef, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0x19f9551a, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xdfcc44b7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x1811616a, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x47afd5c3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x7bc88636, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x8e5f9a91, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x3ea99436, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xeb4ed746, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd0f1ee48, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x249ae52, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x3d49972d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x521d8dd3, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd2142e4b, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x1d690318, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x321f91dd, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "28A59B571B57FEE6373CD7A");
