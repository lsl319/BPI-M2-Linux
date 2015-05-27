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
	{ 0x523d87a5, __VMLINUX_SYMBOL_STR(blkdev_fsync) },
	{ 0xff56484c, __VMLINUX_SYMBOL_STR(blkdev_write_iter) },
	{ 0x7f7e3381, __VMLINUX_SYMBOL_STR(blkdev_read_iter) },
	{ 0x86c06416, __VMLINUX_SYMBOL_STR(new_sync_write) },
	{ 0xc1ab82ff, __VMLINUX_SYMBOL_STR(new_sync_read) },
	{ 0xc377a64d, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x4e05855c, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xce0e5eaf, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x27f90f08, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x33a620d7, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x6902e629, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xa9428540, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xcd9d3d12, __VMLINUX_SYMBOL_STR(blkdev_ioctl) },
	{ 0xf38128ca, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xc57ff866, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x2931ad39, __VMLINUX_SYMBOL_STR(bdget) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d57f314, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x834d3d3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xf0cafcc9, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xe1d564e4, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0x3dbbd2c2, __VMLINUX_SYMBOL_STR(blkdev_get) },
	{ 0xa28e0cba, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x78f13246, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8BB1C8481366BDB17146AB6");
