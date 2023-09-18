#include "main.h"

/**
 * _puts - printing a string
 *
 * Return: voud
 *
 * @str: string to be printed
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
