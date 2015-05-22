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
	{ 0x26a2c816, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x881e81d8, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x1f6bfcaf, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7b38c532, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x17dec626, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaa6c7d62, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x8628620d, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x97aa672c, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc2acc033, __VMLINUX_SYMBOL_STR(hex_dump_to_buffer) },
	{ 0xc96ae9bd, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x39b024bd, __VMLINUX_SYMBOL_STR(bio_map_kern) },
	{ 0x4d2c666a, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2f84249f, __VMLINUX_SYMBOL_STR(blk_end_request) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x6aaf6d52, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0x21b48c5a, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "954E8DBC6F7956FA8DE81B8");
