cmd_crypto/drbg.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/drbg.ko crypto/drbg.o crypto/drbg.mod.o
