cmd_net/ipv4/ip_gre.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o net/ipv4/ip_gre.ko net/ipv4/ip_gre.o net/ipv4/ip_gre.mod.o
