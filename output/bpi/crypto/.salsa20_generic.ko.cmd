cmd_crypto/salsa20_generic.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/salsa20_generic.ko crypto/salsa20_generic.o crypto/salsa20_generic.mod.o