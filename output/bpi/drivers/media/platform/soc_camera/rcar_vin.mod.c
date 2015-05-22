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
	{ 0x64757ecd, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x412fc244, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x355dd3c0, __VMLINUX_SYMBOL_STR(soc_camera_client_s_crop) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x52b5cb10, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x321f91dd, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x831ee2f3, __VMLINUX_SYMBOL_STR(soc_camera_host_register) },
	{ 0xa4e10cc1, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x771c97d, __VMLINUX_SYMBOL_STR(of_alias_get_id) },
	{ 0x9cdd22f9, __VMLINUX_SYMBOL_STR(vb2_dma_contig_init_ctx) },
	{ 0xdb533ab0, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x85eccd25, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7a06d01f, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x8f5d3eae, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xf346978e, __VMLINUX_SYMBOL_STR(v4l2_of_parse_endpoint) },
	{ 0xfcf88f58, __VMLINUX_SYMBOL_STR(of_graph_get_next_endpoint) },
	{ 0x20321bcc, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xeb7b51c2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3f14d99b, __VMLINUX_SYMBOL_STR(soc_camera_client_g_rect) },
	{ 0xc8b28da5, __VMLINUX_SYMBOL_STR(soc_mbus_config_compatible) },
	{ 0x29f5a98b, __VMLINUX_SYMBOL_STR(soc_mbus_get_fmtdesc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9272c111, __VMLINUX_SYMBOL_STR(soc_camera_client_scale) },
	{ 0xbd6f2eee, __VMLINUX_SYMBOL_STR(soc_camera_calc_client_output) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x2863728e, __VMLINUX_SYMBOL_STR(soc_mbus_image_size) },
	{ 0x5f3e3558, __VMLINUX_SYMBOL_STR(soc_mbus_bytes_per_line) },
	{ 0x9db7edc6, __VMLINUX_SYMBOL_STR(soc_camera_xlate_by_fourcc) },
	{ 0x1d690318, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xe409cd86, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0x5ee285fe, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x1e7a0021, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xf3f53e3a, __VMLINUX_SYMBOL_STR(vb2_poll) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xe57f0426, __VMLINUX_SYMBOL_STR(vb2_dma_contig_cleanup_ctx) },
	{ 0x3e98bf60, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xa2797aa4, __VMLINUX_SYMBOL_STR(soc_camera_host_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=soc_scale_crop,soc_camera,videobuf2-dma-contig,soc_mediabus";

MODULE_ALIAS("of:N*T*Crenesas,vin-r8a7794*");
MODULE_ALIAS("of:N*T*Crenesas,vin-r8a7793*");
MODULE_ALIAS("of:N*T*Crenesas,vin-r8a7791*");
MODULE_ALIAS("of:N*T*Crenesas,vin-r8a7790*");
MODULE_ALIAS("of:N*T*Crenesas,vin-r8a7779*");
MODULE_ALIAS("of:N*T*Crenesas,vin-r8a7778*");
MODULE_ALIAS("platform:r8a7791-vin");
MODULE_ALIAS("platform:r8a7790-vin");
MODULE_ALIAS("platform:r8a7779-vin");
MODULE_ALIAS("platform:r8a7778-vin");
MODULE_ALIAS("platform:uPD35004-vin");

MODULE_INFO(srcversion, "20AB1712281F1FBF6C8C0B7");
