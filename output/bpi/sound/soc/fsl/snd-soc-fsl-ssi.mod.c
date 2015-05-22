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
	{ 0xf982d4b2, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x4a4f6769, __VMLINUX_SYMBOL_STR(of_find_node_opts_by_path) },
	{ 0x7ad95aef, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x55701d6c, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0xb79d17ef, __VMLINUX_SYMBOL_STR(snd_soc_set_ac97_ops_of_reset) },
	{ 0x8876ee0b, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x144e230d, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x5807f8f5, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xc1942f, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x2baf4c6f, __VMLINUX_SYMBOL_STR(snd_soc_register_component) },
	{ 0x2e01a8ce, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xc5744afc, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x94ca1a7d, __VMLINUX_SYMBOL_STR(imx_pcm_fiq_init) },
	{ 0xa25a5516, __VMLINUX_SYMBOL_STR(imx_pcm_dma_init) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1eb74088, __VMLINUX_SYMBOL_STR(of_device_is_available) },
	{ 0xc5ee251d, __VMLINUX_SYMBOL_STR(imx_pcm_fiq_exit) },
	{ 0xa18e28b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x51de0ab0, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xeb182862, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xde3a9a9a, __VMLINUX_SYMBOL_STR(snd_soc_unregister_component) },
	{ 0x20321bcc, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x43f81957, __VMLINUX_SYMBOL_STR(clk_round_rate) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x3511b756, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xcd41c085, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x7f2a1be4, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8da4b169, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x32b2e626, __VMLINUX_SYMBOL_STR(devm_regmap_init_mmio_clk) },
	{ 0x3ecec3cf, __VMLINUX_SYMBOL_STR(of_address_to_resource) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9c8a300f, __VMLINUX_SYMBOL_STR(of_property_match_string) },
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
"depends=imx-pcm-fiq,imx-pcm-dma";

MODULE_ALIAS("of:N*T*Cfsl,mpc8610-ssi*");
MODULE_ALIAS("of:N*T*Cfsl,imx51-ssi*");
MODULE_ALIAS("of:N*T*Cfsl,imx35-ssi*");
MODULE_ALIAS("of:N*T*Cfsl,imx21-ssi*");

MODULE_INFO(srcversion, "72AFD3E1662A492B0980B59");
