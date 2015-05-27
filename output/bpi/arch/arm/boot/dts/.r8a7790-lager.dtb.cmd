cmd_arch/arm/boot/dts/r8a7790-lager.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.r8a7790-lager.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.r8a7790-lager.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/r8a7790-lager.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/r8a7790-lager.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.r8a7790-lager.dtb.d.dtc.tmp arch/arm/boot/dts/.r8a7790-lager.dtb.dts.tmp ; cat arch/arm/boot/dts/.r8a7790-lager.dtb.d.pre.tmp arch/arm/boot/dts/.r8a7790-lager.dtb.d.dtc.tmp > arch/arm/boot/dts/.r8a7790-lager.dtb.d

source_arch/arm/boot/dts/r8a7790-lager.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/r8a7790-lager.dts

deps_arch/arm/boot/dts/r8a7790-lager.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/r8a7790.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/r8a7790-clock.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/input/input.h \

arch/arm/boot/dts/r8a7790-lager.dtb: $(deps_arch/arm/boot/dts/r8a7790-lager.dtb)

$(deps_arch/arm/boot/dts/r8a7790-lager.dtb):
