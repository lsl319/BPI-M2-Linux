cmd_drivers/md/raid10.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/md/raid10.ko drivers/md/raid10.o drivers/md/raid10.mod.o
