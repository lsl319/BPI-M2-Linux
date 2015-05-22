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
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xbc7d1f9c, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x17c6d48d, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x25b04fbf, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x59dc8dee, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0xe52e3c9, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x82c0ca34, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x6c31986b, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2c07258a, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x1c71a0f7, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xa656fd1, __VMLINUX_SYMBOL_STR(em28xx_alloc_urbs) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x648f8974, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x50f40715, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xd4cadb2e, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x6c59077a, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x3a6e010c, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0xe9b5c095, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xc25bfb8f, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0xccec1afa, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x834d3d3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x99ca1909, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x5fa34357, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0xd52a50e8, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0xeb44bf12, __VMLINUX_SYMBOL_STR(em28xx_write_reg_bits) },
	{ 0x663aa6c2, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0x2e16da5b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb661bedd, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdf3b53ec, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xbb7444d0, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0x7677d4b9, __VMLINUX_SYMBOL_STR(em28xx_gpio_set) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0xb036b727, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x604e3d88, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx";


MODULE_INFO(srcversion, "231D0C66605888D7CEF22A1");
