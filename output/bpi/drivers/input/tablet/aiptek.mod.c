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
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xdc33240f, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xdd7ab7ec, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xfe783f31, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xae13964c, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6f91586d, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x6379f2a6, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x79f39947, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x249ae52, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2f7cbd82, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x382aef34, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x74c3107f, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v08CAp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p5003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A011515626B67CB5D3EAEFA");
