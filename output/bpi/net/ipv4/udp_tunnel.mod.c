#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6cec1955, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf6e15016, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x1ef15386, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x518d49e, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0xaa19b5e4, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x36a01b7f, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0xa5a3837a, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0x95b044f4, __VMLINUX_SYMBOL_STR(sk_release_kernel) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbde54345, __VMLINUX_SYMBOL_STR(udp_set_csum) },
	{ 0x60a7c55c, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CC5D3F9DEE59E739F0CA8AF");
