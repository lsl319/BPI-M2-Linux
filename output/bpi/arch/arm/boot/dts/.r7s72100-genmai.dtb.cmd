cmd_arch/arm/boot/dts/r7s72100-genmai.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.r7s72100-genmai.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.r7s72100-genmai.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/r7s72100-genmai.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/r7s72100-genmai.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.r7s72100-genmai.dtb.d.dtc.tmp arch/arm/boot/dts/.r7s72100-genmai.dtb.dts.tmp ; cat arch/arm/boot/dts/.r7s72100-genmai.dtb.d.pre.tmp arch/arm/boot/dts/.r7s72100-genmai.dtb.d.dtc.tmp > arch/arm/boot/dts/.r7s72100-genmai.dtb.d

source_arch/arm/boot/dts/r7s72100-genmai.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/r7s72100-genmai.dts

deps_arch/arm/boot/dts/r7s72100-genmai.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/r7s72100.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/r7s72100-clock.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \

arch/arm/boot/dts/r7s72100-genmai.dtb: $(deps_arch/arm/boot/dts/r7s72100-genmai.dtb)

$(deps_arch/arm/boot/dts/r7s72100-genmai.dtb):
