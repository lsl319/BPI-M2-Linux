cmd_drivers/hwmon/ds1621.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/hwmon/ds1621.ko drivers/hwmon/ds1621.o drivers/hwmon/ds1621.mod.o