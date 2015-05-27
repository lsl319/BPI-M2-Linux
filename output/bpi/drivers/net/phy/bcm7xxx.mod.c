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
	{ 0xa4a4ea25, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0x64f759ab, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0xaf834634, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0x97c3cce5, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdc0183a6, __VMLINUX_SYMBOL_STR(phy_write_mmd_indirect) },
	{ 0x9782cabc, __VMLINUX_SYMBOL_STR(phy_read_mmd_indirect) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xd584442c, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0x9798bc0c, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:1010111000000010010100101000????");
MODULE_ALIAS("mdio:1010111000000010010100100110????");
MODULE_ALIAS("mdio:0110000000001101100001001001????");
MODULE_ALIAS("mdio:0000001101100010010111100110????");
MODULE_ALIAS("mdio:0110000000001101100001110011????");
MODULE_ALIAS("mdio:0110000000001101100001001000????");
MODULE_ALIAS("mdio:0110000000001101100001010001????");
MODULE_ALIAS("mdio:0110000000001101????????????????");
MODULE_ALIAS("mdio:000000110110001001011110????????");

MODULE_INFO(srcversion, "61CF26281430CA7BB228061");
