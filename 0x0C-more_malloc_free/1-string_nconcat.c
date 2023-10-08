#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenats two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: the  number of bytes of the second string that should
 * be concatenated
 * Return: the be determined
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j;
	int i;
	int strlen1 = 0;
	int strlen2 = 0;
	char *cat;

	if (s1 == NULL || s2 == NULL)
		return ("");
	for (i = 0; s1[i] != '\0'; i++)
		strlen1++;
	for (i = 0; s2[i] != '\0'; i++)
		strlen2++;

	cat = malloc(sizeof(char) * (strlen1 + n) + 1);
	for (i = 0; i < strlen1; i++)
		cat[i] = s1[i];
	for (j = 0; j < n; j++)
		cat[strlen1 + j] = s2[j];
	if (cat == NULL)
		return (NULL);
	cat[strlen1 + j] = '\0';
	return (cat);
}
