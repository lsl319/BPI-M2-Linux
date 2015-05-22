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
	{ 0xde587b29, __VMLINUX_SYMBOL_STR(usb_serial_generic_get_icount) },
	{ 0x95af6d67, __VMLINUX_SYMBOL_STR(usb_serial_generic_tiocmiwait) },
	{ 0xd21287ea, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0xd8767c14, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x73267afb, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x35cf33c3, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x19f9551a, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xd0f1ee48, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x3d49972d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x76f6c5ef, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0xdfcc44b7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc7a8ba2c, __VMLINUX_SYMBOL_STR(usb_driver_set_configuration) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x99264b49, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x249ae52, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x990a7a9c, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x364c25ab, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0xb443d224, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc94e47d9, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xa49fc517, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc62bb99e, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0451p3410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451pF430d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF115d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0p0319d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p5052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p5152d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p505Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p505Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B3p4543d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B3p454Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B3p454Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A61p3410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A61p3420d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p5053d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9E0E7A275C430D39C13904D");
