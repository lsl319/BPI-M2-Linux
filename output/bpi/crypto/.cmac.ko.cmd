cmd_crypto/cmac.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/cmac.ko crypto/cmac.o crypto/cmac.mod.o
