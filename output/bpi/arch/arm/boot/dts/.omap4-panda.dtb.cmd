cmd_arch/arm/boot/dts/omap4-panda.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.omap4-panda.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.omap4-panda.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap4-panda.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/omap4-panda.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.omap4-panda.dtb.d.dtc.tmp arch/arm/boot/dts/.omap4-panda.dtb.dts.tmp ; cat arch/arm/boot/dts/.omap4-panda.dtb.d.pre.tmp arch/arm/boot/dts/.omap4-panda.dtb.d.dtc.tmp > arch/arm/boot/dts/.omap4-panda.dtb.d

source_arch/arm/boot/dts/omap4-panda.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap4-panda.dts

deps_arch/arm/boot/dts/omap4-panda.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap443x.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap4.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pinctrl/omap.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap4-cpu-thermal.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/thermal/thermal.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap4-panda-common.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/elpida_ecb240abacn.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/twl6030.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/twl6030_omap4.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap44xx-clocks.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap443x-clocks.dtsi \

arch/arm/boot/dts/omap4-panda.dtb: $(deps_arch/arm/boot/dts/omap4-panda.dtb)

$(deps_arch/arm/boot/dts/omap4-panda.dtb):
