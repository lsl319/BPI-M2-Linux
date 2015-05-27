cmd_crypto/rmd160.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/rmd160.ko crypto/rmd160.o crypto/rmd160.mod.o
