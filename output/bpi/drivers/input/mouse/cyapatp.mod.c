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
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xdf3b53ec, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3e98bf60, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x4288b3ce, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf5b4a948, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0x47f343c, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x3521fa10, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xbf40735c, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0x69de3476, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0xeed9caa, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xb7792708, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x769f3b94, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x52b5cb10, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x382aef34, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x99bbca9, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x6379f2a6, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x79f39947, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x99264b49, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdd7ab7ec, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfb6eedf9, __VMLINUX_SYMBOL_STR(power_group_name) },
	{ 0x5bdb6435, __VMLINUX_SYMBOL_STR(sysfs_merge_group) },
	{ 0x97cb5fdc, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0xdb945146, __VMLINUX_SYMBOL_STR(sysfs_unmerge_group) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x7d3e4955, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xe232cf47, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0x9ad74300, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0x8e5135a4, __VMLINUX_SYMBOL_STR(i2c_smbus_read_block_data) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xa4e10cc1, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xdc33240f, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0xf59efeff, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xb733c8dd, __VMLINUX_SYMBOL_STR(pm_wakeup_event) },
	{ 0xd8361a, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xc17a2f6f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x74c3107f, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x93291920, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xcf23ef6e, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xdfcc44b7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xb4e30d83, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0xba3af13, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x786a7c34, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x455d98d6, __VMLINUX_SYMBOL_STR(i2c_smbus_write_i2c_block_data) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xdb533ab0, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xd0f1ee48, __VMLINUX_SYMBOL_STR(release_firmware) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crc-itu-t";

MODULE_ALIAS("i2c:cyapa");

MODULE_INFO(srcversion, "C0210EFB533F417E0D3D591");
