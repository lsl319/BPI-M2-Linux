cmd_drivers/parport/parport.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/parport/parport.ko drivers/parport/parport.o drivers/parport/parport.mod.o