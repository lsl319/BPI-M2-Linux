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
	{ 0xc95538d0, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x2dd36c1b, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x75abf89f, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x2bdf1b04, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xe61404da, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xc17cf7c5, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xfd9867bc, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x740710d, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xc5cf098a, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x81e5f806, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xfffb82f5, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x641815f7, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0xfe402748, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0x34820bf8, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0xa87e94f1, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x8623aef0, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x179a43d0, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x9b624352, __VMLINUX_SYMBOL_STR(sock_kzfree_s) },
	{ 0x65282c27, __VMLINUX_SYMBOL_STR(af_alg_complete) },
	{ 0xf702e6ff, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x67bd0ab0, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfe8d1407, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x5241217f, __VMLINUX_SYMBOL_STR(af_alg_accept) },
	{ 0x94dbae49, __VMLINUX_SYMBOL_STR(af_alg_make_sg) },
	{ 0x66f594c0, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x51125a8, __VMLINUX_SYMBOL_STR(af_alg_free_sg) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf91a7566, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0xa3616ec4, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3f210e8b, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0xb4b48f0b, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xd954ef95, __VMLINUX_SYMBOL_STR(af_alg_wait_for_completion) },
	{ 0x2adcf8fa, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0x2334c823, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x6cec3f2f, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";


MODULE_INFO(srcversion, "416617E5B7DCF4E15A449FE");
