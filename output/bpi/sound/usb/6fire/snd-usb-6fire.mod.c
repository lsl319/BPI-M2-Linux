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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7345e219, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xe9fdd47f, __VMLINUX_SYMBOL_STR(usb_init_urb) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0xe48f612e, __VMLINUX_SYMBOL_STR(snd_pcm_stop_xrun) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x236df666, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe53eeb6d, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0xe60cb618, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0xa443ebc4, __VMLINUX_SYMBOL_STR(_snd_ctl_add_slave) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x76f6c5ef, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6b878b7c, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x2e16da5b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x55fa50fc, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_stereo_info) },
	{ 0x9a2acdf5, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xd80467b4, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0xe3b5ddfb, __VMLINUX_SYMBOL_STR(usb_poison_urb) },
	{ 0x249ae52, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c2483e5, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x45bb4fc4, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x4d73b09c, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x68130a8e, __VMLINUX_SYMBOL_STR(snd_ctl_make_virtual_master) },
	{ 0x7f209251, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3d49972d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x88aa31b7, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x5239ee62, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xdfcc44b7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x25dfecb7, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x3ff40d2b, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x513dfd1c, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xd813d0f4, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x84049918, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x53a9bb6b, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit) },
	{ 0xd0f1ee48, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xb2343ac5, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi";

MODULE_ALIAS("usb:v0CCDp0080d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9DBBDEB3D4109A287B1AAA7");
