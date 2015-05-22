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
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xec360f26, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x4c6962ec, __VMLINUX_SYMBOL_STR(v4l2_ctrl_cluster) },
	{ 0x5777e3f7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0xb221c15a, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0x6802f14f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xbf1d3501, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xf1a083f2, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xeed9caa, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb7792708, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x4288b3ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x47afd5c3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x8866261d, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:ov7670");
MODULE_ALIAS("i2c:ov7675");

MODULE_INFO(srcversion, "5348A4AD8422F1A8A186477");
