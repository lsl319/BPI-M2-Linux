cmd_drivers/hwmon/hwmon-vid.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/hwmon/hwmon-vid.ko drivers/hwmon/hwmon-vid.o drivers/hwmon/hwmon-vid.mod.o