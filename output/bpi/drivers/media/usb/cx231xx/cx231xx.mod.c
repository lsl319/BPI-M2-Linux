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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2e681ed9, __VMLINUX_SYMBOL_STR(videobuf_mmap_free) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd616f03b, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x45a0fd0e, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0x455e1cdc, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xd991f93, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x4b3fcbf7, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x54bde144, __VMLINUX_SYMBOL_STR(tveeprom_hauppauge_analog) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x3ea99436, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xb7792708, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x47afd5c3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x3f96c37e, __VMLINUX_SYMBOL_STR(cx2341x_handler_set_50hz) },
	{ 0x7b83511a, __VMLINUX_SYMBOL_STR(cx2341x_handler_init) },
	{ 0xf51bd8c9, __VMLINUX_SYMBOL_STR(videobuf_queue_vmalloc_init) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x893f9776, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0xe8192ece, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xa091885e, __VMLINUX_SYMBOL_STR(videobuf_iolock) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x3d2a2f99, __VMLINUX_SYMBOL_STR(i2c_add_mux_adapter) },
	{ 0x66d793ed, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xaf8589c1, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x78fd7d14, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xba4e25db, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x41d1023, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x99264b49, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x57f81a16, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7bc88636, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x2e16da5b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xb1587bd5, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x4e8aecc1, __VMLINUX_SYMBOL_STR(v4l2_event_pending) },
	{ 0xbd9a6017, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x62a8ab01, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x249ae52, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2f16db1c, __VMLINUX_SYMBOL_STR(videobuf_read_stream) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2f7cbd82, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xccec1afa, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x25d2c22b, __VMLINUX_SYMBOL_STR(videobuf_stop) },
	{ 0xad6c933f, __VMLINUX_SYMBOL_STR(i2c_del_mux_adapter) },
	{ 0x123959a1, __VMLINUX_SYMBOL_STR(v4l2_type_names) },
	{ 0x50f878b9, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x1811616a, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xb88c4c0d, __VMLINUX_SYMBOL_STR(cx2341x_handler_setup) },
	{ 0xd2142e4b, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x3d49972d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xeb4ed746, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x73267afb, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x52f4de4c, __VMLINUX_SYMBOL_STR(videobuf_vmalloc_free) },
	{ 0x115fd6be, __VMLINUX_SYMBOL_STR(videobuf_to_vmalloc) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd8361a, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x74f58c92, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0x91a02a06, __VMLINUX_SYMBOL_STR(videobuf_queue_is_busy) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2f60d385, __VMLINUX_SYMBOL_STR(videobuf_waiton) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x252545f5, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0xbf1d3501, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xdfcc44b7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xbf5c07b8, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9880bb8d, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0xde1d9f3a, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xfe783f31, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x324c80e7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_radio_filter) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa3f5b1c4, __VMLINUX_SYMBOL_STR(videobuf_read_stop) },
	{ 0x1c71a0f7, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xd0f1ee48, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xf657b1db, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x171c0abc, __VMLINUX_SYMBOL_STR(videobuf_poll_stream) },
	{ 0x4649baed, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x479cae67, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0x523ffcf6, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,tveeprom,cx2341x,videobuf-vmalloc";

MODULE_ALIAS("usb:v1D19p6109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p5A3Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p589Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d400[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0102d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EBC0BA5CA4A1FF3F4886906");
