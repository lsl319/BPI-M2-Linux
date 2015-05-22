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
	{ 0x740710d, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x1b5b3082, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xc5cf098a, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x81e5f806, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xfffb82f5, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x641815f7, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0xfe402748, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0x34820bf8, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0x3f9f1f9e, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x31abbb0a, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x6d20d905, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x3ed659b6, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xb8555fe1, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x3527e5ac, __VMLINUX_SYMBOL_STR(af_alg_cmsg_send) },
	{ 0x26f61896, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x33ef08bd, __VMLINUX_SYMBOL_STR(crypto_alloc_ablkcipher) },
	{ 0x8623aef0, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xfe8d1407, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x9b624352, __VMLINUX_SYMBOL_STR(sock_kzfree_s) },
	{ 0x65282c27, __VMLINUX_SYMBOL_STR(af_alg_complete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x70e5e881, __VMLINUX_SYMBOL_STR(sock_wake_async) },
	{ 0x2babe81f, __VMLINUX_SYMBOL_STR(__wake_up_sync_key) },
	{ 0x66f594c0, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x51125a8, __VMLINUX_SYMBOL_STR(af_alg_free_sg) },
	{ 0xd954ef95, __VMLINUX_SYMBOL_STR(af_alg_wait_for_completion) },
	{ 0x94dbae49, __VMLINUX_SYMBOL_STR(af_alg_make_sg) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xf702e6ff, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0xcb5fbdd4, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x2334c823, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x67bd0ab0, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xb4b48f0b, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x6cec3f2f, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";


MODULE_INFO(srcversion, "4FFDCA785AF46B331FAAC2B");
