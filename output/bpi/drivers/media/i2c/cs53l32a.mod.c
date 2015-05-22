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
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x84dd4498, __VMLINUX_SYMBOL_STR(v4l2_subdev_querymenu) },
	{ 0x3a2c8d27, __VMLINUX_SYMBOL_STR(v4l2_subdev_try_ext_ctrls) },
	{ 0xbcb814c4, __VMLINUX_SYMBOL_STR(v4l2_subdev_s_ext_ctrls) },
	{ 0x3a865b92, __VMLINUX_SYMBOL_STR(v4l2_subdev_g_ext_ctrls) },
	{ 0xa21fe2a8, __VMLINUX_SYMBOL_STR(v4l2_subdev_s_ctrl) },
	{ 0x6df715a6, __VMLINUX_SYMBOL_STR(v4l2_subdev_g_ctrl) },
	{ 0x594be1c5, __VMLINUX_SYMBOL_STR(v4l2_subdev_queryctrl) },
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x6802f14f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xbf1d3501, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xf1a083f2, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbe5accc3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_log_status) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4288b3ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xeed9caa, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x47afd5c3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x8866261d, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:cs53l32a");

MODULE_INFO(srcversion, "A3241C8E47E7F9E5E27E36A");
