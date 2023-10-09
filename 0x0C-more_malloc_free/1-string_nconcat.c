#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string to be concatenated
 * @s2: second string to be concatenated
 * @n: amount of bytes to be concatenated
 * Return: to be determined
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	int strlen1 = 0;
	int strlen2 = 0;
	char *cat;

	if (s1 == NULL || s2 == NULL)
		return ("");
	for (i = 0; s1[i] != '\0'; i++)
		strlen1++;
	for (i = 0; s2[i] != '\0'; i++)
		strlen2++;
	if (n > strlen2)
		n = strlen2;
	cat = malloc(sizeof(char) * (strlen1 + n) + 1);
	if (cat == NULL)
		return (NULL);
	for (i = 0; i < strlen1; i++)
		cat[i] = s1[i];
	for (j = 0; j < n; j++)
		cat[strlen1 + j] = s2[j];
	cat[strlen1 + j] = '\0';
	return (cat);
}
