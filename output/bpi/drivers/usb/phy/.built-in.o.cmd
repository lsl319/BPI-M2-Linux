cmd_drivers/usb/phy/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o drivers/usb/phy/built-in.o drivers/usb/phy/phy.o drivers/usb/phy/of.o drivers/usb/phy/phy-ab8500-usb.o drivers/usb/phy/phy-generic.o drivers/usb/phy/phy-tegra-usb.o drivers/usb/phy/phy-gpio-vbus-usb.o drivers/usb/phy/phy-isp1301.o drivers/usb/phy/phy-mxs-usb.o drivers/usb/phy/phy-ulpi.o drivers/usb/phy/phy-ulpi-viewport.o 
