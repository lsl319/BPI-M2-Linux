cmd_drivers/net/usb/cdc_ether.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/net/usb/cdc_ether.ko drivers/net/usb/cdc_ether.o drivers/net/usb/cdc_ether.mod.o