cmd_drivers/md/dm-service-time.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/md/dm-service-time.ko drivers/md/dm-service-time.o drivers/md/dm-service-time.mod.o