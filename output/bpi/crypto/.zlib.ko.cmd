cmd_crypto/zlib.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/zlib.ko crypto/zlib.o crypto/zlib.mod.o
