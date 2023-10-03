#include <stdio.h>

/**
 * _puts - printing a string
 *
 * @str: string to be printed
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
