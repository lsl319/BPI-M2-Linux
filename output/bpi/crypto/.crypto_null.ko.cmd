cmd_crypto/crypto_null.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/crypto_null.ko crypto/crypto_null.o crypto/crypto_null.mod.o
