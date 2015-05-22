cmd_arch/arm/boot/dts/stih416-b2000.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.stih416-b2000.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.stih416-b2000.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/stih416-b2000.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/stih416-b2000.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.stih416-b2000.dtb.d.dtc.tmp arch/arm/boot/dts/.stih416-b2000.dtb.dts.tmp ; cat arch/arm/boot/dts/.stih416-b2000.dtb.d.pre.tmp arch/arm/boot/dts/.stih416-b2000.dtb.d.dtc.tmp > arch/arm/boot/dts/.stih416-b2000.dtb.d

source_arch/arm/boot/dts/stih416-b2000.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/stih416-b2000.dts

deps_arch/arm/boot/dts/stih416-b2000.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/stih416.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/stih41x.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/stih416-clock.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/stih416-clks.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/stih416-pinctrl.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/st-pincfg.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/phy/phy-miphy365x.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/reset-controller/stih416-resets.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/stih41x-b2000.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/input/input.h \

arch/arm/boot/dts/stih416-b2000.dtb: $(deps_arch/arm/boot/dts/stih416-b2000.dtb)

$(deps_arch/arm/boot/dts/stih416-b2000.dtb):
