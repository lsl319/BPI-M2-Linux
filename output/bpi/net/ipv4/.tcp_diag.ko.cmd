cmd_net/ipv4/tcp_diag.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o net/ipv4/tcp_diag.ko net/ipv4/tcp_diag.o net/ipv4/tcp_diag.mod.o
