#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * relative to the minumum number of n bytes
 *
 * @dest: string to be appended
 * @src: appending string
 *
 * Return: function returns the address of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *destend;

	destend = dest;

	while (*destend != '\0')
	{
		destend++;
	}

	while (*src !='\0' && n > 0)
	{
		*destend = *src;
		destend++;
		src++;
		n--;
	}
	return (dest);
}
