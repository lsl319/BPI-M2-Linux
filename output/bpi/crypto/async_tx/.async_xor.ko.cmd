cmd_crypto/async_tx/async_xor.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/async_tx/async_xor.ko crypto/async_tx/async_xor.o crypto/async_tx/async_xor.mod.o