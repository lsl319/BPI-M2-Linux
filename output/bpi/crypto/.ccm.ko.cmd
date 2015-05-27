cmd_crypto/ccm.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/ccm.ko crypto/ccm.o crypto/ccm.mod.o
