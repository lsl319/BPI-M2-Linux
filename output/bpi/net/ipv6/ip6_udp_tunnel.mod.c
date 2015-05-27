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
	{ 0x81ca3885, __VMLINUX_SYMBOL_STR(udp6_set_csum) },
	{ 0xf6e15016, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x1ef15386, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x518d49e, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0x36a01b7f, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x95b044f4, __VMLINUX_SYMBOL_STR(sk_release_kernel) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x60a7c55c, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8e302e85, __VMLINUX_SYMBOL_STR(ip6_local_out) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "06444079651666FCA9E3CB0");
