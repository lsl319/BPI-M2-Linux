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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x3e98bf60, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x45a0fd0e, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0x2234e2b, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x69de3476, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x5f3e3558, __VMLINUX_SYMBOL_STR(soc_mbus_bytes_per_line) },
	{ 0x4b3fcbf7, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x55c14e4c, __VMLINUX_SYMBOL_STR(v4l2_clk_disable) },
	{ 0x3ea99436, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x47afd5c3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xc31f87ce, __VMLINUX_SYMBOL_STR(vb2_create_bufs) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x893f9776, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0xe8192ece, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x52b5cb10, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xb536dcfe, __VMLINUX_SYMBOL_STR(i2c_put_adapter) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xba4e25db, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xd29e263e, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0x171523db, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x96ecca21, __VMLINUX_SYMBOL_STR(vb2_read) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9fc2ba1f, __VMLINUX_SYMBOL_STR(of_find_i2c_device_by_node) },
	{ 0xe05c5127, __VMLINUX_SYMBOL_STR(vb2_prepare_buf) },
	{ 0x41d1023, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x99264b49, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x57f81a16, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x7bc88636, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xfcf88f58, __VMLINUX_SYMBOL_STR(of_graph_get_next_endpoint) },
	{ 0x160b0af0, __VMLINUX_SYMBOL_STR(platform_device_del) },
	{ 0xefb6275c, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xd9f3028b, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_register) },
	{ 0x219a0ab8, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x62a8ab01, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5d4776cd, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0xeb182862, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xccec1afa, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x3712f131, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0x87e7a6ab, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x7a1e9268, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister) },
	{ 0x8866261d, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0xcabb5e60, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x29f5a98b, __VMLINUX_SYMBOL_STR(soc_mbus_get_fmtdesc) },
	{ 0x834d3d3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2e69d042, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0xc6c47d89, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xa4e10cc1, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xa2d21ead, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xd2142e4b, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa54b7eb, __VMLINUX_SYMBOL_STR(vb2_expbuf) },
	{ 0xec360f26, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x9b8ab2c9, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0xf688110e, __VMLINUX_SYMBOL_STR(v4l2_clk_enable) },
	{ 0x2695cdfe, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x74f58c92, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0xa2617937, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x1926ecb3, __VMLINUX_SYMBOL_STR(of_graph_get_remote_port) },
	{ 0x166ca46f, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x252545f5, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0xbf1d3501, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x5d7df5bd, __VMLINUX_SYMBOL_STR(v4l2_clk_register) },
	{ 0x9e22a007, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev_board) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xde1d9f3a, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2863728e, __VMLINUX_SYMBOL_STR(soc_mbus_image_size) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x2af28344, __VMLINUX_SYMBOL_STR(i2c_get_adapter) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe38d4662, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x7d4d9764, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0x5b4108b7, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_unregister) },
	{ 0xf657b1db, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x2c07258a, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe26cf89a, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x523ffcf6, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,soc_mediabus";


MODULE_INFO(srcversion, "86C0B9CC9F152F9045FAC79");
