cmd_drivers/input/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o drivers/input/built-in.o drivers/input/input-core.o drivers/input/ff-memless.o drivers/input/input-polldev.o drivers/input/sparse-keymap.o drivers/input/matrix-keymap.o drivers/input/mousedev.o drivers/input/joydev.o drivers/input/evdev.o drivers/input/keyboard/built-in.o drivers/input/mouse/built-in.o drivers/input/joystick/built-in.o drivers/input/tablet/built-in.o drivers/input/touchscreen/built-in.o drivers/input/misc/built-in.o 
