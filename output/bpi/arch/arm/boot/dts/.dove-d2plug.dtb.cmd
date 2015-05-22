cmd_arch/arm/boot/dts/dove-d2plug.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.dove-d2plug.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.dove-d2plug.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/dove-d2plug.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/dove-d2plug.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.dove-d2plug.dtb.d.dtc.tmp arch/arm/boot/dts/.dove-d2plug.dtb.dts.tmp ; cat arch/arm/boot/dts/.dove-d2plug.dtb.d.pre.tmp arch/arm/boot/dts/.dove-d2plug.dtb.d.dtc.tmp > arch/arm/boot/dts/.dove-d2plug.dtb.d

source_arch/arm/boot/dts/dove-d2plug.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/dove-d2plug.dts

deps_arch/arm/boot/dts/dove-d2plug.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/dove.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/dove-d2plug.dtb: $(deps_arch/arm/boot/dts/dove-d2plug.dtb)

$(deps_arch/arm/boot/dts/dove-d2plug.dtb):
