cmd_drivers/net/team/team.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/net/team/team.ko drivers/net/team/team.o drivers/net/team/team.mod.o
