cmd_arch/arm/boot/dts/imx6q-hummingboard.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6q-hummingboard.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6q-hummingboard.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6q-hummingboard.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6q-hummingboard.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6q-hummingboard.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6q-hummingboard.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6q-hummingboard.dtb.d.pre.tmp arch/arm/boot/dts/.imx6q-hummingboard.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6q-hummingboard.dtb.d

source_arch/arm/boot/dts/imx6q-hummingboard.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6q-hummingboard.dts

deps_arch/arm/boot/dts/imx6q-hummingboard.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6q.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6q-pinfunc.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6qdl.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/imx6qdl-clock.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6qdl-hummingboard.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6qdl-microsom.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/imx6qdl-microsom-ar8035.dtsi \

arch/arm/boot/dts/imx6q-hummingboard.dtb: $(deps_arch/arm/boot/dts/imx6q-hummingboard.dtb)

$(deps_arch/arm/boot/dts/imx6q-hummingboard.dtb):