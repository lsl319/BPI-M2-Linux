cmd_drivers/virtio/virtio.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/virtio/virtio.ko drivers/virtio/virtio.o drivers/virtio/virtio.mod.o