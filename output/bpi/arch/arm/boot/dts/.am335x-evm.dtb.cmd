cmd_arch/arm/boot/dts/am335x-evm.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.am335x-evm.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.am335x-evm.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/am335x-evm.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/am335x-evm.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.am335x-evm.dtb.d.dtc.tmp arch/arm/boot/dts/.am335x-evm.dtb.dts.tmp ; cat arch/arm/boot/dts/.am335x-evm.dtb.d.pre.tmp arch/arm/boot/dts/.am335x-evm.dtb.d.dtc.tmp > arch/arm/boot/dts/.am335x-evm.dtb.d

source_arch/arm/boot/dts/am335x-evm.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/am335x-evm.dts

deps_arch/arm/boot/dts/am335x-evm.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/am33xx.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pinctrl/am33xx.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pinctrl/omap.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/tps65910.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/am33xx-clocks.dtsi \

arch/arm/boot/dts/am335x-evm.dtb: $(deps_arch/arm/boot/dts/am335x-evm.dtb)

$(deps_arch/arm/boot/dts/am335x-evm.dtb):
