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
	{ 0xd616f03b, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x648af39f, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd991f93, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x47afd5c3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x6802f14f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xe8192ece, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7bc88636, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xbd9a6017, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x319364f3, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xd2142e4b, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xec360f26, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x86c24da7, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0xbf1d3501, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xf657b1db, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x4649baed, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4486C88A786EC1B1F225C30");
