cmd_crypto/wp512.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/wp512.ko crypto/wp512.o crypto/wp512.mod.o
