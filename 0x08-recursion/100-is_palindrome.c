#include "main.h"

int check_pal(char *s, int j, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - determine if a string is a palindrome
 * @s: string to be examined
 * Return: to be determined
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the lenght of strig
 * @s: string to be evaluated
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - recursively checkes the characters for a palindrome
 * @s: string to be evaluated
 * @j: iterator
 * @l: lenght of the string
 * Return: to be determined
 */
int check_pal(char *s, int j, int l)
{
	if (*(s + j) != *(s + l - 1))
		return (0);
	if (j >= l)
		return (1);
	return (check_pal(s, j + 1, l - 1));
}
