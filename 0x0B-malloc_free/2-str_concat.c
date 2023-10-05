#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: to be determined
 */

char *str_concat(char *s1, char *s2)
{
	char strlen1 = 0;
	char strlen2 = 0;
	int i;
	char *concat;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	for (i = 0; s1[i] != '\0'; i++)
		strlen1++;
	for (i = 0; s2[i] != '\0'; i++)
		strlen2++;
	concat = malloc(sizeof(char) * (strlen1 + strlen2) + 1);

	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		concat[strlen1 + i] = s2[i];
	return (concat);
}
