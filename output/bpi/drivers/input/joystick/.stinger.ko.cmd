cmd_drivers/input/joystick/stinger.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/input/joystick/stinger.ko drivers/input/joystick/stinger.o drivers/input/joystick/stinger.mod.o