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
	{ 0xf47dd479, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x4da6f35c, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x990f8e7e, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0xd4ee9c98, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0xaadc0acb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xe02aa551, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0x22021987, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x4dc5a4fb, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0x91ce949, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x6167fc32, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0xa5e00fc6, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0x6a0ba3ec, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0xe5cf0370, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7862114f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xd27258dd, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xc7b7334b, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x5b3364e1, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C51437D1A862557083D67A5");
