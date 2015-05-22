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
	{ 0xd31ccb06, __VMLINUX_SYMBOL_STR(of_machine_is_compatible) },
	{ 0x91a55cf3, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0xd3385742, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x48a5b067, __VMLINUX_SYMBOL_STR(__machine_arch_type) },
	{ 0x6752d1de, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x2e47e34e, __VMLINUX_SYMBOL_STR(snd_soc_jack_new) },
	{ 0x89d50587, __VMLINUX_SYMBOL_STR(snd_soc_dapm_info_pin_switch) },
	{ 0x35d9f2f8, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_pin_switch) },
	{ 0x3c7e296f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x84129cf5, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x911bcb50, __VMLINUX_SYMBOL_STR(__devm_gpiod_get) },
	{ 0x6c9c3d9d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x8a547ad9, __VMLINUX_SYMBOL_STR(snd_soc_dapm_nc_pin) },
	{ 0x332520f8, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xc616a3f8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeee410dc, __VMLINUX_SYMBOL_STR(tpa6130a2_stereo_enable) },
	{ 0x340aea32, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin_unlocked) },
	{ 0x4980c3cc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1fb68dcd, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_pin_switch) },
	{ 0x1187c6e6, __VMLINUX_SYMBOL_STR(tpa6130a2_add_controls) },
	{ 0x5d877981, __VMLINUX_SYMBOL_STR(snd_soc_dapm_enable_pin_unlocked) },
	{ 0xc6c2382d, __VMLINUX_SYMBOL_STR(devm_gpiod_put) },
	{ 0x1977f078, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xc3d4a1b7, __VMLINUX_SYMBOL_STR(omap_mcbsp_st_add_controls) },
	{ 0x3874ab48, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync_unlocked) },
	{ 0xb30b7a6c, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x98950b67, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0x1353ea67, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x5443d9a0, __VMLINUX_SYMBOL_STR(snd_soc_limit_volume) },
	{ 0x938a8dd7, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0x2d69c214, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xdd1c6e3e, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0xa1f08311, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-tpa6130a2,snd-soc-omap-mcbsp";

MODULE_ALIAS("of:N*T*Cnokia,n900-audio*");

MODULE_INFO(srcversion, "4C348DADE1BCCC1D6145744");
