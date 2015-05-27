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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2b7fe0c6, __VMLINUX_SYMBOL_STR(nfc_hci_send_event) },
	{ 0x6e91328e, __VMLINUX_SYMBOL_STR(nfc_dep_link_is_up) },
	{ 0x82fc5dc0, __VMLINUX_SYMBOL_STR(nfc_targets_found) },
	{ 0x2f82182a, __VMLINUX_SYMBOL_STR(nfc_hci_set_param) },
	{ 0x30413454, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x269eb6aa, __VMLINUX_SYMBOL_STR(nfc_hci_allocate_device) },
	{ 0x34ab4300, __VMLINUX_SYMBOL_STR(nfc_tm_activated) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa8024d04, __VMLINUX_SYMBOL_STR(nfc_hci_get_clientdata) },
	{ 0x6d30371e, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x9854b19d, __VMLINUX_SYMBOL_STR(nfc_set_remote_general_bytes) },
	{ 0x53f59fa4, __VMLINUX_SYMBOL_STR(nfc_hci_register_device) },
	{ 0xef881d94, __VMLINUX_SYMBOL_STR(nfc_get_local_general_bytes) },
	{ 0x41f32c22, __VMLINUX_SYMBOL_STR(nfc_hci_free_device) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbca0b4fd, __VMLINUX_SYMBOL_STR(nfc_hci_sak_to_protocol) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe2e56798, __VMLINUX_SYMBOL_STR(nfc_hci_unregister_device) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x43028a27, __VMLINUX_SYMBOL_STR(nfc_hci_result_to_errno) },
	{ 0x9b25ea35, __VMLINUX_SYMBOL_STR(nfc_tm_data_received) },
	{ 0x3771b461, __VMLINUX_SYMBOL_STR(crc_ccitt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x611fe9b4, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd_async) },
	{ 0x88317b75, __VMLINUX_SYMBOL_STR(nfc_hci_get_param) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x620f8c5, __VMLINUX_SYMBOL_STR(nfc_hci_set_clientdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hci,nfc,crc-ccitt";


MODULE_INFO(srcversion, "901EA6A40E62AA384CD24BA");
