cmd_crypto/asymmetric_keys/asymmetric_keys.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/asymmetric_keys/asymmetric_keys.ko crypto/asymmetric_keys/asymmetric_keys.o crypto/asymmetric_keys/asymmetric_keys.mod.o
