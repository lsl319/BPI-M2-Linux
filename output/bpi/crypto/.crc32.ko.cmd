cmd_crypto/crc32.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/crc32.ko crypto/crc32.o crypto/crc32.mod.o
