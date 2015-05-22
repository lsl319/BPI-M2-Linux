cmd_arch/arm/boot/dts/tegra20-whistler.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.tegra20-whistler.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.tegra20-whistler.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/tegra20-whistler.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/tegra20-whistler.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.tegra20-whistler.dtb.d.dtc.tmp arch/arm/boot/dts/.tegra20-whistler.dtb.dts.tmp ; cat arch/arm/boot/dts/.tegra20-whistler.dtb.d.pre.tmp arch/arm/boot/dts/.tegra20-whistler.dtb.d.dtc.tmp > arch/arm/boot/dts/.tegra20-whistler.dtb.d

source_arch/arm/boot/dts/tegra20-whistler.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/tegra20-whistler.dts

deps_arch/arm/boot/dts/tegra20-whistler.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/input/input.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/tegra20.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/tegra20-car.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/tegra-gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pinctrl/pinctrl-tegra.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/tegra20-whistler.dtb: $(deps_arch/arm/boot/dts/tegra20-whistler.dtb)

$(deps_arch/arm/boot/dts/tegra20-whistler.dtb):
