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
	{ 0xeb7b51c2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x992710fd, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x985abc9b, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x52b5cb10, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xc95d734e, __VMLINUX_SYMBOL_STR(wl12xx_get_platform_data) },
	{ 0x4b67269f, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefb6275c, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x219a0ab8, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xeb182862, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xa9c6a3d8, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xe8461e15, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x25b92de6, __VMLINUX_SYMBOL_STR(platform_device_add_resources) },
	{ 0x46ac1859, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0xa155e69e, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x6f1e97f2, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x2695cdfe, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0x8b72b1c1, __VMLINUX_SYMBOL_STR(mmc_power_save_host) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xf57d9401, __VMLINUX_SYMBOL_STR(mmc_power_restore_host) },
	{ 0x4ea4d0fa, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdaa6416a, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xb30da5d5, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xcd9f0de9, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x534b0b84, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x2e16935e, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x78455f0d, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe26cf89a, __VMLINUX_SYMBOL_STR(platform_device_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v0097d4076*");

MODULE_INFO(srcversion, "D53D25230D50BE2CD24499D");
