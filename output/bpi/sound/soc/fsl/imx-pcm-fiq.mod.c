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
	{ 0xfd8c5afc, __VMLINUX_SYMBOL_STR(release_fiq) },
	{ 0xa0888520, __VMLINUX_SYMBOL_STR(snd_soc_unregister_platform) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9c01eaab, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x7345e219, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x74e46dac, __VMLINUX_SYMBOL_STR(imx_ssi_fiq_tx_buffer) },
	{ 0x5b04be5a, __VMLINUX_SYMBOL_STR(disable_fiq) },
	{ 0x2faa2bb5, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x18fef9cb, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0xe06f1b2, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x186cd02d, __VMLINUX_SYMBOL_STR(snd_soc_set_runtime_hwparams) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x79fa1deb, __VMLINUX_SYMBOL_STR(imx_ssi_fiq_rx_buffer) },
	{ 0x908abccb, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0xab7603e7, __VMLINUX_SYMBOL_STR(imx_ssi_fiq_start) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xb367c984, __VMLINUX_SYMBOL_STR(mxc_set_irq_fiq) },
	{ 0x2d833725, __VMLINUX_SYMBOL_STR(xen_dma_ops) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8c2483e5, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x72a8f8d, __VMLINUX_SYMBOL_STR(__set_fiq_regs) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa0aae687, __VMLINUX_SYMBOL_STR(imx_ssi_fiq_end) },
	{ 0xf9a74ba2, __VMLINUX_SYMBOL_STR(snd_soc_register_platform) },
	{ 0x78779c0b, __VMLINUX_SYMBOL_STR(set_fiq_handler) },
	{ 0x428d4cf0, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0xba4ae097, __VMLINUX_SYMBOL_STR(enable_fiq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0x9178e54c, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x3197aae5, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x37ebe7f, __VMLINUX_SYMBOL_STR(dma_common_mmap) },
	{ 0x7567d381, __VMLINUX_SYMBOL_STR(__get_fiq_regs) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x1ee95a, __VMLINUX_SYMBOL_STR(imx_ssi_fiq_base) },
	{ 0x21f7eb8f, __VMLINUX_SYMBOL_STR(claim_fiq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "208DA3EDB22C76AC3726F1F");
