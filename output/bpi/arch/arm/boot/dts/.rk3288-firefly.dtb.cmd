cmd_arch/arm/boot/dts/rk3288-firefly.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.rk3288-firefly.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.rk3288-firefly.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/rk3288-firefly.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/rk3288-firefly.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.rk3288-firefly.dtb.d.dtc.tmp arch/arm/boot/dts/.rk3288-firefly.dtb.dts.tmp ; cat arch/arm/boot/dts/.rk3288-firefly.dtb.d.pre.tmp arch/arm/boot/dts/.rk3288-firefly.dtb.d.dtc.tmp > arch/arm/boot/dts/.rk3288-firefly.dtb.d

source_arch/arm/boot/dts/rk3288-firefly.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/rk3288-firefly.dts

deps_arch/arm/boot/dts/rk3288-firefly.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/rk3288-firefly.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/rk3288.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pinctrl/rockchip.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/rk3288-cru.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/thermal/thermal.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/rk3288-thermal.dtsi \

arch/arm/boot/dts/rk3288-firefly.dtb: $(deps_arch/arm/boot/dts/rk3288-firefly.dtb)

$(deps_arch/arm/boot/dts/rk3288-firefly.dtb):