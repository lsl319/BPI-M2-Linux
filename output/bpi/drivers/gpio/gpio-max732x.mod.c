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
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb46c7698, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0x50c6d5b9, __VMLINUX_SYMBOL_STR(gpiochip_add) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4319e82f, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x17642eaf, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xccec1afa, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xbb68e861, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:max7319");
MODULE_ALIAS("i2c:max7320");
MODULE_ALIAS("i2c:max7321");
MODULE_ALIAS("i2c:max7322");
MODULE_ALIAS("i2c:max7323");
MODULE_ALIAS("i2c:max7324");
MODULE_ALIAS("i2c:max7325");
MODULE_ALIAS("i2c:max7326");
MODULE_ALIAS("i2c:max7327");
MODULE_ALIAS("of:N*T*Cmaxim,max7319*");
MODULE_ALIAS("of:N*T*Cmaxim,max7320*");
MODULE_ALIAS("of:N*T*Cmaxim,max7321*");
MODULE_ALIAS("of:N*T*Cmaxim,max7322*");
MODULE_ALIAS("of:N*T*Cmaxim,max7323*");
MODULE_ALIAS("of:N*T*Cmaxim,max7324*");
MODULE_ALIAS("of:N*T*Cmaxim,max7325*");
MODULE_ALIAS("of:N*T*Cmaxim,max7326*");
MODULE_ALIAS("of:N*T*Cmaxim,max7327*");

MODULE_INFO(srcversion, "A45AF83529E4D8FFD232DB4");
