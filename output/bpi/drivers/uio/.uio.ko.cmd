cmd_drivers/uio/uio.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/uio/uio.ko drivers/uio/uio.o drivers/uio/uio.mod.o
