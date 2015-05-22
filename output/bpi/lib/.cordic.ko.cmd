cmd_lib/cordic.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o lib/cordic.ko lib/cordic.o lib/cordic.mod.o
