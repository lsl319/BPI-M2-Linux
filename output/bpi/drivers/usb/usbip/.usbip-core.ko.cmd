cmd_drivers/usb/usbip/usbip-core.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/usb/usbip/usbip-core.ko drivers/usb/usbip/usbip-core.o drivers/usb/usbip/usbip-core.mod.o