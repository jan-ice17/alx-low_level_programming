#include <stdio.h>

/**
 * premain - Prints strings before the main function is executed.
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
