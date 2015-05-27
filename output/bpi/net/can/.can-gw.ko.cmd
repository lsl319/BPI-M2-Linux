cmd_net/can/can-gw.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o net/can/can-gw.ko net/can/can-gw.o net/can/can-gw.mod.o
