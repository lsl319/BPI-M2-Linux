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
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x17642eaf, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0xdf3b53ec, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x50c6d5b9, __VMLINUX_SYMBOL_STR(gpiochip_add) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xdb533ab0, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xb23bef0e, __VMLINUX_SYMBOL_STR(__irq_domain_add) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xd8361a, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x7ceaf0d5, __VMLINUX_SYMBOL_STR(generic_handle_irq) },
	{ 0x857042b6, __VMLINUX_SYMBOL_STR(irq_find_mapping) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x50458f8e, __VMLINUX_SYMBOL_STR(irq_create_mapping) },
	{ 0x6cc78c5c, __VMLINUX_SYMBOL_STR(set_irq_flags) },
	{ 0xe016d0f, __VMLINUX_SYMBOL_STR(irq_set_chip_and_handler_name) },
	{ 0x1cdad841, __VMLINUX_SYMBOL_STR(handle_level_irq) },
	{ 0xe16c1c37, __VMLINUX_SYMBOL_STR(dummy_irq_chip) },
	{ 0x4319e82f, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbb68e861, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0x324d6f7d, __VMLINUX_SYMBOL_STR(irq_domain_remove) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:pcf8574");
MODULE_ALIAS("i2c:pcf8574a");
MODULE_ALIAS("i2c:pca8574");
MODULE_ALIAS("i2c:pca9670");
MODULE_ALIAS("i2c:pca9672");
MODULE_ALIAS("i2c:pca9674");
MODULE_ALIAS("i2c:pcf8575");
MODULE_ALIAS("i2c:pca8575");
MODULE_ALIAS("i2c:pca9671");
MODULE_ALIAS("i2c:pca9673");
MODULE_ALIAS("i2c:pca9675");
MODULE_ALIAS("i2c:max7328");
MODULE_ALIAS("i2c:max7329");
MODULE_ALIAS("i2c:tca9554");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574a*");
MODULE_ALIAS("of:N*T*Cnxp,pca8574*");
MODULE_ALIAS("of:N*T*Cnxp,pca9670*");
MODULE_ALIAS("of:N*T*Cnxp,pca9672*");
MODULE_ALIAS("of:N*T*Cnxp,pca9674*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8575*");
MODULE_ALIAS("of:N*T*Cnxp,pca8575*");
MODULE_ALIAS("of:N*T*Cnxp,pca9671*");
MODULE_ALIAS("of:N*T*Cnxp,pca9673*");
MODULE_ALIAS("of:N*T*Cnxp,pca9675*");
MODULE_ALIAS("of:N*T*Cmaxim,max7328*");
MODULE_ALIAS("of:N*T*Cmaxim,max7329*");
MODULE_ALIAS("of:N*T*Cti,tca9554*");

MODULE_INFO(srcversion, "8D4CE7D7E3D6C2137B50628");
