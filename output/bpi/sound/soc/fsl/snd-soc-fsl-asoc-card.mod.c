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
	{ 0x91a55cf3, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x6752d1de, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x7e4a5215, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x638708e9, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_pll) },
	{ 0x6011f950, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9fc2ba1f, __VMLINUX_SYMBOL_STR(of_find_i2c_device_by_node) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x1977f078, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xd2181ac7, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x58631dab, __VMLINUX_SYMBOL_STR(imx_audmux_v2_configure_port) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7487b79, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0xe9f29866, __VMLINUX_SYMBOL_STR(of_find_device_by_node) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-imx-audmux";


MODULE_INFO(srcversion, "B3AACD37375D131C63D38DA");
