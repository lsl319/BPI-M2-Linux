cmd_drivers/scsi/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o drivers/scsi/built-in.o drivers/scsi/scsi_mod.o drivers/scsi/scsi_transport_iscsi.o drivers/scsi/libiscsi.o drivers/scsi/libiscsi_tcp.o drivers/scsi/iscsi_tcp.o drivers/scsi/iscsi_boot_sysfs.o drivers/scsi/arm/built-in.o drivers/scsi/sd_mod.o drivers/scsi/sr_mod.o drivers/scsi/sg.o 
