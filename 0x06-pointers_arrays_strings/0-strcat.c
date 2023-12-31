#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: the string to be appended
 * @src: the appending string
 *
 * Return: returns the address of dest
 */

char *_strcat(char *dest, char *src)
{
	char *destend;

	destend = dest;

	while (*destend != '\0')
	{
		destend++;
	}

	while (*src != '\0')
	{
		*destend = *src;
		destend++;
		src++;
	}
	*destend = '\0';
	return (dest);
}
