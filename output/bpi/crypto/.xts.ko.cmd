cmd_crypto/xts.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/xts.ko crypto/xts.o crypto/xts.mod.o
