cmd_arch/arm/boot/dts/dove-cubox.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.dove-cubox.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.dove-cubox.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/dove-cubox.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/dove-cubox.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.dove-cubox.dtb.d.dtc.tmp arch/arm/boot/dts/.dove-cubox.dtb.dts.tmp ; cat arch/arm/boot/dts/.dove-cubox.dtb.d.pre.tmp arch/arm/boot/dts/.dove-cubox.dtb.d.dtc.tmp > arch/arm/boot/dts/.dove-cubox.dtb.d

source_arch/arm/boot/dts/dove-cubox.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/dove-cubox.dts

deps_arch/arm/boot/dts/dove-cubox.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/dove.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/dove-cubox.dtb: $(deps_arch/arm/boot/dts/dove-cubox.dtb)

$(deps_arch/arm/boot/dts/dove-cubox.dtb):
