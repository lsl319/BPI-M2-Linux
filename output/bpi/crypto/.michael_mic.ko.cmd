cmd_crypto/michael_mic.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/michael_mic.ko crypto/michael_mic.o crypto/michael_mic.mod.o
