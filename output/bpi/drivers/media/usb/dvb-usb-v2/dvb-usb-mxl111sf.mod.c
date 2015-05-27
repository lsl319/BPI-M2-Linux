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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfe7cc947, __VMLINUX_SYMBOL_STR(dvb_usbv2_generic_rw) },
	{ 0x54bde144, __VMLINUX_SYMBOL_STR(tveeprom_hauppauge_analog) },
	{ 0xb7792708, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x747b6a42, __VMLINUX_SYMBOL_STR(dvb_usbv2_resume) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x99264b49, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e16da5b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x3b1457e8, __VMLINUX_SYMBOL_STR(dvb_usbv2_probe) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x93f3937d, __VMLINUX_SYMBOL_STR(tveeprom_read) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x11fd3045, __VMLINUX_SYMBOL_STR(dvb_usbv2_disconnect) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x57e448d8, __VMLINUX_SYMBOL_STR(dvb_usbv2_suspend) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xeaf48d4d, __VMLINUX_SYMBOL_STR(dvb_usbv2_generic_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb_usb_v2,tveeprom";

MODULE_ALIAS("usb:v2040pC600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC603d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC604d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC609d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC60Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC60Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC60Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC653d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC65Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB703d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB753d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB763d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB764d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD853d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD854d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD863d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD864d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8D4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8E3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8E4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD8FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC61Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC61Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB757d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB767d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D2D254D262C801598B7FB21");
