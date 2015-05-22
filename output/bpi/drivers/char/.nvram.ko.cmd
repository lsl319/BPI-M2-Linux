cmd_drivers/char/nvram.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/char/nvram.ko drivers/char/nvram.o drivers/char/nvram.mod.o
