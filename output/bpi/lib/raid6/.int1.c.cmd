cmd_lib/raid6/int1.c := awk -f/home/pi/kernel/linux-4.0.2/lib/raid6/unroll.awk -vN=1 < /home/pi/kernel/linux-4.0.2/lib/raid6/int.uc > lib/raid6/int1.c || ( rm -f lib/raid6/int1.c && exit 1 )
