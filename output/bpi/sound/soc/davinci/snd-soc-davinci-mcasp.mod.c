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
	{ 0xeb7b51c2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xeb711ae7, __VMLINUX_SYMBOL_STR(snd_soc_params_to_bclk) },
	{ 0x3e98bf60, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x52b5cb10, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x1a423428, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8f5d3eae, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x3d9d0495, __VMLINUX_SYMBOL_STR(edma_pcm_platform_register) },
	{ 0x20321bcc, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xa4e10cc1, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x577c20ed, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock_irq) },
	{ 0xf1fcc3fd, __VMLINUX_SYMBOL_STR(platform_get_irq_byname) },
	{ 0x7993adc, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock_irq) },
	{ 0x2396c7f0, __VMLINUX_SYMBOL_STR(clk_set_parent) },
	{ 0x31a83db3, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0xd34abf71, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_component) },
	{ 0x3511b756, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xd2181ac7, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x22a180bd, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0xb30b7a6c, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x8da4b169, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0xf0fa5491, __VMLINUX_SYMBOL_STR(snd_pcm_stop) },
	{ 0x4ba36c2f, __VMLINUX_SYMBOL_STR(of_parse_phandle_with_args) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x9c8a300f, __VMLINUX_SYMBOL_STR(of_property_match_string) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x14ad2f7d, __VMLINUX_SYMBOL_STR(omap_pcm_platform_register) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xdb533ab0, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-edma,snd-soc-omap";

MODULE_ALIAS("of:N*T*Cti,dm646x-mcasp-audio*");
MODULE_ALIAS("of:N*T*Cti,da830-mcasp-audio*");
MODULE_ALIAS("of:N*T*Cti,am33xx-mcasp-audio*");
MODULE_ALIAS("of:N*T*Cti,dra7-mcasp-audio*");

MODULE_INFO(srcversion, "C387F77A9C6D558573945CC");
