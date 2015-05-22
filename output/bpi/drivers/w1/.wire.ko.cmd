cmd_drivers/w1/wire.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/w1/wire.ko drivers/w1/wire.o drivers/w1/wire.mod.o
