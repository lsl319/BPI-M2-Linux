cmd_arch/arm/boot/dts/wm8650-mid.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.wm8650-mid.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.wm8650-mid.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/wm8650-mid.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/wm8650-mid.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.wm8650-mid.dtb.d.dtc.tmp arch/arm/boot/dts/.wm8650-mid.dtb.dts.tmp ; cat arch/arm/boot/dts/.wm8650-mid.dtb.d.pre.tmp arch/arm/boot/dts/.wm8650-mid.dtb.d.dtc.tmp > arch/arm/boot/dts/.wm8650-mid.dtb.d

source_arch/arm/boot/dts/wm8650-mid.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/wm8650-mid.dts

deps_arch/arm/boot/dts/wm8650-mid.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/wm8650.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/wm8650-mid.dtb: $(deps_arch/arm/boot/dts/wm8650-mid.dtb)

$(deps_arch/arm/boot/dts/wm8650-mid.dtb):
