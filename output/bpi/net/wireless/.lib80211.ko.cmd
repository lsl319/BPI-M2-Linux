cmd_net/wireless/lib80211.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o net/wireless/lib80211.ko net/wireless/lib80211.o net/wireless/lib80211.mod.o