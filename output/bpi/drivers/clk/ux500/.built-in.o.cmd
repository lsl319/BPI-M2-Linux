cmd_drivers/clk/ux500/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o drivers/clk/ux500/built-in.o drivers/clk/ux500/clk-prcc.o drivers/clk/ux500/clk-prcmu.o drivers/clk/ux500/clk-sysctrl.o drivers/clk/ux500/u8500_of_clk.o drivers/clk/ux500/u8500_clk.o drivers/clk/ux500/u9540_clk.o drivers/clk/ux500/u8540_clk.o drivers/clk/ux500/abx500-clk.o 