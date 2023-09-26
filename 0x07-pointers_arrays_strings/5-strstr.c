#include "main.h"

/**
 * _strstr - entry point
 *
 * @haystack: input
 * @needle: input
 *
 * Return: to be determined
 */

char *_strstr(char *haystack, char *needle)
{
	for (*haystack != '\0'; heystack++)
	{
		char *one = heystack;
		char *two = neddle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (heystack);
	}
	return (NULL);
}
