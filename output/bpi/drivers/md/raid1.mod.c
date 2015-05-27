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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe0a8acb0, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xd63318c4, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xcad1126f, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xcffcdcca, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0xeebbe214, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x68b13b9c, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0xa4b9a16f, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x758a7e5e, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0xfa43fe1b, __VMLINUX_SYMBOL_STR(bio_copy_data) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x3ed659b6, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x3852a637, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6c985ebe, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xaf133f2d, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x6ffc084b, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x7b5c0c2c, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0xd473d5cb, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0xae6917d1, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xb1958ac9, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0xec5dfc26, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x604a0c67, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x94b878cf, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x52d0f344, __VMLINUX_SYMBOL_STR(md_allow_write) },
	{ 0x6e427445, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0xec9e820e, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0x6e9539bd, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x42835186, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x2c11de1, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x144e230d, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xccacc25d, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x31abbb0a, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x4c9714d5, __VMLINUX_SYMBOL_STR(bio_alloc_pages) },
	{ 0x881e81d8, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x23460471, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
	{ 0x9de22122, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x1e3f641d, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xd41636b3, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x694b38c, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0xe70a8ccc, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xea4fddaa, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0x80486fdc, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xb98ab314, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x1e5c2b9f, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xde217028, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x692af37e, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8628620d, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xd2260e3, __VMLINUX_SYMBOL_STR(md_is_badblock) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x55747e2e, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xc6c66764, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x45b28038, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x92777c56, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xc48c9d08, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x3f9f1f9e, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcb5fbdd4, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x43473b07, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xb8555fe1, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "D70CBAC5A31AEC340230A7B");
