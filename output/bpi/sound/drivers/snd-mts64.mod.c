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
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x236df666, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe60cb618, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0xd8ed935e, __VMLINUX_SYMBOL_STR(parport_unregister_driver) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa278460c, __VMLINUX_SYMBOL_STR(parport_unregister_device) },
	{ 0xefb6275c, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x219a0ab8, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xa183eb41, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_peek) },
	{ 0xeb182862, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xe8875459, __VMLINUX_SYMBOL_STR(parport_claim) },
	{ 0x63035339, __VMLINUX_SYMBOL_STR(parport_release) },
	{ 0x45bb4fc4, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x4d73b09c, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0x240eaa90, __VMLINUX_SYMBOL_STR(parport_register_driver) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x245e3b47, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_ack) },
	{ 0x2968f056, __VMLINUX_SYMBOL_STR(parport_register_device) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x88aa31b7, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x25dfecb7, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x3ff40d2b, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x84049918, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xb2343ac5, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0xe26cf89a, __VMLINUX_SYMBOL_STR(platform_device_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi,parport";


MODULE_INFO(srcversion, "01BBD2C9A395F582B26E152");
