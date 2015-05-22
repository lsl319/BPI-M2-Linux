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
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x6aeebcd4, __VMLINUX_SYMBOL_STR(wm1811_regmap_config) },
	{ 0xf58cbef9, __VMLINUX_SYMBOL_STR(wm8958_regmap_config) },
	{ 0xc7b60560, __VMLINUX_SYMBOL_STR(wm8994_regmap_config) },
	{ 0x8d59e0d4, __VMLINUX_SYMBOL_STR(wm8994_base_regmap_config) },
	{ 0xeb7b51c2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xa4e10cc1, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x6112a210, __VMLINUX_SYMBOL_STR(wm8994_irq_init) },
	{ 0x535afb5e, __VMLINUX_SYMBOL_STR(regmap_register_patch) },
	{ 0x5b345f79, __VMLINUX_SYMBOL_STR(regmap_reinit_cache) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd29e263e, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0x7ccc1708, __VMLINUX_SYMBOL_STR(mfd_add_devices) },
	{ 0xf9c10c8c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xa18e28b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x87e9d401, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x20321bcc, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8d872606, __VMLINUX_SYMBOL_STR(wm8994_irq_exit) },
	{ 0x5331dee1, __VMLINUX_SYMBOL_STR(mfd_remove_devices) },
	{ 0x3e98bf60, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xa8f76826, __VMLINUX_SYMBOL_STR(regcache_sync_region) },
	{ 0x2156650c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x3ed3be8, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x5807f8f5, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6ad4434e, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xc6c47d89, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x32645bfb, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x4d66883, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0x171523db, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wm8994-regmap,wm8994-irq";

MODULE_ALIAS("of:N*T*Cwlf,wm1811*");
MODULE_ALIAS("of:N*T*Cwlf,wm8994*");
MODULE_ALIAS("of:N*T*Cwlf,wm8958*");
MODULE_ALIAS("i2c:wm1811");
MODULE_ALIAS("i2c:wm1811a");
MODULE_ALIAS("i2c:wm8994");
MODULE_ALIAS("i2c:wm8958");

MODULE_INFO(srcversion, "EA25A708AE96398C8AA9069");
