cmd_crypto/pcbc.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/pcbc.ko crypto/pcbc.o crypto/pcbc.mod.o
