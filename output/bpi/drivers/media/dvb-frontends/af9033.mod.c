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
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x4a8907de, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x5b19634d, __VMLINUX_SYMBOL_STR(div_s64_rem) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb7792708, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:af9033");

MODULE_INFO(srcversion, "04E6713C6A0DF6DAD69BD37");