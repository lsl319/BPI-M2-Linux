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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe52e3c9, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x50f40715, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x82c0ca34, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x6c59077a, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc25bfb8f, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0xb1abb1bb, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xd4cadb2e, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6db565b4, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xe9b5c095, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x18dd0792, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x604e3d88, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0x25b04fbf, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x33469cc8, __VMLINUX_SYMBOL_STR(videobuf_read_start) },
	{ 0x3a6e010c, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xe7048bb0, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x6c31986b, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x2f60d385, __VMLINUX_SYMBOL_STR(videobuf_waiton) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xfd283e1d, __VMLINUX_SYMBOL_STR(videobuf_queue_to_vaddr) },
	{ 0xa3f5b1c4, __VMLINUX_SYMBOL_STR(videobuf_read_stop) },
	{ 0x59dc8dee, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core";


MODULE_INFO(srcversion, "4C862AF13411F103F8384E0");
