cmd_fs/isofs/isofs.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o fs/isofs/isofs.ko fs/isofs/isofs.o fs/isofs/isofs.mod.o
