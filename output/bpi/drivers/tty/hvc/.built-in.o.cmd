cmd_drivers/tty/hvc/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o drivers/tty/hvc/built-in.o drivers/tty/hvc/hvc_console.o drivers/tty/hvc/hvc_irq.o drivers/tty/hvc/hvc_xen.o 
