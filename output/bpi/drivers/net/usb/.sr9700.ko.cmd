cmd_drivers/net/usb/sr9700.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/net/usb/sr9700.ko drivers/net/usb/sr9700.o drivers/net/usb/sr9700.mod.o