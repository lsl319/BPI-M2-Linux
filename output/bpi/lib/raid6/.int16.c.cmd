cmd_lib/raid6/int16.c := awk -f/home/pi/kernel/linux-4.0.2/lib/raid6/unroll.awk -vN=16 < /home/pi/kernel/linux-4.0.2/lib/raid6/int.uc > lib/raid6/int16.c || ( rm -f lib/raid6/int16.c && exit 1 )
