cmd_crypto/gcm.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/gcm.ko crypto/gcm.o crypto/gcm.mod.o
