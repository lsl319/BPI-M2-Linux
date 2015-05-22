cmd_arch/arm/boot/dts/tegra114-roth.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.tegra114-roth.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.tegra114-roth.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/tegra114-roth.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/tegra114-roth.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.tegra114-roth.dtb.d.dtc.tmp arch/arm/boot/dts/.tegra114-roth.dtb.dts.tmp ; cat arch/arm/boot/dts/.tegra114-roth.dtb.d.pre.tmp arch/arm/boot/dts/.tegra114-roth.dtb.d.dtc.tmp > arch/arm/boot/dts/.tegra114-roth.dtb.d

source_arch/arm/boot/dts/tegra114-roth.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/tegra114-roth.dts

deps_arch/arm/boot/dts/tegra114-roth.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/input/input.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/tegra114.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/tegra114-car.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/tegra-gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/memory/tegra114-mc.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pinctrl/pinctrl-tegra.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/tegra114-roth.dtb: $(deps_arch/arm/boot/dts/tegra114-roth.dtb)

$(deps_arch/arm/boot/dts/tegra114-roth.dtb):
