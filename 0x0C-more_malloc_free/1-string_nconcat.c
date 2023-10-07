#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string to be concatenated
 *
 * @s2: second string to be concatenated
 *
 * @n: number of bytes of the second string should be copied
 *
 * Return: a pointer to the allocated memory for the
 * concatenation if successful, if unsuccessful, the
 * return value will be NULL and if NULL is passed to
 * the parameters an empty string will be returned
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int slen1 = 0;
	unsigned int slen2 = 0;
	char *cat;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	while (s1[i])
		i++;
	while (s2[slen2])
		slen2++;
	if (n >= slen2)
		slen1 = i + slen2;
	else
		slen1 = i + n;

	cat = malloc(sizeof(char) * (slen1 + 1));
	if (cat == NULL)
		return (NULL);
	slen2 = 0;
	while (j < slen1)
	{
		if (j <= i)
			cat[j] = s1[j];
		if (j >= i)
		{
			cat[j] = s2[slen2];
			slen2++;
		}
		j++;
	}
	cat[j] = '\0';
	return (cat);
}
