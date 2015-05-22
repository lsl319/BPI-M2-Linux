cmd_arch/arm/boot/dts/vf500-colibri-eval-v3.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.vf500-colibri-eval-v3.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.vf500-colibri-eval-v3.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/vf500-colibri-eval-v3.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/vf500-colibri-eval-v3.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.vf500-colibri-eval-v3.dtb.d.dtc.tmp arch/arm/boot/dts/.vf500-colibri-eval-v3.dtb.dts.tmp ; cat arch/arm/boot/dts/.vf500-colibri-eval-v3.dtb.d.pre.tmp arch/arm/boot/dts/.vf500-colibri-eval-v3.dtb.d.dtc.tmp > arch/arm/boot/dts/.vf500-colibri-eval-v3.dtb.d

source_arch/arm/boot/dts/vf500-colibri-eval-v3.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/vf500-colibri-eval-v3.dts

deps_arch/arm/boot/dts/vf500-colibri-eval-v3.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/vf500-colibri.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/vf500.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/vfxxx.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/vf610-pinfunc.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/vf610-clock.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/vf-colibri.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/vf-colibri-eval-v3.dtsi \

arch/arm/boot/dts/vf500-colibri-eval-v3.dtb: $(deps_arch/arm/boot/dts/vf500-colibri-eval-v3.dtb)

$(deps_arch/arm/boot/dts/vf500-colibri-eval-v3.dtb):
