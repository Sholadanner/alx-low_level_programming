#include "main.h"

/**
 * _strpbrk - entry point
 *
 * @s: first input
 *
 * @accept: second input
 *
 * Return: to be determined
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return ('\0');
}
