cmd_crypto/xor.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/xor.ko crypto/xor.o crypto/xor.mod.o
