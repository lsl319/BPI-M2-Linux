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
	{ 0xb443d224, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x12635f31, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb9394173, __VMLINUX_SYMBOL_STR(irias_delete_value) },
	{ 0x91815586, __VMLINUX_SYMBOL_STR(irda_param_pack) },
	{ 0x7ad95aef, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcca27eeb, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xe523a833, __VMLINUX_SYMBOL_STR(tty_port_close_end) },
	{ 0x763e54a4, __VMLINUX_SYMBOL_STR(irlmp_unregister_client) },
	{ 0x8876ee0b, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xc1de5bf7, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x35b7ecb0, __VMLINUX_SYMBOL_STR(tty_hung_up_p) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x144e230d, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x8982c8d9, __VMLINUX_SYMBOL_STR(irias_delete_object) },
	{ 0x8afc06db, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x27ad9f34, __VMLINUX_SYMBOL_STR(tty_port_carrier_raised) },
	{ 0xba14ae3f, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x39fe0b7b, __VMLINUX_SYMBOL_STR(tty_port_close_start) },
	{ 0x3a92da38, __VMLINUX_SYMBOL_STR(ircomm_connect_response) },
	{ 0xc5744afc, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xf199cba4, __VMLINUX_SYMBOL_STR(irias_insert_object) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcba58c52, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x7b3851b, __VMLINUX_SYMBOL_STR(iriap_getvaluebyclass_request) },
	{ 0x7042bc54, __VMLINUX_SYMBOL_STR(irlmp_register_client) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8a44dd5e, __VMLINUX_SYMBOL_STR(hashbin_new) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6b76aa70, __VMLINUX_SYMBOL_STR(hashbin_delete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x63e5be82, __VMLINUX_SYMBOL_STR(ircomm_disconnect_request) },
	{ 0x6492e28c, __VMLINUX_SYMBOL_STR(hashbin_get_next) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x574313af, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2dca28bc, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x94a824db, __VMLINUX_SYMBOL_STR(irda_param_extract_all) },
	{ 0xa49fc517, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0xc5d2393c, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d3647c, __VMLINUX_SYMBOL_STR(irlmp_register_service) },
	{ 0x601782e2, __VMLINUX_SYMBOL_STR(ircomm_connect_request) },
	{ 0x61d413da, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x36e5c954, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf366eb0a, __VMLINUX_SYMBOL_STR(tty_driver_flush_buffer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb3c13d7f, __VMLINUX_SYMBOL_STR(irias_add_integer_attrib) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x37791344, __VMLINUX_SYMBOL_STR(hashbin_get_first) },
	{ 0xf16102b0, __VMLINUX_SYMBOL_STR(iriap_close) },
	{ 0xbe40ace9, __VMLINUX_SYMBOL_STR(irlmp_discovery_request) },
	{ 0x9bc6bf6a, __VMLINUX_SYMBOL_STR(tty_port_install) },
	{ 0x81bb3c3, __VMLINUX_SYMBOL_STR(irda_notify_init) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x56152d84, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x17a491c5, __VMLINUX_SYMBOL_STR(irias_add_octseq_attrib) },
	{ 0xac8cdd96, __VMLINUX_SYMBOL_STR(tty_hangup) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x11c70a94, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1ff99bef, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x1eefb014, __VMLINUX_SYMBOL_STR(ircomm_control_request) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x7f2a1be4, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x79dd4a89, __VMLINUX_SYMBOL_STR(iriap_open) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7d38a4e2, __VMLINUX_SYMBOL_STR(ircomm_close) },
	{ 0x364c25ab, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x91f32337, __VMLINUX_SYMBOL_STR(ircomm_open) },
	{ 0xc94e47d9, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xbfa7c08d, __VMLINUX_SYMBOL_STR(hashbin_lock_find) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x46c1c4a2, __VMLINUX_SYMBOL_STR(irlmp_unregister_service) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x7e67ca6e, __VMLINUX_SYMBOL_STR(irias_new_object) },
	{ 0xe23f28c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x94c04436, __VMLINUX_SYMBOL_STR(tty_port_tty_set) },
	{ 0x64412c51, __VMLINUX_SYMBOL_STR(ircomm_flow_request) },
	{ 0x77dca14d, __VMLINUX_SYMBOL_STR(ircomm_data_request) },
	{ 0x21411144, __VMLINUX_SYMBOL_STR(tty_port_raise_dtr_rts) },
	{ 0xde4c6b3c, __VMLINUX_SYMBOL_STR(irlmp_service_to_hint) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x990a7a9c, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x84978b6d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x731cec71, __VMLINUX_SYMBOL_STR(hashbin_insert) },
	{ 0x7f52a8bf, __VMLINUX_SYMBOL_STR(irda_param_insert) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=irda,ircomm";


MODULE_INFO(srcversion, "F003F126F0CC70B2C980955");
