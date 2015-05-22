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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcca27eeb, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x5e7f4920, __VMLINUX_SYMBOL_STR(snd_pcm_format_set_silence) },
	{ 0x7345e219, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc1942f, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x908abccb, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbb4c930e, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6b878b7c, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xa671c0df, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0xd80467b4, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xeb182862, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x8c2483e5, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x45bb4fc4, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0x4d73b09c, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5c6a30db, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0x7f209251, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x88aa31b7, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xf0fa5491, __VMLINUX_SYMBOL_STR(snd_pcm_stop) },
	{ 0x48a0745b, __VMLINUX_SYMBOL_STR(snd_card_proc_new) },
	{ 0x25dfecb7, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x3ff40d2b, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x513dfd1c, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd813d0f4, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x84049918, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "65034E42B02FA4FF82BC79B");
