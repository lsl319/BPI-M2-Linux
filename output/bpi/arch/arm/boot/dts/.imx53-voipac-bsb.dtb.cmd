cmd_arch/arm/boot/dts/imx53-voipac-bsb.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx53-voipac-bsb.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx53-voipac-bsb.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx53-voipac-bsb.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx53-voipac-bsb.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx53-voipac-bsb.dtb.d.dtc.tmp arch/arm/boot/dts/.imx53-voipac-bsb.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx53-voipac-bsb.dtb.d.pre.tmp arch/arm/boot/dts/.imx53-voipac-bsb.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx53-voipac-bsb.dtb.d

source_arch/arm/boot/dts/imx53-voipac-bsb.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx53-voipac-bsb.dts

deps_arch/arm/boot/dts/imx53-voipac-bsb.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx53-voipac-dmm-668.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx53.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx53-pinfunc.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/imx5-clock.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/input/input.h \

arch/arm/boot/dts/imx53-voipac-bsb.dtb: $(deps_arch/arm/boot/dts/imx53-voipac-bsb.dtb)

$(deps_arch/arm/boot/dts/imx53-voipac-bsb.dtb):
