cmd_drivers/net/wireless/rtlwifi/rtlwifi.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/net/wireless/rtlwifi/rtlwifi.ko drivers/net/wireless/rtlwifi/rtlwifi.o drivers/net/wireless/rtlwifi/rtlwifi.mod.o