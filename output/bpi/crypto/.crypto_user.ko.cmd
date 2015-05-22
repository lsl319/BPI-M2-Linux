cmd_crypto/crypto_user.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/crypto_user.ko crypto/crypto_user.o crypto/crypto_user.mod.o
