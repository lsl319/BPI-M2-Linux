cmd_drivers/media/usb/usbtv/usbtv.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/media/usb/usbtv/usbtv.ko drivers/media/usb/usbtv/usbtv.o drivers/media/usb/usbtv/usbtv.mod.o