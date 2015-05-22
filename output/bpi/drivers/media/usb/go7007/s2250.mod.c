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
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x47afd5c3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x6802f14f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcaf73880, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subdev_log_status) },
	{ 0xb46c7698, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x99264b49, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x249ae52, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xccec1afa, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x8866261d, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbf1d3501, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf1a083f2, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:s2250");

MODULE_INFO(srcversion, "3BE588743DCB0D9A1B97F61");
