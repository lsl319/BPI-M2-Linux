cmd_arch/arm/boot/dts/ste-hrefprev60-stuib.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.ste-hrefprev60-stuib.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.ste-hrefprev60-stuib.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/ste-hrefprev60-stuib.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/ste-hrefprev60-stuib.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.ste-hrefprev60-stuib.dtb.d.dtc.tmp arch/arm/boot/dts/.ste-hrefprev60-stuib.dtb.dts.tmp ; cat arch/arm/boot/dts/.ste-hrefprev60-stuib.dtb.d.pre.tmp arch/arm/boot/dts/.ste-hrefprev60-stuib.dtb.d.dtc.tmp > arch/arm/boot/dts/.ste-hrefprev60-stuib.dtb.d

source_arch/arm/boot/dts/ste-hrefprev60-stuib.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/ste-hrefprev60-stuib.dts

deps_arch/arm/boot/dts/ste-hrefprev60-stuib.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/ste-hrefprev60.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/ste-dbx5x0.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/mfd/dbx500-prcmu.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/arm/ux500_pm_domains.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/ste-href-ab8500.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/ste-href.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/ste-href-family-pinctrl.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/ste-nomadik-pinctrl.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/pinctrl/nomadik.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/ste-href-stuib.dtsi \

arch/arm/boot/dts/ste-hrefprev60-stuib.dtb: $(deps_arch/arm/boot/dts/ste-hrefprev60-stuib.dtb)

$(deps_arch/arm/boot/dts/ste-hrefprev60-stuib.dtb):
