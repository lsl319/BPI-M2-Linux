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
	{ 0xcb1757f3, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x68d41a8c, __VMLINUX_SYMBOL_STR(crypto_nivaead_type) },
	{ 0x80e08027, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0x3f4acc31, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x8623aef0, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xf40b2297, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0x1f6bfcaf, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2334c823, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x30241fe6, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xbcc4227b, __VMLINUX_SYMBOL_STR(scatterwalk_done) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0xebd9651b, __VMLINUX_SYMBOL_STR(scatterwalk_map) },
	{ 0x86f90bcc, __VMLINUX_SYMBOL_STR(scatterwalk_start) },
	{ 0xd9364184, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x501f1937, __VMLINUX_SYMBOL_STR(crypto_aead_type) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xcd00a54e, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0xcb6506fd, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x130b5c37, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x6ae39c7f, __VMLINUX_SYMBOL_STR(crypto_alg_mod_lookup) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe73fd572, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "581C0DD558C3B077F61D595");
