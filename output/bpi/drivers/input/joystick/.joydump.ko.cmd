cmd_drivers/input/joystick/joydump.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/input/joystick/joydump.ko drivers/input/joystick/joydump.o drivers/input/joystick/joydump.mod.o