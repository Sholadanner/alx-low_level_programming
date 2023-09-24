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
        int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
