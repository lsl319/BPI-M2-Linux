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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xa2599b6c, __VMLINUX_SYMBOL_STR(serio_unregister_port) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x241d011c, __VMLINUX_SYMBOL_STR(__serio_register_port) },
	{ 0x63035339, __VMLINUX_SYMBOL_STR(parport_release) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa278460c, __VMLINUX_SYMBOL_STR(parport_unregister_device) },
	{ 0xe8875459, __VMLINUX_SYMBOL_STR(parport_claim) },
	{ 0x8046e5a5, __VMLINUX_SYMBOL_STR(parport_put_port) },
	{ 0x2968f056, __VMLINUX_SYMBOL_STR(parport_register_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16cc4e2d, __VMLINUX_SYMBOL_STR(parport_find_number) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe8ee37c3, __VMLINUX_SYMBOL_STR(serio_interrupt) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";


MODULE_INFO(srcversion, "42442E6146B020D2C96E2B6");
