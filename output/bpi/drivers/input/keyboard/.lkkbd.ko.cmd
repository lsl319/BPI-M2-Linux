cmd_drivers/input/keyboard/lkkbd.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/input/keyboard/lkkbd.ko drivers/input/keyboard/lkkbd.o drivers/input/keyboard/lkkbd.mod.o