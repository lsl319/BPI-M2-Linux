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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6cec1955, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x10f8f435, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7e9efe8e, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x1f6bfcaf, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xf1320649, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4e1893ec, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x3ed659b6, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x2faa2bb5, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x18fef9cb, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0x8e50529f, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x30241fe6, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x9e4a86bc, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x77a764a, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0xb1abb1bb, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x990ba3ca, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xed5afd60, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x2d833725, __VMLINUX_SYMBOL_STR(xen_dma_ops) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x76f6c5ef, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xeebbe214, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x28d6b6f3, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0xcdfebe6a, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x605a3bb9, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x7afaf2d4, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x68b13b9c, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1d6d2ef7, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x6c6cdd4d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xe7048bb0, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xa1c07473, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0xa02212d9, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd42d6ee9, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xd4c5f72, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0xe9f67304, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3c0ce751, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x767fc730, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0x174b6a26, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0xa88b5133, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xba418721, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x3b0b6930, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x6b3871df, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x5dcf6341, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x4c121e54, __VMLINUX_SYMBOL_STR(pci_save_state) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010ECd00005208sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005288sv*sd*bcFFsc*i*");

MODULE_INFO(srcversion, "26FB5C9BD3992484074239C");
