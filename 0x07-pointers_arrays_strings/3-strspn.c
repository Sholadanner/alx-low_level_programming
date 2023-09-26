#include "main.h"

/**
 * _strspn - getting the lenght of prefix in a string
 *
 * @s: the sting to search for the prefix
 * @accept: string that contains the charachertes to be
 * looked for
 * 
 * Return: the lenght of the prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}
