cmd_arch/arm/boot/dts/qcom-apq8084-ifc6540.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.qcom-apq8084-ifc6540.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.qcom-apq8084-ifc6540.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/qcom-apq8084-ifc6540.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/qcom-apq8084-ifc6540.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.qcom-apq8084-ifc6540.dtb.d.dtc.tmp arch/arm/boot/dts/.qcom-apq8084-ifc6540.dtb.dts.tmp ; cat arch/arm/boot/dts/.qcom-apq8084-ifc6540.dtb.d.pre.tmp arch/arm/boot/dts/.qcom-apq8084-ifc6540.dtb.d.dtc.tmp > arch/arm/boot/dts/.qcom-apq8084-ifc6540.dtb.d

source_arch/arm/boot/dts/qcom-apq8084-ifc6540.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/qcom-apq8084-ifc6540.dts

deps_arch/arm/boot/dts/qcom-apq8084-ifc6540.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/qcom-apq8084.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/qcom,gcc-apq8084.h \
    $(wildcard include/config/noc/clk/src.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \

arch/arm/boot/dts/qcom-apq8084-ifc6540.dtb: $(deps_arch/arm/boot/dts/qcom-apq8084-ifc6540.dtb)

$(deps_arch/arm/boot/dts/qcom-apq8084-ifc6540.dtb):