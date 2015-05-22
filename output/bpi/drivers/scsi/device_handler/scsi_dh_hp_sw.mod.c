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
	{ 0x3d94b34d, __VMLINUX_SYMBOL_STR(scsi_unregister_device_handler) },
	{ 0x133acf00, __VMLINUX_SYMBOL_STR(scsi_register_device_handler) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc96ae9bd, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0xaa6c7d62, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0xd17b6379, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x7b38c532, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x4d2c666a, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x26a2c816, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x21b48c5a, __VMLINUX_SYMBOL_STR(blk_get_request) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_dh";


MODULE_INFO(srcversion, "7782762E1BC40B853B6AF9F");
