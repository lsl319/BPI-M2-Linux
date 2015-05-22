cmd_crypto/lz4.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/lz4.ko crypto/lz4.o crypto/lz4.mod.o
