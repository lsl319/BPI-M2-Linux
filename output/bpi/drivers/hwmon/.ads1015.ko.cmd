cmd_drivers/hwmon/ads1015.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/hwmon/ads1015.ko drivers/hwmon/ads1015.o drivers/hwmon/ads1015.mod.o