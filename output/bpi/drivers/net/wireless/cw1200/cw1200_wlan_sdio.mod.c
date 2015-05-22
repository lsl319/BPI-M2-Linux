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
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x85466dc7, __VMLINUX_SYMBOL_STR(cw1200_irq_handler) },
	{ 0x985abc9b, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xba87b523, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xa9e9decc, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x277fe7ae, __VMLINUX_SYMBOL_STR(cw1200_core_release) },
	{ 0xdb58c8ec, __VMLINUX_SYMBOL_STR(cw1200_can_suspend) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xada6d2db, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xe8461e15, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x46ac1859, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0xa155e69e, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x86e50aa0, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x39230d9a, __VMLINUX_SYMBOL_STR(sdio_align_size) },
	{ 0x6f1e97f2, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x4ea4d0fa, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc17350cb, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdaa6416a, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xb30da5d5, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xcd9f0de9, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x1a0b17d5, __VMLINUX_SYMBOL_STR(cw1200_core_probe) },
	{ 0x2e16935e, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x78455f0d, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cw1200_core";


MODULE_INFO(srcversion, "88E63095F3619F5BA39AAB2");
