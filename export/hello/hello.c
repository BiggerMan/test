#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

static char *whom="World";
static int howmany=1;
module_param(howmany, int, S_IRUGO);
module_param(whom, charp, S_IRUGO);


static int sayHello(int howmany)
{
	while(howmany>0)
	{
		printk(KERN_ALERT "hello %s!\n",whom);
		howmany--;
	}
	return 0;
}
EXPORT_SYMBOL(sayHello);

static int hello_init(void)
{
	/*printk(KERN_ALERT "Hello world!\n");*/
	sayHello(howmany);
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "Goodbye, cruel world!\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
