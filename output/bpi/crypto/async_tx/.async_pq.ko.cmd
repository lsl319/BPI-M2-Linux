cmd_crypto/async_tx/async_pq.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o crypto/async_tx/async_pq.ko crypto/async_tx/async_pq.o crypto/async_tx/async_pq.mod.o