cmd_drivers/memstick/core/memstick.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/memstick/core/memstick.ko drivers/memstick/core/memstick.o drivers/memstick/core/memstick.mod.o