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
	{ 0xd21287ea, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0xd8767c14, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x66d793ed, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x73267afb, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x5239ee62, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x249ae52, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xc94e47d9, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xa49fc517, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0C2Ep0720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C2Ep0700d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5B82B8560C44D876CE124C1");
