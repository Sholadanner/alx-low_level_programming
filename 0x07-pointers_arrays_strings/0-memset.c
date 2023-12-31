#include "main.h"

/**
 * _memset - fills memory with constant bytes
 *
 * @s: pointer to the memory area to be filled
 * with constant bytes
 *
 * @b: constant byte value to be used to fill memory area s
 *
 * @n: number of bytes to fill with constant bytes b
 *
 * Return: returns a pointer to the original memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
