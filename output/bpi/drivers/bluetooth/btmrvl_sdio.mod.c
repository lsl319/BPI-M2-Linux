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
	{ 0xe8461e15, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdaa6416a, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd0f1ee48, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xdfcc44b7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x534b0b84, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xba87b523, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x16d11756, __VMLINUX_SYMBOL_STR(btmrvl_register_hdev) },
	{ 0xb50515a1, __VMLINUX_SYMBOL_STR(btmrvl_add_card) },
	{ 0x985abc9b, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x78e53a83, __VMLINUX_SYMBOL_STR(btmrvl_check_evtpkt) },
	{ 0xe14033ea, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x2e9826cb, __VMLINUX_SYMBOL_STR(btmrvl_process_event) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x36e5c954, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xfe8fcc25, __VMLINUX_SYMBOL_STR(dev_coredumpv) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x6f1e97f2, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x992710fd, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa9c6a3d8, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x92308f6e, __VMLINUX_SYMBOL_STR(btmrvl_interrupt) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x65efef91, __VMLINUX_SYMBOL_STR(btmrvl_send_module_cfg_cmd) },
	{ 0x6d2a47d5, __VMLINUX_SYMBOL_STR(btmrvl_remove_card) },
	{ 0x2e16935e, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x86e50aa0, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x47aee1f9, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x78455f0d, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xc5501401, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0xcd9f0de9, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xa155e69e, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xcfa5b2d1, __VMLINUX_SYMBOL_STR(btmrvl_enable_hs) },
	{ 0xe61930e3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xcc9a599, __VMLINUX_SYMBOL_STR(hci_suspend_dev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xe0c531cf, __VMLINUX_SYMBOL_STR(hci_resume_dev) },
	{ 0x4b67269f, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");

MODULE_INFO(srcversion, "457B9325E30BE56DEB65ED6");
