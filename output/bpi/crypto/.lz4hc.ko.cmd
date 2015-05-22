cmd_crypto/lz4hc.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/lz4hc.ko crypto/lz4hc.o crypto/lz4hc.mod.o
