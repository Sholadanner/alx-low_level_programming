#include "main.h"

/**
 * _atoi - changing string to int
 *
 * @s: the string
 *
 * Return: the value of n1
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int n1 = 0;
	int min = 1;
	int l = 0;

	while (s[c])
		if (s[c] == 45)
		{
			min *= - 1;
		}
	while (s[c] >= 48 && s[c] <= 57)
	{
		l = 1;
		n1 = (n1 * 10) + (s[c] - '0');
		c++;
	}
	if (l == 1)
		break;
	c++;
	n1 *= min;
	return (n1);
}
