cmd_arch/arm/boot/dts/omap3-overo-storm-summit.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.omap3-overo-storm-summit.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.omap3-overo-storm-summit.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap3-overo-storm-summit.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/omap3-overo-storm-summit.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.omap3-overo-storm-summit.dtb.d.dtc.tmp arch/arm/boot/dts/.omap3-overo-storm-summit.dtb.dts.tmp ; cat arch/arm/boot/dts/.omap3-overo-storm-summit.dtb.d.pre.tmp arch/arm/boot/dts/.omap3-overo-storm-summit.dtb.d.dtc.tmp > arch/arm/boot/dts/.omap3-overo-storm-summit.dtb.d

source_arch/arm/boot/dts/omap3-overo-storm-summit.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap3-overo-storm-summit.dts

deps_arch/arm/boot/dts/omap3-overo-storm-summit.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap3-overo-storm.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap36xx.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap3.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pinctrl/omap.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap3-overo-base.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/twl4030.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/twl4030_omap3.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap3-overo-summit-common.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap3-overo-common-peripherals.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap3-overo-common-dvi.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap3xxx-clocks.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap34xx-omap36xx-clocks.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap36xx-omap3430es2plus-clocks.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap36xx-am35xx-omap3430es2plus-clocks.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/omap36xx-clocks.dtsi \

arch/arm/boot/dts/omap3-overo-storm-summit.dtb: $(deps_arch/arm/boot/dts/omap3-overo-storm-summit.dtb)

$(deps_arch/arm/boot/dts/omap3-overo-storm-summit.dtb):
