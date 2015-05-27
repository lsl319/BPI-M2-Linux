cmd_drivers/scsi/ch.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/scsi/ch.ko drivers/scsi/ch.o drivers/scsi/ch.mod.o
