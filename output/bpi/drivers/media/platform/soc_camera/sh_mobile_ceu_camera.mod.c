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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc550d725, __VMLINUX_SYMBOL_STR(platform_bus_type) },
	{ 0xb98a20c0, __VMLINUX_SYMBOL_STR(v4l2_device_register_subdev) },
	{ 0x831ee2f3, __VMLINUX_SYMBOL_STR(soc_camera_host_register) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xc4bd20be, __VMLINUX_SYMBOL_STR(bus_unregister_notifier) },
	{ 0x2c07258a, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x4d44f45c, __VMLINUX_SYMBOL_STR(bus_register_notifier) },
	{ 0x219a0ab8, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x2695cdfe, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0xefb6275c, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x9cdd22f9, __VMLINUX_SYMBOL_STR(vb2_dma_contig_init_ctx) },
	{ 0xa4e10cc1, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb533ab0, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x9b921ba9, __VMLINUX_SYMBOL_STR(dma_declare_coherent_memory) },
	{ 0x85eccd25, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7a06d01f, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x52b5cb10, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xeb7b51c2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3f14d99b, __VMLINUX_SYMBOL_STR(soc_camera_client_g_rect) },
	{ 0x6802f14f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x29f5a98b, __VMLINUX_SYMBOL_STR(soc_mbus_get_fmtdesc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x355dd3c0, __VMLINUX_SYMBOL_STR(soc_camera_client_s_crop) },
	{ 0x9272c111, __VMLINUX_SYMBOL_STR(soc_camera_client_scale) },
	{ 0xbd6f2eee, __VMLINUX_SYMBOL_STR(soc_camera_calc_client_output) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x2863728e, __VMLINUX_SYMBOL_STR(soc_mbus_image_size) },
	{ 0x5f3e3558, __VMLINUX_SYMBOL_STR(soc_mbus_bytes_per_line) },
	{ 0x9db7edc6, __VMLINUX_SYMBOL_STR(soc_camera_xlate_by_fourcc) },
	{ 0x321f91dd, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x1d690318, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xe409cd86, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x5ee285fe, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x1e7a0021, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc8b28da5, __VMLINUX_SYMBOL_STR(soc_mbus_config_compatible) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf3f53e3a, __VMLINUX_SYMBOL_STR(vb2_poll) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x834d3d3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xe26cf89a, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x160b0af0, __VMLINUX_SYMBOL_STR(platform_device_del) },
	{ 0xe57f0426, __VMLINUX_SYMBOL_STR(vb2_dma_contig_cleanup_ctx) },
	{ 0xe9b713b8, __VMLINUX_SYMBOL_STR(dma_release_declared_memory) },
	{ 0x8f5d3eae, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x3e98bf60, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xa2797aa4, __VMLINUX_SYMBOL_STR(soc_camera_host_unregister) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=soc_camera,videobuf2-dma-contig,soc_scale_crop,soc_mediabus";

MODULE_ALIAS("of:N*T*Crenesas,sh-mobile-ceu*");

MODULE_INFO(srcversion, "F81253A652E071A5F0DB0BD");
