cmd_drivers/input/gameport/gameport.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/input/gameport/gameport.ko drivers/input/gameport/gameport.o drivers/input/gameport/gameport.mod.o
