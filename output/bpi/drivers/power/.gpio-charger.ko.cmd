cmd_drivers/power/gpio-charger.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/power/gpio-charger.ko drivers/power/gpio-charger.o drivers/power/gpio-charger.mod.o
