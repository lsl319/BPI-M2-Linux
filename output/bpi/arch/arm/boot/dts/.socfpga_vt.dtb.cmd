cmd_arch/arm/boot/dts/socfpga_vt.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.socfpga_vt.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.socfpga_vt.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/socfpga_vt.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/socfpga_vt.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.socfpga_vt.dtb.d.dtc.tmp arch/arm/boot/dts/.socfpga_vt.dtb.dts.tmp ; cat arch/arm/boot/dts/.socfpga_vt.dtb.d.pre.tmp arch/arm/boot/dts/.socfpga_vt.dtb.d.dtc.tmp > arch/arm/boot/dts/.socfpga_vt.dtb.d

source_arch/arm/boot/dts/socfpga_vt.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/socfpga_vt.dts

deps_arch/arm/boot/dts/socfpga_vt.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/socfpga.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/reset/altr,rst-mgr.h \

arch/arm/boot/dts/socfpga_vt.dtb: $(deps_arch/arm/boot/dts/socfpga_vt.dtb)

$(deps_arch/arm/boot/dts/socfpga_vt.dtb):
