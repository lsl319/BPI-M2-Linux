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
	{ 0x454454a, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0xc5a9c5d8, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0x5f4434fc, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0xe1a7f1df, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x615bb2de, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0x3b02199c, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x78594ec, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xf4c73d65, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa3e526fd, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xd94af40c, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0x256f9162, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0x547ed665, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0xc7b3d5c, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x4479b5b9, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0xa7f69bb6, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0x5a2c5aaa, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x8c30d244, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xd6a1e4ac, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x53e37fdf, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm6_tunnel";


MODULE_INFO(srcversion, "46C1D87521CE8B31714C7AE");
