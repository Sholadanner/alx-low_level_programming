#include "main.h"

/**
 * _strlen_recursion - finding lenght of srting
 * @s: the string whose lenght is to be determined
 * Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);

}
