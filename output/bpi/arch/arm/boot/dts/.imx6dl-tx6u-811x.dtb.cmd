cmd_arch/arm/boot/dts/imx6dl-tx6u-811x.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6dl-tx6u-811x.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6dl-tx6u-811x.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6dl-tx6u-811x.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6dl-tx6u-811x.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6dl-tx6u-811x.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6dl-tx6u-811x.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6dl-tx6u-811x.dtb.d.pre.tmp arch/arm/boot/dts/.imx6dl-tx6u-811x.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6dl-tx6u-811x.dtb.d

source_arch/arm/boot/dts/imx6dl-tx6u-811x.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6dl-tx6u-811x.dts

deps_arch/arm/boot/dts/imx6dl-tx6u-811x.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6dl.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6dl-pinfunc.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6qdl.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/imx6qdl-clock.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6qdl-tx6.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/input/input.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pwm/pwm.h \

arch/arm/boot/dts/imx6dl-tx6u-811x.dtb: $(deps_arch/arm/boot/dts/imx6dl-tx6u-811x.dtb)

$(deps_arch/arm/boot/dts/imx6dl-tx6u-811x.dtb):
