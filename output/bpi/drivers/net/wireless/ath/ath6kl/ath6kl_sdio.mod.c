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
	{ 0xc8cf82ec, __VMLINUX_SYMBOL_STR(ath6kl_core_destroy) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2334c823, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x44392bc2, __VMLINUX_SYMBOL_STR(ath6kl_hif_intr_bh_handler) },
	{ 0x2ddac770, __VMLINUX_SYMBOL_STR(ath6kl_core_cleanup) },
	{ 0x1f6bfcaf, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x91cfb84a, __VMLINUX_SYMBOL_STR(ath6kl_hif_rw_comp_handler) },
	{ 0x50752bc0, __VMLINUX_SYMBOL_STR(ath6kl_core_create) },
	{ 0x992710fd, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x985abc9b, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xba87b523, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xa01d44cf, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x51e77c97, __VMLINUX_SYMBOL_STR(pfn_valid) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4b67269f, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xef38f2fc, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0xcb014460, __VMLINUX_SYMBOL_STR(ath6kl_err) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa6f66cc1, __VMLINUX_SYMBOL_STR(ath6kl_warn) },
	{ 0x76f6c5ef, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa5b9fd1f, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3a6f7e72, __VMLINUX_SYMBOL_STR(ath6kl_cfg80211_suspend) },
	{ 0xa9c6a3d8, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xe8461e15, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xa155e69e, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xafb75f1, __VMLINUX_SYMBOL_STR(ath6kl_cfg80211_resume) },
	{ 0x963798d0, __VMLINUX_SYMBOL_STR(ath6kl_stop_txrx) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x86e50aa0, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x77bd2337, __VMLINUX_SYMBOL_STR(ath6kl_core_init) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4ea4d0fa, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xdaa6416a, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xb30da5d5, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xcd9f0de9, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x534b0b84, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x2e16935e, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x78455f0d, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath6kl_core";

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
MODULE_ALIAS("sdio:c*v0271d0400*");
MODULE_ALIAS("sdio:c*v0271d0401*");
MODULE_ALIAS("sdio:c*v0271d0402*");

MODULE_INFO(srcversion, "15A69FC872D1678C52F9570");
