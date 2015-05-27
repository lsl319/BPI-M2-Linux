cmd_lib/raid6/int4.c := awk -f/home/pi/kernel/linux-4.0.2/lib/raid6/unroll.awk -vN=4 < /home/pi/kernel/linux-4.0.2/lib/raid6/int.uc > lib/raid6/int4.c || ( rm -f lib/raid6/int4.c && exit 1 )
