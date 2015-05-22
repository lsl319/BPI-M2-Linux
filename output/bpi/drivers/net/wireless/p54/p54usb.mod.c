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
	{ 0x531f374b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8cea458a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x5239ee62, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x787a1683, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x5b4184f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x39b0d99a, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x30413454, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2456c0ed, __VMLINUX_SYMBOL_STR(p54_rx) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x1c505ccd, __VMLINUX_SYMBOL_STR(p54_register_common) },
	{ 0x5093f0ad, __VMLINUX_SYMBOL_STR(p54_read_eeprom) },
	{ 0x3a8a66cd, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x539eaa5d, __VMLINUX_SYMBOL_STR(p54_parse_firmware) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x88a5249a, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2f8865a6, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x922124ef, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x4cbb26f6, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x26d1c315, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x16c80bd8, __VMLINUX_SYMBOL_STR(p54_free_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfbc1718a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x121bf381, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x8f84ba74, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xe91f604a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3d49972d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x29edba3, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xd439ae50, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x930e3b1, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x19f9551a, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x1811616a, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa9b7c115, __VMLINUX_SYMBOL_STR(p54_init_common) },
	{ 0x916c4814, __VMLINUX_SYMBOL_STR(p54_free_common) },
	{ 0xd0f1ee48, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xeb4ed746, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x665b74bb, __VMLINUX_SYMBOL_STR(p54_unregister_common) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x3f47ddfc, __VMLINUX_SYMBOL_STR(ieee80211_restart_hw) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=p54common,mac80211";

MODULE_ALIAS("usb:v0411p0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00C2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p0A11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0675p0530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06B9p0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap5501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09AAp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6826d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v107Bp55F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1630p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v182Dp096Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3703d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3762d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5041p2234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5041p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p1230d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06A9p000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06B9p0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0803p4310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4521d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4531d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApC501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0915p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0915p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp0118d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep3762d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1260pEE22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1413p5400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0427d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3705d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp5513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8104d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E377F6059A9D72EEC9E6A61");
