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
	{ 0x1b94a9f0, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x648af39f, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7345e219, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x3ea99436, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x8bb24fd2, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xa149c4b0, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe8192ece, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x34560abf, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0xba4e25db, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x1e07cc47, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x8e5f9a91, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xfe7c09ed, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xcecd179, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xe85639a8, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x76f6c5ef, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7bc88636, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x6b878b7c, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x2e16da5b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x321f91dd, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x1d690318, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x249ae52, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4128f6ff, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0x7b0036f9, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0x8c2483e5, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xe10667e1, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x9003be7f, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x81a88557, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0x4d73b09c, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x1811616a, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xa788abd8, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xd2142e4b, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x9f5c52fc, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0xeb4ed746, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x73267afb, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x86c24da7, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x8463f4b8, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x76f98887, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x25dfecb7, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x3ff40d2b, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x513dfd1c, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x4c5c592b, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xe38d4662, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xf84489c9, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xf657b1db, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x5ee285fe, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1B71p3002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B6DA60C9B61F92C96600B2E");
