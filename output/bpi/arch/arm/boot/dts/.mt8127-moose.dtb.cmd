cmd_arch/arm/boot/dts/mt8127-moose.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.mt8127-moose.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.mt8127-moose.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/mt8127-moose.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/mt8127-moose.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.mt8127-moose.dtb.d.dtc.tmp arch/arm/boot/dts/.mt8127-moose.dtb.dts.tmp ; cat arch/arm/boot/dts/.mt8127-moose.dtb.d.pre.tmp arch/arm/boot/dts/.mt8127-moose.dtb.d.dtc.tmp > arch/arm/boot/dts/.mt8127-moose.dtb.d

source_arch/arm/boot/dts/mt8127-moose.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/mt8127-moose.dts

deps_arch/arm/boot/dts/mt8127-moose.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/mt8127.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton64.dtsi \

arch/arm/boot/dts/mt8127-moose.dtb: $(deps_arch/arm/boot/dts/mt8127-moose.dtb)

$(deps_arch/arm/boot/dts/mt8127-moose.dtb):
