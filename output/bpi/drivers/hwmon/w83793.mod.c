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
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xc5dd40a0, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x1995a3e9, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x605b80b1, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xef1c781c, __VMLINUX_SYMBOL_STR(vid_which_vrm) },
	{ 0x289342af, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0x28120529, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0xccec1afa, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xba13187e, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xd5416608, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xb46c7698, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe534bc09, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bbca9, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x9bfa4353, __VMLINUX_SYMBOL_STR(dev_crit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x28118cb6, __VMLINUX_SYMBOL_STR(__get_user_1) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x903c239, __VMLINUX_SYMBOL_STR(vid_from_reg) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeed9caa, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4288b3ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon-vid,hwmon";

MODULE_ALIAS("i2c:w83793");

MODULE_INFO(srcversion, "B59D317C831F2626F14A342");
