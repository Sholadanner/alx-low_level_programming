#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: a pointer to the allocated memory for the
 * concatenation if successful, if unsuccessful, the
 * return value will be NULL and if NULL is passed to
 * the parameters an empty string will be returned
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	int slen1 = 0;
	int slen2 = 0;
	char *cat;

	if (s1 == NULL || s2 == NULL)
		return ("");
	for (i = 0; s1[i] != '\0'; i++)
		slen1++;
	for (i = 0; s2[i] != '\0'; i++)
		slen2++;
	cat = malloc(sizeof(char) * (slen1 + n) + 1);
	for (i = 0; i < slen1; i++)
		cat[i] = s1[i];
	for (j = 0; j < n; j++)
		cat[slen1 + j] = s2[j];
	if (cat == NULL)
		return (NULL);
	cat[slen1 + j] = '\0';
	return (cat);
}
