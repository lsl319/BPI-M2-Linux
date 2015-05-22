cmd_net/nfc/nfc.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o net/nfc/nfc.ko net/nfc/nfc.o net/nfc/nfc.mod.o
