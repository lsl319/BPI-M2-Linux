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
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2ba60fa0, __VMLINUX_SYMBOL_STR(dvb_usb_generic_write) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6d1358eb, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0xa8215182, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xe366d67e, __VMLINUX_SYMBOL_STR(dib0070_wbd_offset) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x99264b49, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e16da5b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xccec1afa, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x834d3d3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3d49972d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x73267afb, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x62061e97, __VMLINUX_SYMBOL_STR(dvb_usb_generic_rw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdafec06a, __VMLINUX_SYMBOL_STR(usb_cypress_load_firmware) },
	{ 0x1c71a0f7, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x2c07258a, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb,dib0070";

MODULE_ALIAS("usb:v1660p0932d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB50d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB51d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB54d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB55d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB58d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB59d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB78d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB70d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB71d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA868d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB98d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p86D6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pD811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC688d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "69A177B56135B56F8DBEC6B");
