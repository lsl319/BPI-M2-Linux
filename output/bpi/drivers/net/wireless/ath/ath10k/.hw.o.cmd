cmd_drivers/net/wireless/ath/ath10k/hw.o := arm-linux-gnueabihf-gcc -Wp,-MD,drivers/net/wireless/ath/ath10k/.hw.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabihf/4.6/include -I/home/pi/kernel/linux-4.0.2/arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -I/home/pi/kernel/linux-4.0.2/include -Iinclude -I/home/pi/kernel/linux-4.0.2/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/pi/kernel/linux-4.0.2/include/uapi -Iinclude/generated/uapi -include /home/pi/kernel/linux-4.0.2/include/linux/kconfig.h  -I/home/pi/kernel/linux-4.0.2/drivers/net/wireless/ath/ath10k -Idrivers/net/wireless/ath/ath10k -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -O2 -Wframe-larger-than=1024 -fstack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(hw)"  -D"KBUILD_MODNAME=KBUILD_STR(ath10k_core)" -c -o drivers/net/wireless/ath/ath10k/.tmp_hw.o /home/pi/kernel/linux-4.0.2/drivers/net/wireless/ath/ath10k/hw.c

source_drivers/net/wireless/ath/ath10k/hw.o := /home/pi/kernel/linux-4.0.2/drivers/net/wireless/ath/ath10k/hw.c

deps_drivers/net/wireless/ath/ath10k/hw.o := \
  /home/pi/kernel/linux-4.0.2/include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/types.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/types.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/int-ll64.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  /home/pi/kernel/linux-4.0.2/include/asm-generic/bitsperlong.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/bitsperlong.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/posix_types.h \
  /home/pi/kernel/linux-4.0.2/include/linux/stddef.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/linux/stddef.h \
  /home/pi/kernel/linux-4.0.2/include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  /home/pi/kernel/linux-4.0.2/include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/uapi/asm/posix_types.h \
  /home/pi/kernel/linux-4.0.2/include/uapi/asm-generic/posix_types.h \
  /home/pi/kernel/linux-4.0.2/drivers/net/wireless/ath/ath10k/hw.h \
    $(wildcard include/config/mask.h) \
    $(wildcard include/config/offset.h) \
    $(wildcard include/config/bidir/od/data/lsb.h) \
    $(wildcard include/config/bidir/od/data/mask.h) \
    $(wildcard include/config/i2c/lsb.h) \
    $(wildcard include/config/i2c/mask.h) \
    $(wildcard include/config/pos/sample/lsb.h) \
    $(wildcard include/config/pos/sample/mask.h) \
    $(wildcard include/config/inactive/data/lsb.h) \
    $(wildcard include/config/inactive/data/mask.h) \
    $(wildcard include/config/inactive/clk/lsb.h) \
    $(wildcard include/config/inactive/clk/mask.h) \
    $(wildcard include/config/divider/lsb.h) \
    $(wildcard include/config/divider/mask.h) \
  /home/pi/kernel/linux-4.0.2/drivers/net/wireless/ath/ath10k/targaddrs.h \

drivers/net/wireless/ath/ath10k/hw.o: $(deps_drivers/net/wireless/ath/ath10k/hw.o)

$(deps_drivers/net/wireless/ath/ath10k/hw.o):