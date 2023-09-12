#include "main.h"

/**
 * main - the main function has an int return type
 *
 * Return: the return value is 0
 *
 * The code aims to print a string
 */

int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
	return (0);
}
