cmd_drivers/hwmon/nct7802.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/hwmon/nct7802.ko drivers/hwmon/nct7802.o drivers/hwmon/nct7802.mod.o