cmd_arch/arm/boot/dts/sun4i-a10-pcduino.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.sun4i-a10-pcduino.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.sun4i-a10-pcduino.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/sun4i-a10-pcduino.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/sun4i-a10-pcduino.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.sun4i-a10-pcduino.dtb.d.dtc.tmp arch/arm/boot/dts/.sun4i-a10-pcduino.dtb.dts.tmp ; cat arch/arm/boot/dts/.sun4i-a10-pcduino.dtb.d.pre.tmp arch/arm/boot/dts/.sun4i-a10-pcduino.dtb.d.dtc.tmp > arch/arm/boot/dts/.sun4i-a10-pcduino.dtb.d

source_arch/arm/boot/dts/sun4i-a10-pcduino.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/sun4i-a10-pcduino.dts

deps_arch/arm/boot/dts/sun4i-a10-pcduino.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/sun4i-a10.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/thermal/thermal.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/dma/sun4i-a10.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pinctrl/sun4i-a10.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/sunxi-common-regulators.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/input/input.h \

arch/arm/boot/dts/sun4i-a10-pcduino.dtb: $(deps_arch/arm/boot/dts/sun4i-a10-pcduino.dtb)

$(deps_arch/arm/boot/dts/sun4i-a10-pcduino.dtb):
