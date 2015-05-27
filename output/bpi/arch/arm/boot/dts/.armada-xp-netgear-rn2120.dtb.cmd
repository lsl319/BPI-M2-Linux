cmd_arch/arm/boot/dts/armada-xp-netgear-rn2120.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.armada-xp-netgear-rn2120.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.armada-xp-netgear-rn2120.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/armada-xp-netgear-rn2120.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/armada-xp-netgear-rn2120.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.armada-xp-netgear-rn2120.dtb.d.dtc.tmp arch/arm/boot/dts/.armada-xp-netgear-rn2120.dtb.dts.tmp ; cat arch/arm/boot/dts/.armada-xp-netgear-rn2120.dtb.d.pre.tmp arch/arm/boot/dts/.armada-xp-netgear-rn2120.dtb.d.dtc.tmp > arch/arm/boot/dts/.armada-xp-netgear-rn2120.dtb.d

source_arch/arm/boot/dts/armada-xp-netgear-rn2120.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/armada-xp-netgear-rn2120.dts

deps_arch/arm/boot/dts/armada-xp-netgear-rn2120.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/input/input.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/armada-xp-mv78230.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/armada-xp.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/armada-370-xp.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton64.dtsi \

arch/arm/boot/dts/armada-xp-netgear-rn2120.dtb: $(deps_arch/arm/boot/dts/armada-xp-netgear-rn2120.dtb)

$(deps_arch/arm/boot/dts/armada-xp-netgear-rn2120.dtb):
