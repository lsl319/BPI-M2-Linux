cmd_arch/arm/boot/dts/hisi-x5hd2-dkb.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.hisi-x5hd2-dkb.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.hisi-x5hd2-dkb.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/hisi-x5hd2-dkb.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/hisi-x5hd2-dkb.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.hisi-x5hd2-dkb.dtb.d.dtc.tmp arch/arm/boot/dts/.hisi-x5hd2-dkb.dtb.dts.tmp ; cat arch/arm/boot/dts/.hisi-x5hd2-dkb.dtb.d.pre.tmp arch/arm/boot/dts/.hisi-x5hd2-dkb.dtb.d.dtc.tmp > arch/arm/boot/dts/.hisi-x5hd2-dkb.dtb.d

source_arch/arm/boot/dts/hisi-x5hd2-dkb.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/hisi-x5hd2-dkb.dts

deps_arch/arm/boot/dts/hisi-x5hd2-dkb.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/hisi-x5hd2.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/hix5hd2-clock.h \

arch/arm/boot/dts/hisi-x5hd2-dkb.dtb: $(deps_arch/arm/boot/dts/hisi-x5hd2-dkb.dtb)

$(deps_arch/arm/boot/dts/hisi-x5hd2-dkb.dtb):
