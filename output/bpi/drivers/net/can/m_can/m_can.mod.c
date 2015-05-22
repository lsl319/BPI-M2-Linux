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
	{ 0xa5e00fc6, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xd27258dd, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x1c9b9056, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xc7b7334b, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x4dc5a4fb, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x6827fdaa, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x5b3364e1, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x222c295a, __VMLINUX_SYMBOL_STR(can_len2dlc) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4da6f35c, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x8da4b169, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x60cd52f9, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xd4ee9c98, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0xf1fcc3fd, __VMLINUX_SYMBOL_STR(platform_get_irq_byname) },
	{ 0x85eccd25, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x22a180bd, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0xcd41c085, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xaadc0acb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xb346573b, __VMLINUX_SYMBOL_STR(can_dlc2len) },
	{ 0x7862114f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xb6d90f99, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0xe5cf0370, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0x40395c86, __VMLINUX_SYMBOL_STR(alloc_canfd_skb) },
	{ 0xe02aa551, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0x768c08f8, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x990f8e7e, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x91ce949, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x87f32fc0, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x6167fc32, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0x6a0ba3ec, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9e11b861, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf1f2f3c4, __VMLINUX_SYMBOL_STR(netif_device_attach) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cbosch,m_can*");

MODULE_INFO(srcversion, "B80638F53DAA758FC8C6AC0");
