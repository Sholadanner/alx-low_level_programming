#include <stdio.h>

void initial(void) __attribute__ ((constructor));
/**
 * initial - this function is executed before the main
 * Return: void
 */

void initial(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
