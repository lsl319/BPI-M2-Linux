cmd_arch/arm/boot/dts/tegra124-jetson-tk1.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.tegra124-jetson-tk1.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.tegra124-jetson-tk1.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/tegra124-jetson-tk1.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/tegra124-jetson-tk1.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.tegra124-jetson-tk1.dtb.d.dtc.tmp arch/arm/boot/dts/.tegra124-jetson-tk1.dtb.dts.tmp ; cat arch/arm/boot/dts/.tegra124-jetson-tk1.dtb.d.pre.tmp arch/arm/boot/dts/.tegra124-jetson-tk1.dtb.d.dtc.tmp > arch/arm/boot/dts/.tegra124-jetson-tk1.dtb.d

source_arch/arm/boot/dts/tegra124-jetson-tk1.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/tegra124-jetson-tk1.dts

deps_arch/arm/boot/dts/tegra124-jetson-tk1.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/input/input.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/tegra124.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/tegra124-car.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/tegra124-car-common.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/tegra-gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/memory/tegra124-mc.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pinctrl/pinctrl-tegra.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pinctrl/pinctrl-tegra-xusb.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/thermal/tegra124-soctherm.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/tegra124-jetson-tk1.dtb: $(deps_arch/arm/boot/dts/tegra124-jetson-tk1.dtb)

$(deps_arch/arm/boot/dts/tegra124-jetson-tk1.dtb):
