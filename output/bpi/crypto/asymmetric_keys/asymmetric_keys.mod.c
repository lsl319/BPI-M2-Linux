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
	{ 0x9c9c932b, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc1de5bf7, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x144e230d, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xa1371520, __VMLINUX_SYMBOL_STR(generic_key_instantiate) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd26dd355, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x574313af, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xe9e2e456, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x5e11492d, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x834d3d3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xaa4a7797, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0x56cd88c8, __VMLINUX_SYMBOL_STR(register_key_type) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4ea69998, __VMLINUX_SYMBOL_STR(unregister_key_type) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DC84DCB8A9AEC23E4D7D7C7");
