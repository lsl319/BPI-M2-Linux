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
	{ 0x4b33e4fa, __VMLINUX_SYMBOL_STR(vb2_put_vma) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1f6bfcaf, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x3ed659b6, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x2faa2bb5, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x18fef9cb, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0x8ffe67ab, __VMLINUX_SYMBOL_STR(dma_buf_detach) },
	{ 0xf229d98a, __VMLINUX_SYMBOL_STR(set_page_dirty_lock) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x30241fe6, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x51e77c97, __VMLINUX_SYMBOL_STR(pfn_valid) },
	{ 0x5e4f746a, __VMLINUX_SYMBOL_STR(dma_buf_vunmap) },
	{ 0x33ec53ed, __VMLINUX_SYMBOL_STR(dma_common_get_sgtable) },
	{ 0x20a55719, __VMLINUX_SYMBOL_STR(follow_pfn) },
	{ 0x2d833725, __VMLINUX_SYMBOL_STR(xen_dma_ops) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xea3ac30f, __VMLINUX_SYMBOL_STR(vb2_get_vma) },
	{ 0x2a5b70ce, __VMLINUX_SYMBOL_STR(dma_buf_unmap_attachment) },
	{ 0x4d60b3d1, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x8faabbb9, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbf7eecc8, __VMLINUX_SYMBOL_STR(dma_buf_map_attachment) },
	{ 0xa2d21ead, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x11896b52, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0xbc14f502, __VMLINUX_SYMBOL_STR(dma_buf_attach) },
	{ 0xa2617937, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xfeaec76d, __VMLINUX_SYMBOL_STR(vb2_common_vm_ops) },
	{ 0xcb5fbdd4, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x71455f5, __VMLINUX_SYMBOL_STR(sg_alloc_table_from_pages) },
	{ 0xe741310b, __VMLINUX_SYMBOL_STR(dma_buf_export_named) },
	{ 0x37ebe7f, __VMLINUX_SYMBOL_STR(dma_common_mmap) },
	{ 0x144f6e7a, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xea101599, __VMLINUX_SYMBOL_STR(dma_buf_vmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A502A96030493F5B5B74CAA");
