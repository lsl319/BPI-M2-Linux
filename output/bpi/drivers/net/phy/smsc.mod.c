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
	{ 0x97c3cce5, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0xf0d3bbda, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x51a662eb, __VMLINUX_SYMBOL_STR(genphy_suspend) },
	{ 0x64f759ab, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0xaf834634, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa4a4ea25, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0x9798bc0c, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd584442c, __VMLINUX_SYMBOL_STR(mdiobus_read) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:0000000000000111110000001010????");
MODULE_ALIAS("mdio:0000000000000111110000001011????");
MODULE_ALIAS("mdio:0000000000000111110000001100????");
MODULE_ALIAS("mdio:0000000000000111110000001101????");
MODULE_ALIAS("mdio:0000000000000111110000001111????");

MODULE_INFO(srcversion, "66A2DA1558E7BD9996D1B82");
