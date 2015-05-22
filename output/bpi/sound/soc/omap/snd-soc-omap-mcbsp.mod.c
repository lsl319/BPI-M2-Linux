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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xeb7b51c2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x3e98bf60, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x55701d6c, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x52b5cb10, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x382aef34, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xdd7ab7ec, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x8f5d3eae, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x20321bcc, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x5f6c8623, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x5c6a30db, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0xa4e10cc1, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xf1fcc3fd, __VMLINUX_SYMBOL_STR(platform_get_irq_byname) },
	{ 0x2396c7f0, __VMLINUX_SYMBOL_STR(clk_set_parent) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x31a83db3, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xd34abf71, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_component) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd2181ac7, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x22a180bd, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8da4b169, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x7a06d01f, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x14ad2f7d, __VMLINUX_SYMBOL_STR(omap_pcm_platform_register) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x37a15fd, __VMLINUX_SYMBOL_STR(snd_soc_add_dai_controls) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-omap";

MODULE_ALIAS("of:N*T*Cti,omap2420-mcbsp*");
MODULE_ALIAS("of:N*T*Cti,omap2430-mcbsp*");
MODULE_ALIAS("of:N*T*Cti,omap3-mcbsp*");
MODULE_ALIAS("of:N*T*Cti,omap4-mcbsp*");

MODULE_INFO(srcversion, "9F71CED5C1179DB4B8E039E");
