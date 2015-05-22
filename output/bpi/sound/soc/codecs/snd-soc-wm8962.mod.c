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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xba13187e, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xeb7b51c2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0xeb711ae7, __VMLINUX_SYMBOL_STR(snd_soc_params_to_bclk) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd3393b7e, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xea124bd1, __VMLINUX_SYMBOL_STR(gcd) },
	{ 0x535afb5e, __VMLINUX_SYMBOL_STR(regmap_register_patch) },
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc23de616, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xd67f0809, __VMLINUX_SYMBOL_STR(regcache_cache_bypass) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x3f4316a6, __VMLINUX_SYMBOL_STR(regulator_register_notifier) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xb8f584d1, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x8e8c235e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xff6a1710, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4a8907de, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x52b5cb10, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x7a3017e3, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x5807f8f5, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x52a4e9d9, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xbb68e861, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0x8a547ad9, __VMLINUX_SYMBOL_STR(snd_soc_dapm_nc_pin) },
	{ 0xd29e263e, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0x171523db, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x332520f8, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x79f39947, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x63e91250, __VMLINUX_SYMBOL_STR(regulator_unregister_notifier) },
	{ 0x9c98add8, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xcd734d4e, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0xc3a73ae2, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xa18e28b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x340aea32, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin_unlocked) },
	{ 0x68388c61, __VMLINUX_SYMBOL_STR(snd_soc_bytes_info) },
	{ 0x50c6d5b9, __VMLINUX_SYMBOL_STR(gpiochip_add) },
	{ 0x9bfa4353, __VMLINUX_SYMBOL_STR(dev_crit) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xeaa9182c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x5f6c8623, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xd5416608, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8c8c1610, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0xc6c47d89, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xa4e10cc1, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xdc33240f, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x87e9d401, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x20f920e7, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0xb733c8dd, __VMLINUX_SYMBOL_STR(pm_wakeup_event) },
	{ 0xcd41c085, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x44ff7f70, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xd572fa6f, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin_unlocked) },
	{ 0x2156650c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xda15bd4c, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xbfcb320b, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x9eb7e709, __VMLINUX_SYMBOL_STR(snd_soc_bytes_get) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa8f76826, __VMLINUX_SYMBOL_STR(regcache_sync_region) },
	{ 0x93291920, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0x88d0fbf7, __VMLINUX_SYMBOL_STR(snd_soc_dapm_enable_pin) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x263cf0ee, __VMLINUX_SYMBOL_STR(snd_soc_bytes_put) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x56897fe9, __VMLINUX_SYMBOL_STR(snd_soc_jack_report) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x957107b6, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x6ad4434e, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xdb533ab0, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x3ed3be8, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x32645bfb, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x4d66883, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0xae5f1e2c, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x85a09022, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cwlf,wm8962*");
MODULE_ALIAS("i2c:wm8962");

MODULE_INFO(srcversion, "45D9CD61AE54625E3E1A31D");
