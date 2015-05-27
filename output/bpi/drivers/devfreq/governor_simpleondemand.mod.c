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
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x86b69919, __VMLINUX_SYMBOL_STR(devfreq_remove_governor) },
	{ 0x31fc8a98, __VMLINUX_SYMBOL_STR(devfreq_add_governor) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc0dcf3ec, __VMLINUX_SYMBOL_STR(devfreq_monitor_suspend) },
	{ 0x6397b573, __VMLINUX_SYMBOL_STR(devfreq_interval_update) },
	{ 0xf1296505, __VMLINUX_SYMBOL_STR(devfreq_monitor_stop) },
	{ 0x2fe7ecb, __VMLINUX_SYMBOL_STR(devfreq_monitor_resume) },
	{ 0x21ab7b8c, __VMLINUX_SYMBOL_STR(devfreq_monitor_start) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BB293CDE8F7EF08AC92BEF7");
