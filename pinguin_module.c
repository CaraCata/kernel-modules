/* pinguin_module.c - the first challenge */

#include <linux/init.h>      /* for macros */
#include <linux/kernel.h>    /* types, macros, etc */
#include <linux/module.h>    /* needed by all modules */

MODULE_LICENSE("Dual BSD/GPL");

static int __init pinguin_init(void)
{
    printk(KERN_INFO "Hello World!");
    return 0;
}

static void __exit pinguin_exit(void) 
{ 
    printk(KERN_INFO "Bye bye little pinguin!\n");
}

module_init(pinguin_init);
module_exit(pinguin_exit);

