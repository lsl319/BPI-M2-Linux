cmd_arch/arm/boot/dts/imx6dl-gw52xx.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6dl-gw52xx.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6dl-gw52xx.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6dl-gw52xx.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6dl-gw52xx.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6dl-gw52xx.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6dl-gw52xx.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6dl-gw52xx.dtb.d.pre.tmp arch/arm/boot/dts/.imx6dl-gw52xx.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6dl-gw52xx.dtb.d

source_arch/arm/boot/dts/imx6dl-gw52xx.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6dl-gw52xx.dts

deps_arch/arm/boot/dts/imx6dl-gw52xx.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6dl.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6dl-pinfunc.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6qdl.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/imx6qdl-clock.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6qdl-gw52xx.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \

arch/arm/boot/dts/imx6dl-gw52xx.dtb: $(deps_arch/arm/boot/dts/imx6dl-gw52xx.dtb)

$(deps_arch/arm/boot/dts/imx6dl-gw52xx.dtb):
