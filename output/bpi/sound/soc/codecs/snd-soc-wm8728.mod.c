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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x7a3017e3, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x52a4e9d9, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xcd734d4e, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb478f170, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xfee0aee4, __VMLINUX_SYMBOL_STR(devm_regmap_init_spi) },
	{ 0x5f6c8623, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x87e9d401, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x44ff7f70, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x32a17e6c, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x957107b6, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x32645bfb, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xae5f1e2c, __VMLINUX_SYMBOL_STR(snd_soc_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cwlf,wm8728*");
MODULE_ALIAS("i2c:wm8728");

MODULE_INFO(srcversion, "0459DB0A2BC7744D1FC94DD");
