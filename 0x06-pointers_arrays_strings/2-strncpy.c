#include "main.h"

/**
 * _strncpy - function to copy two string
 *
 * @dest: string to be copied
 * @src: string being copied
 * @n: determines the ammount of characters to be copied
 *
 * Return: the address of dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	char *deststart;

	deststart = dest;

	while (*deststart != '\0' && n > 0)
	{
		*deststart = *src;
		deststart++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*deststart = '\0';
		deststart++;
		n--;
	}
	return (dest);
}
