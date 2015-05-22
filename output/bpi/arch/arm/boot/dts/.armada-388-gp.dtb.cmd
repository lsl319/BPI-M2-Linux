cmd_arch/arm/boot/dts/armada-388-gp.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.armada-388-gp.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.armada-388-gp.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/armada-388-gp.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/armada-388-gp.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.armada-388-gp.dtb.d.dtc.tmp arch/arm/boot/dts/.armada-388-gp.dtb.dts.tmp ; cat arch/arm/boot/dts/.armada-388-gp.dtb.d.pre.tmp arch/arm/boot/dts/.armada-388-gp.dtb.d.dtc.tmp > arch/arm/boot/dts/.armada-388-gp.dtb.d

source_arch/arm/boot/dts/armada-388-gp.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/armada-388-gp.dts

deps_arch/arm/boot/dts/armada-388-gp.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/armada-388.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/armada-385.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/armada-38x.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \

arch/arm/boot/dts/armada-388-gp.dtb: $(deps_arch/arm/boot/dts/armada-388-gp.dtb)

$(deps_arch/arm/boot/dts/armada-388-gp.dtb):
