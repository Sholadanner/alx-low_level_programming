#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function to copy a string
 * @str: string to be copied
 * Return: to be determined
 */

char *_strdup(char *str)
{
	int count = 0;
	int i;
	char *copy;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	return (copy);
}
