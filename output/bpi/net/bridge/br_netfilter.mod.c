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
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1b5e5249, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xe2afe35a, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x674c73d7, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0xe7a664c4, __VMLINUX_SYMBOL_STR(nf_hooks) },
	{ 0xd03d3a32, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x76ff6bd5, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0xc01452a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa7623a3f, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xad8a5656, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xc1c9b896, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xe9a9b853, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0xf8a60893, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5e687e5e, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x4f7d2512, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3d41d930, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x1ece098, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x32dd6b07, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0x903b8cf1, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FFCA49EB7AB1E96DA710FDF");
