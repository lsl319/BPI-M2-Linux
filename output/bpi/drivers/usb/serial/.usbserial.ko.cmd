cmd_drivers/usb/serial/usbserial.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/usb/serial/usbserial.ko drivers/usb/serial/usbserial.o drivers/usb/serial/usbserial.mod.o
