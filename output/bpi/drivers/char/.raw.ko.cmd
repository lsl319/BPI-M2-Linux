cmd_drivers/char/raw.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/char/raw.ko drivers/char/raw.o drivers/char/raw.mod.o
