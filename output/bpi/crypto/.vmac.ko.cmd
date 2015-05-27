cmd_crypto/vmac.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/vmac.ko crypto/vmac.o crypto/vmac.mod.o
