cmd_net/nfc/hci/hci.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o net/nfc/hci/hci.ko net/nfc/hci/hci.o net/nfc/hci/hci.mod.o
