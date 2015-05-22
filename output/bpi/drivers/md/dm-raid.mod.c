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
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xe2bbbbc5, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0x7401de17, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0xae6917d1, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xcb5fbdd4, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x3f9f1f9e, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x28814031, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x47ef5972, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0xb8555fe1, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xd43e8913, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x9cac2d09, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x999c0363, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0xb692d705, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0xa6bb78a7, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0xf173070a, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x734b8561, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0x9c1c8390, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x568bc38a, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0xd4890701, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0xf7c4faf4, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0xc0b255db, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x3ed659b6, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xb1958ac9, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb2eaa4f7, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0xc48c9d08, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xd75f42b2, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0x118a5e56, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod,raid456";


MODULE_INFO(srcversion, "7F3394753AC06D99214E6FC");
