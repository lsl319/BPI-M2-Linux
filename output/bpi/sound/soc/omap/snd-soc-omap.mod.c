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
	{ 0xf7154813, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_set_config_from_dai_data) },
	{ 0x2faa2bb5, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x18fef9cb, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0x186cd02d, __VMLINUX_SYMBOL_STR(snd_soc_set_runtime_hwparams) },
	{ 0xfb3f7e22, __VMLINUX_SYMBOL_STR(snd_hwparams_to_dma_slave_config) },
	{ 0x49253b, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_pointer) },
	{ 0x9f51933c, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_open_request_chan) },
	{ 0x32c6ffd6, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_open) },
	{ 0x89a8f0de, __VMLINUX_SYMBOL_STR(dma_request_slave_channel) },
	{ 0x2d833725, __VMLINUX_SYMBOL_STR(xen_dma_ops) },
	{ 0x8c2483e5, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x5d1903fe, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_platform) },
	{ 0x692e3c56, __VMLINUX_SYMBOL_STR(omap_dma_filter_fn) },
	{ 0x5e2734b3, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_get_chan) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0x9178e54c, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x13b5ebe7, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_trigger) },
	{ 0x37ebe7f, __VMLINUX_SYMBOL_STR(dma_common_mmap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xbcd300d3, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_close_release_chan) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BE6DE6B7D0E53EAB1E0454D");
