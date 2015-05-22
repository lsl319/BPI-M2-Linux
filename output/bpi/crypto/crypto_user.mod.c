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
	{ 0x95368dba, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0xad8a5656, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2366dd6a, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x284b5ac4, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x36e5c954, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x30413454, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa3911b87, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xaa21bdae, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa113754b, __VMLINUX_SYMBOL_STR(crypto_lookup_skcipher) },
	{ 0x130b5c37, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x75d1f1be, __VMLINUX_SYMBOL_STR(crypto_lookup_aead) },
	{ 0x6ae39c7f, __VMLINUX_SYMBOL_STR(crypto_alg_mod_lookup) },
	{ 0x75816696, __VMLINUX_SYMBOL_STR(crypto_unregister_instance) },
	{ 0x3de9cae1, __VMLINUX_SYMBOL_STR(crypto_remove_final) },
	{ 0xe9e2e456, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xb7c32872, __VMLINUX_SYMBOL_STR(crypto_remove_spawns) },
	{ 0x5e11492d, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x971f4dfb, __VMLINUX_SYMBOL_STR(netlink_capable) },
	{ 0x4037d245, __VMLINUX_SYMBOL_STR(crypto_alg_sem) },
	{ 0x457594fa, __VMLINUX_SYMBOL_STR(crypto_alg_list) },
	{ 0x9c9c932b, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd26dd355, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x22a5efae, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x463fc8de, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "39788E9CB4C43B47CC81094");
