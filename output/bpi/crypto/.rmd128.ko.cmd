cmd_crypto/rmd128.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/rmd128.ko crypto/rmd128.o crypto/rmd128.mod.o
