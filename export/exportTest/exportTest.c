#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

static char *whom="World";
static int howmany=1;
module_param(howmany, int, S_IRUGO);
module_param(whom, charp, S_IRUGO);


extern int sayHello(int);

static int exportTest_init(void)
{
	sayHello(2);
	return 0;
}

static void exportTest_exit(void)
{
	printk(KERN_ALERT "now it is time to say goodbye!\n");
}

module_init(exportTest_init);
module_exit(exportTest_exit);

MODULE_LICENSE("GPL");
