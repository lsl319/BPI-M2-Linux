cmd_arch/arm/boot/dts/imx6sx-sdb.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6sx-sdb.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6sx-sdb.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6sx-sdb.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6sx-sdb.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6sx-sdb.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6sx-sdb.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6sx-sdb.dtb.d.pre.tmp arch/arm/boot/dts/.imx6sx-sdb.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6sx-sdb.dtb.d

source_arch/arm/boot/dts/imx6sx-sdb.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6sx-sdb.dts

deps_arch/arm/boot/dts/imx6sx-sdb.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/input/input.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6sx.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/imx6sx-clock.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6sx-pinfunc.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/imx6sx-sdb.dtb: $(deps_arch/arm/boot/dts/imx6sx-sdb.dtb)

$(deps_arch/arm/boot/dts/imx6sx-sdb.dtb):
