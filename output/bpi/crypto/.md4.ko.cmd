cmd_crypto/md4.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/md4.ko crypto/md4.o crypto/md4.mod.o
