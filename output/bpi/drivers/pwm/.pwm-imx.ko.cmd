cmd_drivers/pwm/pwm-imx.ko := arm-linux-gnueabihf-ld -EL -r  -T /home/pi/kernel/linux-4.0.2/scripts/module-common.lds --build-id  -o drivers/pwm/pwm-imx.ko drivers/pwm/pwm-imx.o drivers/pwm/pwm-imx.mod.o