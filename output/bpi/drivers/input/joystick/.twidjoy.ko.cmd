cmd_drivers/input/joystick/twidjoy.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/input/joystick/twidjoy.ko drivers/input/joystick/twidjoy.o drivers/input/joystick/twidjoy.mod.o