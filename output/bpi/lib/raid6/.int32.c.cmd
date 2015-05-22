cmd_lib/raid6/int32.c := awk -f/home/pi/kernel/linux-4.0.2/lib/raid6/unroll.awk -vN=32 < /home/pi/kernel/linux-4.0.2/lib/raid6/int.uc > lib/raid6/int32.c || ( rm -f lib/raid6/int32.c && exit 1 )
