#include "main.h"

/**
 * set_string - set a value to a pointer to a string
 * @s: pointer to the pointer to a string
 * @to: input
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
