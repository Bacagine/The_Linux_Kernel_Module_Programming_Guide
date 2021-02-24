/*
* sched.c − scheduale a function to be called on every timer interrupt.
*
* Copyright (C) 2001 by Peter Jay Salzman
*/
/*
* The necessary header files
*/
/*
* Standard in kernel modules
*/
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/proc_fs.h>
#include <linux/workqueue.h>
#include <linux/sched.h>
#include <linux/init.h>
#include <linux/interrupt.h>
/*
/*
/*
/*
/*
We're doing kernel work */
Specifically, a module */
Necessary because we use the proc fs */
We scheduale tasks here */
We need to put ourselves to sleep
and wake up later */
/* For __init and __exit */
/* For irqreturn_t */
struct proc_dir_entry *Our_Proc_File;
#define PROC_ENTRY_FILENAME "sched"
#define MY_WORK_QUEUE_NAME "WQsched.c"
/*
* The number of times the timer interrupt has been called so far
*/
static int TimerIntrpt = 0;
