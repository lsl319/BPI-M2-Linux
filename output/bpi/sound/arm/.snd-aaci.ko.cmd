cmd_sound/arm/snd-aaci.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o sound/arm/snd-aaci.ko sound/arm/snd-aaci.o sound/arm/snd-aaci.mod.o
