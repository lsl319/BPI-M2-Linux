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
	{ 0x4efe03e5, __VMLINUX_SYMBOL_STR(usb_serial_generic_unthrottle) },
	{ 0xfd364a9f, __VMLINUX_SYMBOL_STR(usb_serial_generic_throttle) },
	{ 0xd21287ea, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0xd8767c14, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc94e47d9, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xa49fc517, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v16CAp1502d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4A8205C71C1BF09689E6A9C");
