cmd_drivers/md/raid1.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/md/raid1.ko drivers/md/raid1.o drivers/md/raid1.mod.o
