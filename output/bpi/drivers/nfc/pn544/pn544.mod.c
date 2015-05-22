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
	{ 0x2b7fe0c6, __VMLINUX_SYMBOL_STR(nfc_hci_send_event) },
	{ 0x6e91328e, __VMLINUX_SYMBOL_STR(nfc_dep_link_is_up) },
	{ 0x2f82182a, __VMLINUX_SYMBOL_STR(nfc_hci_set_param) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x269eb6aa, __VMLINUX_SYMBOL_STR(nfc_hci_allocate_device) },
	{ 0x80524e51, __VMLINUX_SYMBOL_STR(nfc_find_se) },
	{ 0x34ab4300, __VMLINUX_SYMBOL_STR(nfc_tm_activated) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa8024d04, __VMLINUX_SYMBOL_STR(nfc_hci_get_clientdata) },
	{ 0x6d30371e, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x9854b19d, __VMLINUX_SYMBOL_STR(nfc_set_remote_general_bytes) },
	{ 0x40ef3838, __VMLINUX_SYMBOL_STR(nfc_hci_target_discovered) },
	{ 0x53f59fa4, __VMLINUX_SYMBOL_STR(nfc_hci_register_device) },
	{ 0xef881d94, __VMLINUX_SYMBOL_STR(nfc_get_local_general_bytes) },
	{ 0x41f32c22, __VMLINUX_SYMBOL_STR(nfc_hci_free_device) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe2e56798, __VMLINUX_SYMBOL_STR(nfc_hci_unregister_device) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9b25ea35, __VMLINUX_SYMBOL_STR(nfc_tm_data_received) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x43ec291e, __VMLINUX_SYMBOL_STR(nfc_add_se) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x611fe9b4, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd_async) },
	{ 0x88317b75, __VMLINUX_SYMBOL_STR(nfc_hci_get_param) },
	{ 0x620f8c5, __VMLINUX_SYMBOL_STR(nfc_hci_set_clientdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hci,nfc";


MODULE_INFO(srcversion, "B773B608E06FBE4A5966BD3");
