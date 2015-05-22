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
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xae13964c, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x8018e3fc, __VMLINUX_SYMBOL_STR(ttusbdecfe_dvbs_attach) },
	{ 0xabdfe236, __VMLINUX_SYMBOL_STR(ttusbdecfe_dvbt_attach) },
	{ 0xdc33240f, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x6f91586d, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2e16da5b, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x82c0ca34, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x25b04fbf, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x59dc8dee, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0xe52e3c9, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x6c31986b, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xd0f1ee48, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xdfcc44b7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xfe783f31, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x76f6c5ef, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf826deb0, __VMLINUX_SYMBOL_STR(dvb_filter_pes2ts) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x74a5a698, __VMLINUX_SYMBOL_STR(dvb_filter_pes2ts_init) },
	{ 0x79f39947, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3d49972d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x99264b49, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x74c3107f, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x50f40715, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x6c59077a, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x3a6e010c, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0xe9b5c095, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xc25bfb8f, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdc8e014, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x2f7cbd82, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x2faa2bb5, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x2d833725, __VMLINUX_SYMBOL_STR(xen_dma_ops) },
	{ 0x18fef9cb, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ttusbdecfe";

MODULE_ALIAS("usb:v0B48p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1009d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8C575CF11DB611AE07E29DF");
