cmd_lib/lz4/lz4hc_compress.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o lib/lz4/lz4hc_compress.ko lib/lz4/lz4hc_compress.o lib/lz4/lz4hc_compress.mod.o