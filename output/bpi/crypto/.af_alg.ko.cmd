cmd_crypto/af_alg.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/af_alg.ko crypto/af_alg.o crypto/af_alg.mod.o
