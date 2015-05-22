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
	{ 0x8a490c90, __VMLINUX_SYMBOL_STR(rfkill_set_sw_state) },
	{ 0xf982d4b2, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x14bbb645, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7e5c5f7a, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x5dac7e96, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x8afcf5eb, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xa80c97c3, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x4cabed9, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0xb0f1d512, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb71871f6, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x91ce949, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdcd56eaa, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0x534c6f90, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0x97999817, __VMLINUX_SYMBOL_STR(rfkill_set_hw_state) },
	{ 0x22a5efae, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xad8a5656, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x51ef33b8, __VMLINUX_SYMBOL_STR(kstrndup) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x36e5c954, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xaad6d92f, __VMLINUX_SYMBOL_STR(rfkill_init_sw_state) },
	{ 0xec136ac5, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x35b36fb5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x32924ea6, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0xa1c36650, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5AA6D69221E5571C8300FB4");
