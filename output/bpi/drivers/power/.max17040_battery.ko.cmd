cmd_drivers/power/max17040_battery.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/power/max17040_battery.ko drivers/power/max17040_battery.o drivers/power/max17040_battery.mod.o