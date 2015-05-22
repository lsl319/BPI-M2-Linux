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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcf34a677, __VMLINUX_SYMBOL_STR(pcm512x_regmap) },
	{ 0x7166b7cc, __VMLINUX_SYMBOL_STR(pcm512x_pm_ops) },
	{ 0xb478f170, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xfee0aee4, __VMLINUX_SYMBOL_STR(devm_regmap_init_spi) },
	{ 0xb303c0c6, __VMLINUX_SYMBOL_STR(pcm512x_probe) },
	{ 0x6c6afe38, __VMLINUX_SYMBOL_STR(pcm512x_remove) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x32a17e6c, __VMLINUX_SYMBOL_STR(spi_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-pcm512x";

MODULE_ALIAS("spi:pcm5121");
MODULE_ALIAS("spi:pcm5122");
MODULE_ALIAS("spi:pcm5141");
MODULE_ALIAS("spi:pcm5142");
MODULE_ALIAS("of:N*T*Cti,pcm5121*");
MODULE_ALIAS("of:N*T*Cti,pcm5122*");
MODULE_ALIAS("of:N*T*Cti,pcm5141*");
MODULE_ALIAS("of:N*T*Cti,pcm5142*");

MODULE_INFO(srcversion, "56529AB81E11DDB491E85D6");
