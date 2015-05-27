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
	{ 0xf7235f5d, __VMLINUX_SYMBOL_STR(ovs_vport_ops_unregister) },
	{ 0xd71de211, __VMLINUX_SYMBOL_STR(ovs_vport_ops_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6535cfbc, __VMLINUX_SYMBOL_STR(ovs_vport_deferred_free) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x560f687d, __VMLINUX_SYMBOL_STR(ovs_vport_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6579a3bc, __VMLINUX_SYMBOL_STR(gre_cisco_register) },
	{ 0xcfb7d837, __VMLINUX_SYMBOL_STR(gre_cisco_unregister) },
	{ 0xda83411d, __VMLINUX_SYMBOL_STR(ovs_net_id) },
	{ 0xc59895e7, __VMLINUX_SYMBOL_STR(ovs_vport_receive) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe2afe35a, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x7c16914f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xaa19b5e4, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x69bef1e2, __VMLINUX_SYMBOL_STR(gre_build_header) },
	{ 0xbd53c2c2, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x6ba03f14, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4f7d2512, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc51ca40b, __VMLINUX_SYMBOL_STR(ovs_tunnel_get_egress_info) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch,gre";


MODULE_INFO(srcversion, "D08C24379B0649FC4BEA688");
