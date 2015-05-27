cmd_arch/arm/boot/dts/rk3066a-bqcurie2.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.rk3066a-bqcurie2.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.rk3066a-bqcurie2.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/rk3066a-bqcurie2.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/rk3066a-bqcurie2.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.rk3066a-bqcurie2.dtb.d.dtc.tmp arch/arm/boot/dts/.rk3066a-bqcurie2.dtb.dts.tmp ; cat arch/arm/boot/dts/.rk3066a-bqcurie2.dtb.d.pre.tmp arch/arm/boot/dts/.rk3066a-bqcurie2.dtb.d.dtc.tmp > arch/arm/boot/dts/.rk3066a-bqcurie2.dtb.d

source_arch/arm/boot/dts/rk3066a-bqcurie2.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/rk3066a-bqcurie2.dts

deps_arch/arm/boot/dts/rk3066a-bqcurie2.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/rk3066a.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pinctrl/rockchip.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/rk3066a-cru.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/rk3188-cru-common.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/rk3xxx.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/tps65910.dtsi \

arch/arm/boot/dts/rk3066a-bqcurie2.dtb: $(deps_arch/arm/boot/dts/rk3066a-bqcurie2.dtb)

$(deps_arch/arm/boot/dts/rk3066a-bqcurie2.dtb):
