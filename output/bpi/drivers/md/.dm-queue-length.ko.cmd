cmd_drivers/md/dm-queue-length.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/md/dm-queue-length.ko drivers/md/dm-queue-length.o drivers/md/dm-queue-length.mod.o