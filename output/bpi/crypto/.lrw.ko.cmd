cmd_crypto/lrw.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/lrw.ko crypto/lrw.o crypto/lrw.mod.o
