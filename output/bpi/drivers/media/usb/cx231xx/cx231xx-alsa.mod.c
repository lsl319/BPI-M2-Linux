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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x8081d383, __VMLINUX_SYMBOL_STR(is_fw_load) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x7345e219, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x34560abf, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0x66d793ed, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x908abccb, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0xa7b00a49, __VMLINUX_SYMBOL_STR(cx231xx_register_extension) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6b878b7c, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c2483e5, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x4d73b09c, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x9f5c52fc, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x6f72bda, __VMLINUX_SYMBOL_STR(cx231xx_capture_start) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd4a6b125, __VMLINUX_SYMBOL_STR(cx231xx_set_alt_setting) },
	{ 0x25dfecb7, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x3ff40d2b, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x513dfd1c, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x150a42fd, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xa5d83632, __VMLINUX_SYMBOL_STR(cx231xx_unregister_extension) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx";


MODULE_INFO(srcversion, "C34EE2A2F741F923D2A653C");
