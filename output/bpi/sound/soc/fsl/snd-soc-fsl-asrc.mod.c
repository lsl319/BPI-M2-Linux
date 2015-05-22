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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7345e219, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x466643dd, __VMLINUX_SYMBOL_STR(snd_dma_alloc_pages) },
	{ 0x2faa2bb5, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x18fef9cb, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x186cd02d, __VMLINUX_SYMBOL_STR(snd_soc_set_runtime_hwparams) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x85eccd25, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x6011f950, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x5807f8f5, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x908abccb, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x89a8f0de, __VMLINUX_SYMBOL_STR(dma_request_slave_channel) },
	{ 0x2d833725, __VMLINUX_SYMBOL_STR(xen_dma_ops) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x25b20ad9, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_prepare_slave_config) },
	{ 0x755e2bcc, __VMLINUX_SYMBOL_STR(snd_soc_dpcm_get_substream) },
	{ 0x8f5d3eae, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x8c2483e5, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x5d1903fe, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_platform) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa4e10cc1, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xd34abf71, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_component) },
	{ 0x915997fc, __VMLINUX_SYMBOL_STR(snd_dma_free_pages) },
	{ 0x85f4c061, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0xcd41c085, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2156650c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x888bec68, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0x9178e54c, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x32b2e626, __VMLINUX_SYMBOL_STR(devm_regmap_init_mmio_clk) },
	{ 0x7a06d01f, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6ad4434e, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xdb533ab0, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x3ed3be8, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x32645bfb, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x4d66883, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx35-asrc*");
MODULE_ALIAS("of:N*T*Cfsl,imx53-asrc*");

MODULE_INFO(srcversion, "156E3BE5E2279C3F1659988");
