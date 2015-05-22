cmd_crypto/ctr.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/ctr.ko crypto/ctr.o crypto/ctr.mod.o
