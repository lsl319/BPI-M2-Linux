cmd_drivers/net/wireless/hostap/hostap.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/net/wireless/hostap/hostap.ko drivers/net/wireless/hostap/hostap.o drivers/net/wireless/hostap/hostap.mod.o