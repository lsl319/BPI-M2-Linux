cmd_drivers/gpio/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o drivers/gpio/built-in.o drivers/gpio/devres.o drivers/gpio/gpiolib.o drivers/gpio/gpiolib-legacy.o drivers/gpio/gpiolib-of.o drivers/gpio/gpiolib-sysfs.o drivers/gpio/gpio-generic.o drivers/gpio/gpio-bcm-kona.o drivers/gpio/gpio-dwapb.o drivers/gpio/gpio-mvebu.o drivers/gpio/gpio-mxc.o drivers/gpio/gpio-omap.o drivers/gpio/gpio-pca953x.o drivers/gpio/gpio-pl061.o drivers/gpio/gpio-spear-spics.o drivers/gpio/gpio-tegra.o drivers/gpio/gpio-palmas.o drivers/gpio/gpio-tps6586x.o drivers/gpio/gpio-tps65910.o drivers/gpio/gpio-twl4030.o drivers/gpio/gpio-vf610.o drivers/gpio/gpio-xilinx.o drivers/gpio/gpio-zynq.o 