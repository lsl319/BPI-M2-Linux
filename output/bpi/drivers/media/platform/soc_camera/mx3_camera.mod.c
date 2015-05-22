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
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x923b1276, __VMLINUX_SYMBOL_STR(dmaengine_get) },
	{ 0x831ee2f3, __VMLINUX_SYMBOL_STR(soc_camera_host_register) },
	{ 0x9cdd22f9, __VMLINUX_SYMBOL_STR(vb2_dma_contig_init_ctx) },
	{ 0xcd41c085, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x85eccd25, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x8f5d3eae, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x43f81957, __VMLINUX_SYMBOL_STR(clk_round_rate) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x85f4c061, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x25c52d97, __VMLINUX_SYMBOL_STR(soc_mbus_samples_per_pixel) },
	{ 0x2863728e, __VMLINUX_SYMBOL_STR(soc_mbus_image_size) },
	{ 0x5f3e3558, __VMLINUX_SYMBOL_STR(soc_mbus_bytes_per_line) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2334c823, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xe409cd86, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x1d690318, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x5ee285fe, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x1e7a0021, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xc8b28da5, __VMLINUX_SYMBOL_STR(soc_mbus_config_compatible) },
	{ 0x29f5a98b, __VMLINUX_SYMBOL_STR(soc_mbus_get_fmtdesc) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9db7edc6, __VMLINUX_SYMBOL_STR(soc_camera_xlate_by_fourcc) },
	{ 0xf3f53e3a, __VMLINUX_SYMBOL_STR(vb2_poll) },
	{ 0x888bec68, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x57575f08, __VMLINUX_SYMBOL_STR(dmaengine_put) },
	{ 0xe57f0426, __VMLINUX_SYMBOL_STR(vb2_dma_contig_cleanup_ctx) },
	{ 0xa2797aa4, __VMLINUX_SYMBOL_STR(soc_camera_host_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=soc_camera,videobuf2-dma-contig,soc_mediabus";


MODULE_INFO(srcversion, "CEA6C54EAC039365F765B2F");
