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
	{ 0x63a28e59, __VMLINUX_SYMBOL_STR(s5h1420_get_tuner_i2c_adapter) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe52e3c9, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x50f40715, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xbfae3c1f, __VMLINUX_SYMBOL_STR(cx24113_agc_callback) },
	{ 0x82c0ca34, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xca43c3c4, __VMLINUX_SYMBOL_STR(cx24123_get_tuner_i2c_adapter) },
	{ 0x6c59077a, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc25bfb8f, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x78fd7d14, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xd4cadb2e, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xe9b5c095, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x99264b49, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x604e3d88, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0x25b04fbf, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x3a6e010c, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x50f878b9, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd151c6ba, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_packets) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6c31986b, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xdfcc44b7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x59dc8dee, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=s5h1420,cx24113,cx24123";


MODULE_INFO(srcversion, "C97F4F10969B5A566604E41");
