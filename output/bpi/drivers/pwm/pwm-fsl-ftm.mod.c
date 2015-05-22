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
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xb4e92956, __VMLINUX_SYMBOL_STR(of_pwm_xlate_with_flags) },
	{ 0x3f0d4dac, __VMLINUX_SYMBOL_STR(pwmchip_add) },
	{ 0xcd41c085, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x32b2e626, __VMLINUX_SYMBOL_STR(devm_regmap_init_mmio_clk) },
	{ 0x85eccd25, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x8f5d3eae, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x3ed3be8, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6ad4434e, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1f546bfa, __VMLINUX_SYMBOL_STR(pwmchip_remove) },
	{ 0x2156650c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x32645bfb, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x4d66883, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0x5807f8f5, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,vf610-ftm-pwm*");

MODULE_INFO(srcversion, "CC66D8A150D3F4A26F8011F");
