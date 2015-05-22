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
	{ 0x7786e700, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_unregister) },
	{ 0x25b20ad9, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_prepare_slave_config) },
	{ 0xd8b37fb6, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F1A5E36EA07439150652AB7");
