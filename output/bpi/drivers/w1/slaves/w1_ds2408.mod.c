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
	{ 0x31396633, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0x1e7fd15, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x4ca5381c, __VMLINUX_SYMBOL_STR(w1_reset_bus) },
	{ 0x10f5ab0b, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x963e2052, __VMLINUX_SYMBOL_STR(w1_read_8) },
	{ 0x8aad9cf, __VMLINUX_SYMBOL_STR(w1_reset_resume_command) },
	{ 0xe3a5a333, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0x1ffad00, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "907E0DD0A8DF541521497A8");
