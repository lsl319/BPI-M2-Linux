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
	{ 0x69b6f8d9, __VMLINUX_SYMBOL_STR(omap_set_dma_transfer_params) },
	{ 0x2e681ed9, __VMLINUX_SYMBOL_STR(videobuf_mmap_free) },
	{ 0xc0a6a8c5, __VMLINUX_SYMBOL_STR(omap_set_dma_dest_burst_mode) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf4a7fc6d, __VMLINUX_SYMBOL_STR(omapdss_compat_init) },
	{ 0x9c9c932b, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x1f6bfcaf, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3ed659b6, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x5481ccff, __VMLINUX_SYMBOL_STR(omap_dss_get_overlay_manager) },
	{ 0xffd2cf99, __VMLINUX_SYMBOL_STR(omap_dss_get_num_overlay_managers) },
	{ 0x4b3fcbf7, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x2faa2bb5, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x18fef9cb, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0x3ea99436, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xf0ba375f, __VMLINUX_SYMBOL_STR(omap_dss_get_overlay) },
	{ 0xa7b27d57, __VMLINUX_SYMBOL_STR(videobuf_queue_cancel) },
	{ 0xee2bc2d0, __VMLINUX_SYMBOL_STR(omapdss_is_initialized) },
	{ 0x407a3275, __VMLINUX_SYMBOL_STR(omap_start_dma) },
	{ 0x893f9776, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0xe8192ece, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x205ec8de, __VMLINUX_SYMBOL_STR(omap_dispc_register_isr) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xdc8b67c, __VMLINUX_SYMBOL_STR(videobuf_queue_dma_contig_init) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x485d6dd, __VMLINUX_SYMBOL_STR(__platform_driver_probe) },
	{ 0x197dc3b3, __VMLINUX_SYMBOL_STR(omap_set_dma_src_burst_mode) },
	{ 0x3005606, __VMLINUX_SYMBOL_STR(omapdss_get_version) },
	{ 0xf6f3cef6, __VMLINUX_SYMBOL_STR(omap_vrfb_setup) },
	{ 0xd26dd355, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xc52da066, __VMLINUX_SYMBOL_STR(omap_set_dma_dest_params) },
	{ 0xba4e25db, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x6f943fd6, __VMLINUX_SYMBOL_STR(omap_dss_put_device) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x41d1023, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x4a39e5a1, __VMLINUX_SYMBOL_STR(omap_set_dma_src_params) },
	{ 0x2d833725, __VMLINUX_SYMBOL_STR(xen_dma_ops) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb9a8f03b, __VMLINUX_SYMBOL_STR(omap_stop_dma) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc0cf95f9, __VMLINUX_SYMBOL_STR(omap_vrfb_request_ctx) },
	{ 0x57f81a16, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x7bc88636, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x64bc0c6d, __VMLINUX_SYMBOL_STR(omap_dss_get_next_device) },
	{ 0xfacd2e14, __VMLINUX_SYMBOL_STR(pgprot_user) },
	{ 0x62a8ab01, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x80d81308, __VMLINUX_SYMBOL_STR(omap_vrfb_release_ctx) },
	{ 0xa61e4362, __VMLINUX_SYMBOL_STR(omap_request_dma) },
	{ 0xe37d10ae, __VMLINUX_SYMBOL_STR(omap_dispc_unregister_isr) },
	{ 0x8faabbb9, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xd2142e4b, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x11896b52, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xabe27502, __VMLINUX_SYMBOL_STR(v4l2_ctrl_query_fill) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x74f58c92, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x4c33081d, __VMLINUX_SYMBOL_STR(omapdss_compat_uninit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7de346b0, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0xd2b9232e, __VMLINUX_SYMBOL_STR(omap_dss_get_device) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0x8cd8c339, __VMLINUX_SYMBOL_STR(omap_free_dma) },
	{ 0x252545f5, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x636b3461, __VMLINUX_SYMBOL_STR(omap_dss_get_num_overlays) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xf657b1db, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x171c0abc, __VMLINUX_SYMBOL_STR(videobuf_poll_stream) },
	{ 0xa48f5b09, __VMLINUX_SYMBOL_STR(omap_dma_set_global_params) },
	{ 0x523ffcf6, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,omapdss,videobuf-dma-contig";


MODULE_INFO(srcversion, "2CC10C6C3AF3D65A3366289");
