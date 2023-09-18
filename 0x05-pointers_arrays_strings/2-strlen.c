#include "main.h"

/**
 * _strlen - countig lenght of string
 *
 * Return: c
 *
 * @s - string to be counted
 */

int _strlen(char *s)
{
	int a;
	int c = 0;

	for (a = 0; s[a] != '\0'; a++)
		c++;
	return (c);
}
