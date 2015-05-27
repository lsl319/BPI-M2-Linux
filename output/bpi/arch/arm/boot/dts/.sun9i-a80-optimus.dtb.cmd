cmd_arch/arm/boot/dts/sun9i-a80-optimus.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.sun9i-a80-optimus.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.sun9i-a80-optimus.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/sun9i-a80-optimus.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/sun9i-a80-optimus.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.sun9i-a80-optimus.dtb.d.dtc.tmp arch/arm/boot/dts/.sun9i-a80-optimus.dtb.dts.tmp ; cat arch/arm/boot/dts/.sun9i-a80-optimus.dtb.d.pre.tmp arch/arm/boot/dts/.sun9i-a80-optimus.dtb.d.dtc.tmp > arch/arm/boot/dts/.sun9i-a80-optimus.dtb.d

source_arch/arm/boot/dts/sun9i-a80-optimus.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/sun9i-a80-optimus.dts

deps_arch/arm/boot/dts/sun9i-a80-optimus.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/sun9i-a80.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton64.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pinctrl/sun4i-a10.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/sunxi-common-regulators.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \

arch/arm/boot/dts/sun9i-a80-optimus.dtb: $(deps_arch/arm/boot/dts/sun9i-a80-optimus.dtb)

$(deps_arch/arm/boot/dts/sun9i-a80-optimus.dtb):
