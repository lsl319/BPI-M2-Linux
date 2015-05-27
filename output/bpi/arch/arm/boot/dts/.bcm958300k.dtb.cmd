cmd_arch/arm/boot/dts/bcm958300k.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.bcm958300k.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.bcm958300k.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/bcm958300k.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/bcm958300k.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.bcm958300k.dtb.d.dtc.tmp arch/arm/boot/dts/.bcm958300k.dtb.dts.tmp ; cat arch/arm/boot/dts/.bcm958300k.dtb.d.pre.tmp arch/arm/boot/dts/.bcm958300k.dtb.d.dtc.tmp > arch/arm/boot/dts/.bcm958300k.dtb.d

source_arch/arm/boot/dts/bcm958300k.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/bcm958300k.dts

deps_arch/arm/boot/dts/bcm958300k.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/bcm-cygnus.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/bcm-cygnus-clock.dtsi \

arch/arm/boot/dts/bcm958300k.dtb: $(deps_arch/arm/boot/dts/bcm958300k.dtb)

$(deps_arch/arm/boot/dts/bcm958300k.dtb):
