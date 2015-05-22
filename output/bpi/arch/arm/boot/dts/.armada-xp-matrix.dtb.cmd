cmd_arch/arm/boot/dts/armada-xp-matrix.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.armada-xp-matrix.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.armada-xp-matrix.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/armada-xp-matrix.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/armada-xp-matrix.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.armada-xp-matrix.dtb.d.dtc.tmp arch/arm/boot/dts/.armada-xp-matrix.dtb.dts.tmp ; cat arch/arm/boot/dts/.armada-xp-matrix.dtb.d.pre.tmp arch/arm/boot/dts/.armada-xp-matrix.dtb.d.dtc.tmp > arch/arm/boot/dts/.armada-xp-matrix.dtb.d

source_arch/arm/boot/dts/armada-xp-matrix.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/armada-xp-matrix.dts

deps_arch/arm/boot/dts/armada-xp-matrix.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/armada-xp-mv78460.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/armada-xp.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/armada-370-xp.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton64.dtsi \

arch/arm/boot/dts/armada-xp-matrix.dtb: $(deps_arch/arm/boot/dts/armada-xp-matrix.dtb)

$(deps_arch/arm/boot/dts/armada-xp-matrix.dtb):
