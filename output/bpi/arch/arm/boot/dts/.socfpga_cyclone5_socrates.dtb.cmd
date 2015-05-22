cmd_arch/arm/boot/dts/socfpga_cyclone5_socrates.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.socfpga_cyclone5_socrates.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.socfpga_cyclone5_socrates.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/socfpga_cyclone5_socrates.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/socfpga_cyclone5_socrates.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.socfpga_cyclone5_socrates.dtb.d.dtc.tmp arch/arm/boot/dts/.socfpga_cyclone5_socrates.dtb.dts.tmp ; cat arch/arm/boot/dts/.socfpga_cyclone5_socrates.dtb.d.pre.tmp arch/arm/boot/dts/.socfpga_cyclone5_socrates.dtb.d.dtc.tmp > arch/arm/boot/dts/.socfpga_cyclone5_socrates.dtb.d

source_arch/arm/boot/dts/socfpga_cyclone5_socrates.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/socfpga_cyclone5_socrates.dts

deps_arch/arm/boot/dts/socfpga_cyclone5_socrates.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/socfpga_cyclone5.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/socfpga.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/reset/altr,rst-mgr.h \

arch/arm/boot/dts/socfpga_cyclone5_socrates.dtb: $(deps_arch/arm/boot/dts/socfpga_cyclone5_socrates.dtb)

$(deps_arch/arm/boot/dts/socfpga_cyclone5_socrates.dtb):
