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
	{ 0x7365470f, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0xd611cde5, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xbb4ec48d, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x203d8eb5, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xd17b6379, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x5ae001d9, __VMLINUX_SYMBOL_STR(blk_mq_unique_tag) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xde8b37c0, __VMLINUX_SYMBOL_STR(virtqueue_notify) },
	{ 0x1e419a9f, __VMLINUX_SYMBOL_STR(virtqueue_kick_prepare) },
	{ 0x9fc6dd93, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0xd4034828, __VMLINUX_SYMBOL_STR(system_freezable_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4e1893ec, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xf1320649, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x6e8eb1aa, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xd907698b, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x7afaf2d4, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xba418721, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x1fe9f800, __VMLINUX_SYMBOL_STR(unregister_cpu_notifier) },
	{ 0xd3a36dd7, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0xc065d91c, __VMLINUX_SYMBOL_STR(scsi_rescan_device) },
	{ 0x887a3bf7, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x89dc8b76, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xbec00190, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x28d6b6f3, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbfdf9c70, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x8b43159b, __VMLINUX_SYMBOL_STR(register_cpu_notifier) },
	{ 0xd991d22f, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xbbb56793, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0x4a112df8, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x81f3afb, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb153bb8a, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2887c910, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0x8cb89207, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0xf231ee3b, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x32c2ad1c, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x2d37342e, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000008v*");

MODULE_INFO(srcversion, "72DBC0413E4D9AC34D6328E");
