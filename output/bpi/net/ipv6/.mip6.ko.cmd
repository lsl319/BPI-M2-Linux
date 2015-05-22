cmd_net/ipv6/mip6.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o net/ipv6/mip6.ko net/ipv6/mip6.o net/ipv6/mip6.mod.o
