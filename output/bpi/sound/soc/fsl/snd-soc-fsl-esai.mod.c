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
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x85eccd25, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x5807f8f5, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xa25a5516, __VMLINUX_SYMBOL_STR(imx_pcm_dma_init) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa18e28b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x8f5d3eae, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xd34abf71, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_component) },
	{ 0x3511b756, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xcd41c085, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x32b2e626, __VMLINUX_SYMBOL_STR(devm_regmap_init_mmio_clk) },
	{ 0x7a06d01f, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6ad4434e, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xdb533ab0, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x3ed3be8, __VMLINUX_SYMBOL_STR(regmap_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=imx-pcm-dma";

MODULE_ALIAS("of:N*T*Cfsl,imx35-esai*");
MODULE_ALIAS("of:N*T*Cfsl,vf610-esai*");

MODULE_INFO(srcversion, "40051D8FF6B18695D7E9D6F");
