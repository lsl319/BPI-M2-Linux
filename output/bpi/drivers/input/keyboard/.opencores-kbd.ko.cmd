cmd_drivers/input/keyboard/opencores-kbd.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/input/keyboard/opencores-kbd.ko drivers/input/keyboard/opencores-kbd.o drivers/input/keyboard/opencores-kbd.mod.o