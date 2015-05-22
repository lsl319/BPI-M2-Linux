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
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x64757ecd, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x412fc244, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xd616f03b, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xbd9a6017, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xd991f93, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x4c5c592b, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xa149c4b0, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x4128f6ff, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0xe10667e1, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x9003be7f, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0xe85639a8, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x8463f4b8, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x1b94a9f0, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0xa788abd8, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x86c24da7, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xcecd179, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xf657b1db, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x8bb24fd2, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x1e07cc47, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x648af39f, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x70e88f8d, __VMLINUX_SYMBOL_STR(spi_finalize_current_message) },
	{ 0xfe7c09ed, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcabb5e60, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe8192ece, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xde1d9f3a, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0xbf1d3501, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xc4124725, __VMLINUX_SYMBOL_STR(v4l2_spi_new_subdev) },
	{ 0xa2d21ead, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xf1db4477, __VMLINUX_SYMBOL_STR(spi_register_master) },
	{ 0x6b9d8277, __VMLINUX_SYMBOL_STR(spi_alloc_master) },
	{ 0xba4e25db, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x5ee285fe, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x321f91dd, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfe783f31, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x2e16da5b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x99264b49, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x2f7cbd82, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x1d690318, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x521d8dd3, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0x872d7516, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0x8b5af6e4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x249ae52, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd2142e4b, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3ea99436, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x47afd5c3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xf84489c9, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x425455f8, __VMLINUX_SYMBOL_STR(spi_unregister_master) },
	{ 0x7bc88636, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x8e5f9a91, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1DF7p2500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD300d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0AFB263714BB201D9744264");
