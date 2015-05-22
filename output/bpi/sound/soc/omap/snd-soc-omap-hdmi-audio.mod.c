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
	{ 0x55701d6c, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2baf4c6f, __VMLINUX_SYMBOL_STR(snd_soc_register_component) },
	{ 0x1a423428, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x26d4eae6, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0xde3a9a9a, __VMLINUX_SYMBOL_STR(snd_soc_unregister_component) },
	{ 0x577c20ed, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock_irq) },
	{ 0x7993adc, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock_irq) },
	{ 0xf0fa5491, __VMLINUX_SYMBOL_STR(snd_pcm_stop) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x14ad2f7d, __VMLINUX_SYMBOL_STR(omap_pcm_platform_register) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5cd5ab3b, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-omap";


MODULE_INFO(srcversion, "038C78AB7E83B88D6FAC8DA");
