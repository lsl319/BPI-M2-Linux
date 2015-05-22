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
	{ 0xb225bf0d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xa5e00fc6, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xf47dd479, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xb6d90f99, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x768c08f8, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0xe5cf0370, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaadc0acb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x8afcf5eb, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x5dac7e96, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x1c9b9056, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x22021987, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x990f8e7e, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x39036827, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0xc7b7334b, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0xcca27eeb, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xd27258dd, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4dc5a4fb, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x6827fdaa, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x2faa2bb5, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x2d833725, __VMLINUX_SYMBOL_STR(xen_dma_ops) },
	{ 0x18fef9cb, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x91ce949, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x5b3364e1, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7862114f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4da6f35c, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x60cd52f9, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xd4ee9c98, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0xe11c64a0, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x85eccd25, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x8f5d3eae, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x6167fc32, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0x20387ea3, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x2c7db649, __VMLINUX_SYMBOL_STR(irq_dispose_mapping) },
	{ 0x6a0ba3ec, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:NGAISLER_GRCANT*C*");
MODULE_ALIAS("of:N01_03dT*C*");
MODULE_ALIAS("of:NGAISLER_GRHCANT*C*");
MODULE_ALIAS("of:N01_034T*C*");

MODULE_INFO(srcversion, "9C967DE19FDEAE1919EBDE6");
