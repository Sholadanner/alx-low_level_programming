#include "main.h"

/**
 * _memcpy - function to copy memory area
 *
 * @dest: pointer to the destination memory area where you want
 * to copy the data
 *
 *  @src: pointer to the source memory area from which you want
 *  to copy the data
 *
 *  @n: the number of bytes to copy form the source to the destination
 *
 *  Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
