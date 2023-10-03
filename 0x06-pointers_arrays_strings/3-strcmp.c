#include "main.h"

/**
 * _strcmp - function to compare two srings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: depending on the comparison reults
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
			else
				return (s1[i] - s2[i]);
		}
	}

	return (0);
}

