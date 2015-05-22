cmd_drivers/scsi/st.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/scsi/st.ko drivers/scsi/st.o drivers/scsi/st.mod.o
