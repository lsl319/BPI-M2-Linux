cmd_arch/arm/boot/dts/exynos5800-peach-pi.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.exynos5800-peach-pi.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.exynos5800-peach-pi.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos5800-peach-pi.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/exynos5800-peach-pi.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.exynos5800-peach-pi.dtb.d.dtc.tmp arch/arm/boot/dts/.exynos5800-peach-pi.dtb.dts.tmp ; cat arch/arm/boot/dts/.exynos5800-peach-pi.dtb.d.pre.tmp arch/arm/boot/dts/.exynos5800-peach-pi.dtb.d.dtc.tmp > arch/arm/boot/dts/.exynos5800-peach-pi.dtb.d

source_arch/arm/boot/dts/exynos5800-peach-pi.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos5800-peach-pi.dts

deps_arch/arm/boot/dts/exynos5800-peach-pi.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/input/input.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/maxim,max77802.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/regulator/maxim,max77802.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos5800.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos5420.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/exynos5420.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos5.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos5420-pinctrl.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/exynos-audss-clk.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos4412-tmu-sensor-conf.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/thermal/thermal_exynos.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos5420-trip-points.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/cros-ec-keyboard.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/cros-adc-thermistors.dtsi \

arch/arm/boot/dts/exynos5800-peach-pi.dtb: $(deps_arch/arm/boot/dts/exynos5800-peach-pi.dtb)

$(deps_arch/arm/boot/dts/exynos5800-peach-pi.dtb):
