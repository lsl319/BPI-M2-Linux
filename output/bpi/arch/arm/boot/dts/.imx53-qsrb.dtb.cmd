cmd_arch/arm/boot/dts/imx53-qsrb.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx53-qsrb.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx53-qsrb.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx53-qsrb.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx53-qsrb.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx53-qsrb.dtb.d.dtc.tmp arch/arm/boot/dts/.imx53-qsrb.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx53-qsrb.dtb.d.pre.tmp arch/arm/boot/dts/.imx53-qsrb.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx53-qsrb.dtb.d

source_arch/arm/boot/dts/imx53-qsrb.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx53-qsrb.dts

deps_arch/arm/boot/dts/imx53-qsrb.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx53-qsb-common.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx53.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx53-pinfunc.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/imx5-clock.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/input/input.h \

arch/arm/boot/dts/imx53-qsrb.dtb: $(deps_arch/arm/boot/dts/imx53-qsrb.dtb)

$(deps_arch/arm/boot/dts/imx53-qsrb.dtb):
