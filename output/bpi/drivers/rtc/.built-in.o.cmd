cmd_drivers/rtc/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o drivers/rtc/built-in.o drivers/rtc/rtc-lib.o drivers/rtc/hctosys.o drivers/rtc/systohc.o drivers/rtc/rtc-core.o drivers/rtc/rtc-as3722.o drivers/rtc/rtc-ds1307.o drivers/rtc/rtc-em3027.o drivers/rtc/rtc-max8907.o drivers/rtc/rtc-max77686.o drivers/rtc/rtc-mv.o drivers/rtc/rtc-palmas.o drivers/rtc/rtc-pl031.o drivers/rtc/rtc-spear.o drivers/rtc/rtc-sun6i.o drivers/rtc/rtc-sunxi.o drivers/rtc/rtc-tegra.o drivers/rtc/rtc-twl.o drivers/rtc/rtc-tps6586x.o drivers/rtc/rtc-tps65910.o drivers/rtc/rtc-vt8500.o 