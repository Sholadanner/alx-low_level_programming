#include "main.h"

/**
 * _puts_recursion - function to print string
 *
 * @s: the string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
