cmd_drivers/w1/masters/w1-gpio.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/w1/masters/w1-gpio.ko drivers/w1/masters/w1-gpio.o drivers/w1/masters/w1-gpio.mod.o