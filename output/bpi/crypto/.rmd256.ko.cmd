cmd_crypto/rmd256.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/rmd256.ko crypto/rmd256.o crypto/rmd256.mod.o
