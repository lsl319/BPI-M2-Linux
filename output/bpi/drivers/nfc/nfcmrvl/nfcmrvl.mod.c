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
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7e3ed767, __VMLINUX_SYMBOL_STR(nci_recv_frame) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x57be8b0f, __VMLINUX_SYMBOL_STR(nci_set_config) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf974b60a, __VMLINUX_SYMBOL_STR(nci_unregister_device) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x36e5c954, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x5eb347f0, __VMLINUX_SYMBOL_STR(nci_register_device) },
	{ 0xf6553e6, __VMLINUX_SYMBOL_STR(nci_allocate_device) },
	{ 0x1014f26a, __VMLINUX_SYMBOL_STR(nci_free_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nci";


MODULE_INFO(srcversion, "D05073189A5E1F329592278");
