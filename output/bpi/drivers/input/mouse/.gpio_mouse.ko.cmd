cmd_drivers/input/mouse/gpio_mouse.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/input/mouse/gpio_mouse.ko drivers/input/mouse/gpio_mouse.o drivers/input/mouse/gpio_mouse.mod.o
