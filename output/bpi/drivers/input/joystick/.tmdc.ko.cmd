cmd_drivers/input/joystick/tmdc.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/input/joystick/tmdc.ko drivers/input/joystick/tmdc.o drivers/input/joystick/tmdc.mod.o