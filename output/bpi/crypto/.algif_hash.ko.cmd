cmd_crypto/algif_hash.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/algif_hash.ko crypto/algif_hash.o crypto/algif_hash.mod.o
