ifneq ($(KERNELRELEASE),)
	obj-m := exportTest.o
else
	KERNELDIR ?= /lib/modules/$(shell uname -r)/build
	PWD := $(shell pwd)
	KBUILD_EXTRA_SYMBOLS=/root/Drivers/hello/Module.symvers
	export KBUILD_EXTRA_SYMBOLS
default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions *.unsigned *.order *symvers
endif

