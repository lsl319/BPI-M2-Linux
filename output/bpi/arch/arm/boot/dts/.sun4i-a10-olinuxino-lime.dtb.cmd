cmd_arch/arm/boot/dts/sun4i-a10-olinuxino-lime.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.sun4i-a10-olinuxino-lime.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.sun4i-a10-olinuxino-lime.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/sun4i-a10-olinuxino-lime.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/sun4i-a10-olinuxino-lime.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.sun4i-a10-olinuxino-lime.dtb.d.dtc.tmp arch/arm/boot/dts/.sun4i-a10-olinuxino-lime.dtb.dts.tmp ; cat arch/arm/boot/dts/.sun4i-a10-olinuxino-lime.dtb.d.pre.tmp arch/arm/boot/dts/.sun4i-a10-olinuxino-lime.dtb.d.dtc.tmp > arch/arm/boot/dts/.sun4i-a10-olinuxino-lime.dtb.d

source_arch/arm/boot/dts/sun4i-a10-olinuxino-lime.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/sun4i-a10-olinuxino-lime.dts

deps_arch/arm/boot/dts/sun4i-a10-olinuxino-lime.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/sun4i-a10.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/thermal/thermal.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/dma/sun4i-a10.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pinctrl/sun4i-a10.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/sunxi-common-regulators.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \

arch/arm/boot/dts/sun4i-a10-olinuxino-lime.dtb: $(deps_arch/arm/boot/dts/sun4i-a10-olinuxino-lime.dtb)

$(deps_arch/arm/boot/dts/sun4i-a10-olinuxino-lime.dtb):
