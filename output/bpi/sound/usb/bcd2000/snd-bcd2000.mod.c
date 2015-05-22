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
	{ 0xef66075c, __VMLINUX_SYMBOL_STR(usb_wait_anchor_empty_timeout) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x236df666, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0xe53eeb6d, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0xe60cb618, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9a2acdf5, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4d73b09c, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x25dfecb7, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x3ff40d2b, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x53a9bb6b, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xb2343ac5, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0x8f84ba74, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi";

MODULE_ALIAS("usb:v1397p00BDd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F49FF44C4CCC88FAA00B635");
