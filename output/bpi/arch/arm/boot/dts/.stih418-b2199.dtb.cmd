cmd_arch/arm/boot/dts/stih418-b2199.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.stih418-b2199.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.stih418-b2199.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/stih418-b2199.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/stih418-b2199.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.stih418-b2199.dtb.d.dtc.tmp arch/arm/boot/dts/.stih418-b2199.dtb.dts.tmp ; cat arch/arm/boot/dts/.stih418-b2199.dtb.d.pre.tmp arch/arm/boot/dts/.stih418-b2199.dtb.d.dtc.tmp > arch/arm/boot/dts/.stih418-b2199.dtb.d

source_arch/arm/boot/dts/stih418-b2199.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/stih418-b2199.dts

deps_arch/arm/boot/dts/stih418-b2199.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/stih418.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/stih418-clock.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/stih418-clks.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/stih410-clks.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/stih407-clks.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/stih407-family.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/stih407-pinctrl.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/st-pincfg.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/reset-controller/stih407-resets.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/stih410-pinctrl.dtsi \

arch/arm/boot/dts/stih418-b2199.dtb: $(deps_arch/arm/boot/dts/stih418-b2199.dtb)

$(deps_arch/arm/boot/dts/stih418-b2199.dtb):
