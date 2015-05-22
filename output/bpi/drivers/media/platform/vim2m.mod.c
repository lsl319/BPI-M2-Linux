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
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x64757ecd, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x412fc244, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xd616f03b, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xbd9a6017, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x7fe91e4f, __VMLINUX_SYMBOL_STR(v4l2_m2m_ioctl_streamoff) },
	{ 0x171345dd, __VMLINUX_SYMBOL_STR(v4l2_m2m_ioctl_streamon) },
	{ 0xe2084033, __VMLINUX_SYMBOL_STR(v4l2_m2m_ioctl_dqbuf) },
	{ 0x22abb69, __VMLINUX_SYMBOL_STR(v4l2_m2m_ioctl_expbuf) },
	{ 0xe4cff06e, __VMLINUX_SYMBOL_STR(v4l2_m2m_ioctl_qbuf) },
	{ 0xe00e95d5, __VMLINUX_SYMBOL_STR(v4l2_m2m_ioctl_querybuf) },
	{ 0x7c338a09, __VMLINUX_SYMBOL_STR(v4l2_m2m_ioctl_reqbufs) },
	{ 0x13517bf3, __VMLINUX_SYMBOL_STR(v4l2_m2m_fop_mmap) },
	{ 0xf657b1db, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x338b32d4, __VMLINUX_SYMBOL_STR(v4l2_m2m_fop_poll) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x40eb42a3, __VMLINUX_SYMBOL_STR(platform_device_register) },
	{ 0xeb182862, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xfe7c09ed, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x5ee285fe, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x7cf1b2fc, __VMLINUX_SYMBOL_STR(v4l2_m2m_job_finish) },
	{ 0x459e133f, __VMLINUX_SYMBOL_STR(v4l2_m2m_get_curr_priv) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x321f91dd, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x7ac420a7, __VMLINUX_SYMBOL_STR(v4l2_m2m_next_buf) },
	{ 0xc77105e1, __VMLINUX_SYMBOL_STR(v4l2_m2m_get_vq) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbf5c07b8, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0xbff80598, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_init) },
	{ 0xec360f26, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x12add75e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0x6802f14f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xbf1d3501, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xb1587bd5, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x99264b49, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x17eb0eee, __VMLINUX_SYMBOL_STR(v4l2_m2m_init) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4b3fcbf7, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xe8192ece, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x41d1023, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xba4e25db, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x1d690318, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd5b4eb3d, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_remove) },
	{ 0xd3ddc28f, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf25b8e7b, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_release) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x47afd5c3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x479cae67, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0x9880bb8d, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0xd2142e4b, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x3ea99436, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x7bc88636, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xc6fca5ad, __VMLINUX_SYMBOL_STR(v4l2_m2m_release) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=v4l2-mem2mem";


MODULE_INFO(srcversion, "919B00EEFE2D7CB10F51FF3");
