cmd_drivers/power/ds2781_battery.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/power/ds2781_battery.ko drivers/power/ds2781_battery.o drivers/power/ds2781_battery.mod.o