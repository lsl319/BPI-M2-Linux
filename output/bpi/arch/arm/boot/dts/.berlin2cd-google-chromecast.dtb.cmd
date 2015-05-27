cmd_arch/arm/boot/dts/berlin2cd-google-chromecast.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.berlin2cd-google-chromecast.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.berlin2cd-google-chromecast.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/berlin2cd-google-chromecast.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/berlin2cd-google-chromecast.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.berlin2cd-google-chromecast.dtb.d.dtc.tmp arch/arm/boot/dts/.berlin2cd-google-chromecast.dtb.dts.tmp ; cat arch/arm/boot/dts/.berlin2cd-google-chromecast.dtb.d.pre.tmp arch/arm/boot/dts/.berlin2cd-google-chromecast.dtb.d.dtc.tmp > arch/arm/boot/dts/.berlin2cd-google-chromecast.dtb.d

source_arch/arm/boot/dts/berlin2cd-google-chromecast.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/berlin2cd-google-chromecast.dts

deps_arch/arm/boot/dts/berlin2cd-google-chromecast.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/berlin2cd.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/berlin2.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \

arch/arm/boot/dts/berlin2cd-google-chromecast.dtb: $(deps_arch/arm/boot/dts/berlin2cd-google-chromecast.dtb)

$(deps_arch/arm/boot/dts/berlin2cd-google-chromecast.dtb):
