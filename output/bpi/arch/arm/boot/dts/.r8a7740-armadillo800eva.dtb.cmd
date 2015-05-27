cmd_arch/arm/boot/dts/r8a7740-armadillo800eva.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.r8a7740-armadillo800eva.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.r8a7740-armadillo800eva.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/r8a7740-armadillo800eva.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/r8a7740-armadillo800eva.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.r8a7740-armadillo800eva.dtb.d.dtc.tmp arch/arm/boot/dts/.r8a7740-armadillo800eva.dtb.dts.tmp ; cat arch/arm/boot/dts/.r8a7740-armadillo800eva.dtb.d.pre.tmp arch/arm/boot/dts/.r8a7740-armadillo800eva.dtb.d.dtc.tmp > arch/arm/boot/dts/.r8a7740-armadillo800eva.dtb.d

source_arch/arm/boot/dts/r8a7740-armadillo800eva.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/r8a7740-armadillo800eva.dts

deps_arch/arm/boot/dts/r8a7740-armadillo800eva.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/r8a7740.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/r8a7740-clock.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/input/input.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pwm/pwm.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/r8a7740-armadillo800eva.dtb: $(deps_arch/arm/boot/dts/r8a7740-armadillo800eva.dtb)

$(deps_arch/arm/boot/dts/r8a7740-armadillo800eva.dtb):
