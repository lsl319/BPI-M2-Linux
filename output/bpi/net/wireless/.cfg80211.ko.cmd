cmd_net/wireless/cfg80211.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o net/wireless/cfg80211.ko net/wireless/cfg80211.o net/wireless/cfg80211.mod.o
