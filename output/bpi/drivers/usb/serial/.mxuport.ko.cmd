cmd_drivers/usb/serial/mxuport.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/usb/serial/mxuport.ko drivers/usb/serial/mxuport.o drivers/usb/serial/mxuport.mod.o