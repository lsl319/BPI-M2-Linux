cmd_drivers/net/usb/hso.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/net/usb/hso.ko drivers/net/usb/hso.o drivers/net/usb/hso.mod.o