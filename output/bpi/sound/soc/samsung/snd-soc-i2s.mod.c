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
	{ 0xade84e1d, __VMLINUX_SYMBOL_STR(idma_reg_addr_init) },
	{ 0xfc8cf1a2, __VMLINUX_SYMBOL_STR(of_property_read_string_helper) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x9634bb6c, __VMLINUX_SYMBOL_STR(clk_register_mux) },
	{ 0x3e98bf60, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x63a1e26f, __VMLINUX_SYMBOL_STR(samsung_asoc_init_dma_data) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x85eccd25, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x3559cd32, __VMLINUX_SYMBOL_STR(of_clk_src_onecell_get) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xad8250c0, __VMLINUX_SYMBOL_STR(of_match_node) },
	{ 0xa18e28b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xefb6275c, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x219a0ab8, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8f5d3eae, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x13c8cbed, __VMLINUX_SYMBOL_STR(of_clk_add_provider) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa4e10cc1, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xd34abf71, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_component) },
	{ 0xcd41c085, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd2181ac7, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0xa033df40, __VMLINUX_SYMBOL_STR(clk_register_divider) },
	{ 0xba497f13, __VMLINUX_SYMBOL_STR(loops_per_jiffy) },
	{ 0x4feea0f7, __VMLINUX_SYMBOL_STR(samsung_asoc_dma_platform_register) },
	{ 0x7757b51a, __VMLINUX_SYMBOL_STR(clk_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xc649229a, __VMLINUX_SYMBOL_STR(clk_register_gate) },
	{ 0x7056b6f2, __VMLINUX_SYMBOL_STR(__clk_get_name) },
	{ 0x8a87da07, __VMLINUX_SYMBOL_STR(of_clk_del_provider) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-idma,snd-soc-s3c-dma";

MODULE_ALIAS("platform:samsung-i2s");
MODULE_ALIAS("platform:samsung-i2s-sec");
MODULE_ALIAS("platform:samsung-i2sv4");
MODULE_ALIAS("of:N*T*Csamsung,s3c6410-i2s*");
MODULE_ALIAS("of:N*T*Csamsung,s5pv210-i2s*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5420-i2s*");
MODULE_ALIAS("of:N*T*Csamsung,exynos7-i2s*");
MODULE_ALIAS("of:N*T*Csamsung,exynos7-i2s1*");

MODULE_INFO(srcversion, "C4569B992D4EBEDE5E81F48");
