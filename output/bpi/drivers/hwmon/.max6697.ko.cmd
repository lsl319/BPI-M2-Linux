cmd_drivers/hwmon/max6697.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/hwmon/max6697.ko drivers/hwmon/max6697.o drivers/hwmon/max6697.mod.o