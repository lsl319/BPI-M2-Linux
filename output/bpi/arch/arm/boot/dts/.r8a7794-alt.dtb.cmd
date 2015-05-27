cmd_arch/arm/boot/dts/r8a7794-alt.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.r8a7794-alt.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.r8a7794-alt.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/r8a7794-alt.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/r8a7794-alt.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.r8a7794-alt.dtb.d.dtc.tmp arch/arm/boot/dts/.r8a7794-alt.dtb.dts.tmp ; cat arch/arm/boot/dts/.r8a7794-alt.dtb.d.pre.tmp arch/arm/boot/dts/.r8a7794-alt.dtb.d.dtc.tmp > arch/arm/boot/dts/.r8a7794-alt.dtb.d

source_arch/arm/boot/dts/r8a7794-alt.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/r8a7794-alt.dts

deps_arch/arm/boot/dts/r8a7794-alt.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/r8a7794.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/r8a7794-clock.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \

arch/arm/boot/dts/r8a7794-alt.dtb: $(deps_arch/arm/boot/dts/r8a7794-alt.dtb)

$(deps_arch/arm/boot/dts/r8a7794-alt.dtb):
