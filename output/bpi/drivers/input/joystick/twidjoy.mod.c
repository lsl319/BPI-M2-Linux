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
	{ 0x30eb63a2, __VMLINUX_SYMBOL_STR(serio_unregister_driver) },
	{ 0x6a3a896f, __VMLINUX_SYMBOL_STR(__serio_register_driver) },
	{ 0x79f39947, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdc33240f, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xae13964c, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xe9836cdb, __VMLINUX_SYMBOL_STR(serio_open) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x6379f2a6, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6f91586d, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x74c3107f, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x94f65da1, __VMLINUX_SYMBOL_STR(serio_close) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty02pr24id*ex*");

MODULE_INFO(srcversion, "216319CD9D55B27702D1BFC");
