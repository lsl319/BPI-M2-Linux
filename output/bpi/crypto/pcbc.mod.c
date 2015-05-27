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
	{ 0x1a1180d7, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x30f7f86e, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xda1c2b83, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0xbf85ea71, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x1e1a5bc8, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x130b5c37, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x6329036e, __VMLINUX_SYMBOL_STR(crypto_alloc_instance) },
	{ 0xedfa4710, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0x3f4acc31, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x8623aef0, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe73fd572, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BF678C83E1DB32FBCE1DA45");
