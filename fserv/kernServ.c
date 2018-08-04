#include <linux/module.h>    // included for all kernel modules
#include <linux/kernel.h>    // included for KERN_INFO
#include <linux/init.h>      // included for __init and __exit macros

#include <stdio.h>

#define MODULE_NAME "rootkit"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("HBchevelle68");
MODULE_DESCRIPTION("kern file server");

static int __init ks_start(void){

    printk(KERN_INFO "Loading kern fserv module...\n");

    return 0;
}

static void __exit ks_end(void){

    printk(KERN_INFO "Goodbye\n");
}

module_init(hello_start);
module_exit(hello_end);
