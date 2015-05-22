cmd_drivers/net/dummy.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/net/dummy.ko drivers/net/dummy.o drivers/net/dummy.mod.o
