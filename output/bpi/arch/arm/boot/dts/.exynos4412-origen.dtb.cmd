cmd_arch/arm/boot/dts/exynos4412-origen.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.exynos4412-origen.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.exynos4412-origen.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos4412-origen.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/exynos4412-origen.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.exynos4412-origen.dtb.d.dtc.tmp arch/arm/boot/dts/.exynos4412-origen.dtb.dts.tmp ; cat arch/arm/boot/dts/.exynos4412-origen.dtb.d.pre.tmp arch/arm/boot/dts/.exynos4412-origen.dtb.d.dtc.tmp > arch/arm/boot/dts/.exynos4412-origen.dtb.d

source_arch/arm/boot/dts/exynos4412-origen.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos4412-origen.dts

deps_arch/arm/boot/dts/exynos4412-origen.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos4412.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos4x12.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos4.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/exynos4.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/exynos-audss-clk.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos4412-tmu-sensor-conf.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/thermal/thermal_exynos.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos4x12-pinctrl.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/exynos4-cpu-thermal.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/thermal/thermal.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/input/input.h \

arch/arm/boot/dts/exynos4412-origen.dtb: $(deps_arch/arm/boot/dts/exynos4412-origen.dtb)

$(deps_arch/arm/boot/dts/exynos4412-origen.dtb):