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
	{ 0xd611cde5, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x4a0f46e3, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8df7e99c, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x107e5878, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0x4265579c, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x324b7b04, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0x6a35da20, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x3ed659b6, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x5d2a82a3, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x3a6f0aba, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x856afed9, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x9c2b08e8, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xfb2f8a4, __VMLINUX_SYMBOL_STR(mktime64) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa2a23528, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x8e3961db, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0xcee3dadd, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x63a024ca, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb8555fe1, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x7a3bf975, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x72f80c4f, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb6fcf2f1, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xd627480b, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0x8667f8ce, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7630072b, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xeebbe214, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x75667d3a, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x62d091cd, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x63da05d4, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0x61f76d2f, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x427a7c05, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xeb724467, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x3f9f1f9e, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x581f98da, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0xbbff8758, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x31abbb0a, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x68b13b9c, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xdc4baa70, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xf386da1c, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0xd3e7cc4e, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x49910cdd, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf4fbc38e, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x203d8eb5, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xfcdf45be, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x35a88f28, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xb2c4ca6d, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x737def2c, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x61b98264, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xbd860670, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xbc0bba6c, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xcb5fbdd4, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xaff14331, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xad0a31ff, __VMLINUX_SYMBOL_STR(ioctl_by_bdev) },
	{ 0x9f3a672e, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x16a87cfe, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x6f296be1, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x8bba5088, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F199F6A60A36962371DB026");
