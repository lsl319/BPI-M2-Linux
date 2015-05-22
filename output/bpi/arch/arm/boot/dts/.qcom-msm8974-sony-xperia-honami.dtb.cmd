cmd_arch/arm/boot/dts/qcom-msm8974-sony-xperia-honami.dtb := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.qcom-msm8974-sony-xperia-honami.dtb.d.pre.tmp -nostdinc -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts -I/home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include -I/home/pi/kernel/linux-4.0.2/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.qcom-msm8974-sony-xperia-honami.dtb.dts.tmp /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/qcom-msm8974-sony-xperia-honami.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/qcom-msm8974-sony-xperia-honami.dtb -b 0 -i /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/  -d arch/arm/boot/dts/.qcom-msm8974-sony-xperia-honami.dtb.d.dtc.tmp arch/arm/boot/dts/.qcom-msm8974-sony-xperia-honami.dtb.dts.tmp ; cat arch/arm/boot/dts/.qcom-msm8974-sony-xperia-honami.dtb.d.pre.tmp arch/arm/boot/dts/.qcom-msm8974-sony-xperia-honami.dtb.d.dtc.tmp > arch/arm/boot/dts/.qcom-msm8974-sony-xperia-honami.dtb.d

source_arch/arm/boot/dts/qcom-msm8974-sony-xperia-honami.dtb := /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/qcom-msm8974-sony-xperia-honami.dts

deps_arch/arm/boot/dts/qcom-msm8974-sony-xperia-honami.dtb := \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/qcom-msm8974.dtsi \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/include/dt-bindings/clock/qcom,gcc-msm8974.h \
    $(wildcard include/config/noc/clk/src.h) \
  /home/pi/kernel/linux-4.0.2/arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/qcom-msm8974-sony-xperia-honami.dtb: $(deps_arch/arm/boot/dts/qcom-msm8974-sony-xperia-honami.dtb)

$(deps_arch/arm/boot/dts/qcom-msm8974-sony-xperia-honami.dtb):
