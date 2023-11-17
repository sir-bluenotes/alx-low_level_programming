#include <stdio.h>

/**
*myStartupFun - Implement declaration function
*/
void myStartupFun(void) __attribute__ ((constructor));

/**
*myStartupFun - use function
*Return - nothing
*/
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
