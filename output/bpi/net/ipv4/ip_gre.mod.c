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
	{ 0x41bfecd9, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0xea253174, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x2497111, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xf784f95b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xab9e0f41, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x5bcc4cf6, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x851bb5, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x1534dc11, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xcfb7d837, __VMLINUX_SYMBOL_STR(gre_cisco_unregister) },
	{ 0xa1f6d8c9, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x7288adf, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x6579a3bc, __VMLINUX_SYMBOL_STR(gre_cisco_register) },
	{ 0xe715f622, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8b4c61c5, __VMLINUX_SYMBOL_STR(ip_mc_inc_group) },
	{ 0xe2afe35a, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x4f7d2512, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xc0dd27ad, __VMLINUX_SYMBOL_STR(ip_mc_dec_group) },
	{ 0xbf8ec59d, __VMLINUX_SYMBOL_STR(inetdev_by_index) },
	{ 0xef4d7e62, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0xda90569c, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xd5c763f, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x1dc8edad, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x7f197567, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x22a5efae, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc5d65ec5, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6ba03f14, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbd53c2c2, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x5d5a3290, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x69bef1e2, __VMLINUX_SYMBOL_STR(gre_build_header) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x888d791, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc4cd7818, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xcac6b238, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc2d650c3, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xe0eef7b2, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gre";


MODULE_INFO(srcversion, "D538ACBF6EEB677212C40C8");
