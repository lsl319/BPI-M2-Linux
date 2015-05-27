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
	{ 0x3b02199c, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x78594ec, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xf4c73d65, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0xa3e526fd, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x5a2c5aaa, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x8c30d244, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xd6a1e4ac, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x53e37fdf, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe122af95, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x179a43d0, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0xa87e94f1, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8623aef0, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xdbfc8a2, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0xc01452a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6ba03f14, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xdbd24495, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x1f6bfcaf, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3f210e8b, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x29ddf31d, __VMLINUX_SYMBOL_STR(skb_to_sgvec_nomark) },
	{ 0x2334c823, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd6c93e56, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "93F1E900966F6AD57596A02");
