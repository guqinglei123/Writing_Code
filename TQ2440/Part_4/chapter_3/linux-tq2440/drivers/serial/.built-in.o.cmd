cmd_drivers/serial/built-in.o :=  arm-linux-ld -EL    -r -o drivers/serial/built-in.o drivers/serial/serial_core.o drivers/serial/samsung.o drivers/serial/s3c2440.o 
