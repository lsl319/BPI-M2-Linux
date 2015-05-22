cmd_net/core/pktgen.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o net/core/pktgen.ko net/core/pktgen.o net/core/pktgen.mod.o
