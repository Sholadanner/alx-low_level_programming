#include "main.h"

/**
 * string_toupper - function to change lowaercase to uppercase
 * characters
 *
 * @str: the string
 *
 * Return: the original pointer to the modified string
 */

char *string_toupper(char *str)
{
	char *original;

	original = str;

	while (*str != 0)

	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}
	return (original);
}
