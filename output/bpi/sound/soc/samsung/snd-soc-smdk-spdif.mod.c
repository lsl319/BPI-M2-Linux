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
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x160b0af0, __VMLINUX_SYMBOL_STR(platform_device_del) },
	{ 0xefb6275c, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x219a0ab8, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xeb182862, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x2396c7f0, __VMLINUX_SYMBOL_STR(clk_set_parent) },
	{ 0x1977f078, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xd2181ac7, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe26cf89a, __VMLINUX_SYMBOL_STR(platform_device_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6BCF3E2FF0080B7EE3C561C");
