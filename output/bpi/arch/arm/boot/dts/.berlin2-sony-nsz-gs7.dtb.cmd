cmd_arch/arm/boot/dts/berlin2-sony-nsz-gs7.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.berlin2-sony-nsz-gs7.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.berlin2-sony-nsz-gs7.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/berlin2-sony-nsz-gs7.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/berlin2-sony-nsz-gs7.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.berlin2-sony-nsz-gs7.dtb.d.dtc.tmp arch/arm/boot/dts/.berlin2-sony-nsz-gs7.dtb.dts.tmp ; cat arch/arm/boot/dts/.berlin2-sony-nsz-gs7.dtb.d.pre.tmp arch/arm/boot/dts/.berlin2-sony-nsz-gs7.dtb.d.dtc.tmp > arch/arm/boot/dts/.berlin2-sony-nsz-gs7.dtb.d

source_arch/arm/boot/dts/berlin2-sony-nsz-gs7.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/berlin2-sony-nsz-gs7.dts

deps_arch/arm/boot/dts/berlin2-sony-nsz-gs7.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/berlin2.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/berlin2.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \

arch/arm/boot/dts/berlin2-sony-nsz-gs7.dtb: $(deps_arch/arm/boot/dts/berlin2-sony-nsz-gs7.dtb)

$(deps_arch/arm/boot/dts/berlin2-sony-nsz-gs7.dtb):
