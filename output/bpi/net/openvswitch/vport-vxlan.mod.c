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
	{ 0x22a5efae, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xc59895e7, __VMLINUX_SYMBOL_STR(ovs_vport_receive) },
	{ 0xbfc870ce, __VMLINUX_SYMBOL_STR(vxlan_sock_add) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x35d6f361, __VMLINUX_SYMBOL_STR(ovs_vport_free) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x560f687d, __VMLINUX_SYMBOL_STR(ovs_vport_alloc) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0x6535cfbc, __VMLINUX_SYMBOL_STR(ovs_vport_deferred_free) },
	{ 0xfccc8b4a, __VMLINUX_SYMBOL_STR(vxlan_sock_release) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe2afe35a, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x9b8aa4a, __VMLINUX_SYMBOL_STR(vxlan_xmit_skb) },
	{ 0x4f7d2512, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3301d6a6, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xc51ca40b, __VMLINUX_SYMBOL_STR(ovs_tunnel_get_egress_info) },
	{ 0xa7f2c1df, __VMLINUX_SYMBOL_STR(inet_get_local_port_range) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch,vxlan";


MODULE_INFO(srcversion, "D8DB15BB384C5620E8AEDD5");
