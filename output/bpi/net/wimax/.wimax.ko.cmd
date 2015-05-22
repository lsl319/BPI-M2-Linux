cmd_net/wimax/wimax.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o net/wimax/wimax.ko net/wimax/wimax.o net/wimax/wimax.mod.o
