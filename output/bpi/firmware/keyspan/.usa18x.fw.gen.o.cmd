cmd_firmware/keyspan/usa18x.fw.gen.o := arm-linux-gnueabihf-gcc -Wp,-MD,firmware/keyspan/.usa18x.fw.gen.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabihf/4.6/include -I/home/pi/kernel/linux-4.0.2/arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -I/home/pi/kernel/linux-4.0.2/include -Iinclude -I/home/pi/kernel/linux-4.0.2/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/pi/kernel/linux-4.0.2/include/uapi -Iinclude/generated/uapi -include /home/pi/kernel/linux-4.0.2/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float   -c -o firmware/keyspan/usa18x.fw.gen.o firmware/keyspan/usa18x.fw.gen.S

source_firmware/keyspan/usa18x.fw.gen.o := firmware/keyspan/usa18x.fw.gen.S

deps_firmware/keyspan/usa18x.fw.gen.o := \
  /home/pi/kernel/linux-4.0.2/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

firmware/keyspan/usa18x.fw.gen.o: $(deps_firmware/keyspan/usa18x.fw.gen.o)

$(deps_firmware/keyspan/usa18x.fw.gen.o):
