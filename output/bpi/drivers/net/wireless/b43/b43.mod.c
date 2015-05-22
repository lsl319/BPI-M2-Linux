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
	{ 0x3243d37d, __VMLINUX_SYMBOL_STR(bcma_core_pci_down) },
	{ 0xd6c100f, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x8eb0c11f, __VMLINUX_SYMBOL_STR(ssb_dma_translation) },
	{ 0xba13187e, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xa290c2c6, __VMLINUX_SYMBOL_STR(bcma_pmu_spuravoid_pllupdate) },
	{ 0x1f6bfcaf, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8573510c, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x177ccdc8, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x2faa2bb5, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x18fef9cb, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0x985abc9b, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x640ff023, __VMLINUX_SYMBOL_STR(bcma_core_pci_irq_ctl) },
	{ 0xba87b523, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x776ca824, __VMLINUX_SYMBOL_STR(ieee80211_rts_get) },
	{ 0xfb1e3b48, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x980a24f9, __VMLINUX_SYMBOL_STR(ssb_commit_settings) },
	{ 0x3291e8da, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x80fe9d2c, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x7c16914f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4a8907de, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x73e3b6c1, __VMLINUX_SYMBOL_STR(ssb_bus_powerup) },
	{ 0x808c561d, __VMLINUX_SYMBOL_STR(ssb_bus_sdiobus_register) },
	{ 0x1934df38, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x5e110469, __VMLINUX_SYMBOL_STR(__ieee80211_get_assoc_led_name) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb5b02b8f, __VMLINUX_SYMBOL_STR(__ssb_driver_register) },
	{ 0xb71871f6, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x2f8865a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x70c5de9a, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x6963ce89, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd0e1e11d, __VMLINUX_SYMBOL_STR(ssb_driver_unregister) },
	{ 0x57ded534, __VMLINUX_SYMBOL_STR(ssb_chipco_gpio_control) },
	{ 0x2d833725, __VMLINUX_SYMBOL_STR(xen_dma_ops) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc264ef6f, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0xd262f5e8, __VMLINUX_SYMBOL_STR(bcma_core_pci_up) },
	{ 0x220316cf, __VMLINUX_SYMBOL_STR(bcma_core_dma_translation) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xce58a9b7, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xc135468c, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x9b0d776a, __VMLINUX_SYMBOL_STR(ssb_device_enable) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2a280b21, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2bf36ef2, __VMLINUX_SYMBOL_STR(bcma_core_set_clockmode) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x9df24beb, __VMLINUX_SYMBOL_STR(__bcma_driver_register) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4a048590, __VMLINUX_SYMBOL_STR(ieee80211_ctstoself_get) },
	{ 0x29edba3, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x1aa80d81, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xd5416608, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xe8461e15, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x922124ef, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x48362f98, __VMLINUX_SYMBOL_STR(bcma_chipco_gpio_control) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x10803162, __VMLINUX_SYMBOL_STR(__ieee80211_get_rx_led_name) },
	{ 0xda91578a, __VMLINUX_SYMBOL_STR(bcma_core_is_enabled) },
	{ 0xdb74259a, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_voltage) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xd981d682, __VMLINUX_SYMBOL_STR(ssb_device_disable) },
	{ 0x675aa6fb, __VMLINUX_SYMBOL_STR(bcma_core_enable) },
	{ 0x86e50aa0, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x72c2956a, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xb17e63e9, __VMLINUX_SYMBOL_STR(bcma_driver_unregister) },
	{ 0x1e2b8118, __VMLINUX_SYMBOL_STR(bcma_core_pll_ctl) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0x6d137fd5, __VMLINUX_SYMBOL_STR(__ieee80211_get_tx_led_name) },
	{ 0xc5889045, __VMLINUX_SYMBOL_STR(ssb_set_devtypedata) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf084d054, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x81072811, __VMLINUX_SYMBOL_STR(ieee80211_generic_frame_duration) },
	{ 0x606eee82, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x52162f23, __VMLINUX_SYMBOL_STR(ssb_bus_unregister) },
	{ 0x21275951, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xc1ce4f73, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0x9178e54c, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xdfcc44b7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x1ee40b25, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x2431f73a, __VMLINUX_SYMBOL_STR(ssb_bus_may_powerdown) },
	{ 0x753ca2f0, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xdaa6416a, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xf33b89e, __VMLINUX_SYMBOL_STR(ssb_pcicore_dev_irqvecs_enable) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xcd9f0de9, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x218bb102, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_paref) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x18aef9dc, __VMLINUX_SYMBOL_STR(ssb_device_is_enabled) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x3cee6550, __VMLINUX_SYMBOL_STR(bcma_core_disable) },
	{ 0x534b0b84, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xd0f1ee48, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x1a0fdd25, __VMLINUX_SYMBOL_STR(ssb_pmu_spuravoid_pllupdate) },
	{ 0x5c28cca5, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_p1k_iv) },
	{ 0x8492a430, __VMLINUX_SYMBOL_STR(ieee80211_get_response_rate) },
	{ 0x2e16935e, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x78455f0d, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bcma,ssb,mac80211,cfg80211";

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "D082472EED04C0534D4D5E9");
