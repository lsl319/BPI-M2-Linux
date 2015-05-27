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
	{ 0x720084e, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0x27f90f08, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa9428540, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x871062cf, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xc17edb1, __VMLINUX_SYMBOL_STR(osd_sec_init_nosec_doall_caps) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x45d460ad, __VMLINUX_SYMBOL_STR(osd_dev_fini) },
	{ 0xbe7e42b7, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x26b0582d, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xb478f170, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x4e05855c, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x84609a19, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xe7878b32, __VMLINUX_SYMBOL_STR(osd_dev_init) },
	{ 0xc6254981, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x36659981, __VMLINUX_SYMBOL_STR(osd_auto_detect_ver) },
	{ 0x6902e629, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x89dc8b76, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa2d21ead, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2924858f, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x75f90776, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xf827f2d5, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0xa2617937, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xc66fa6a6, __VMLINUX_SYMBOL_STR(ida_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x423d81ed, __VMLINUX_SYMBOL_STR(ida_pre_get) },
	{ 0xebe72555, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x653e4302, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xbe974bcb, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x9a623142, __VMLINUX_SYMBOL_STR(ida_get_new_above) },
	{ 0x70303351, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd";


MODULE_INFO(srcversion, "55282F56E3DD7F1C9C206EA");
