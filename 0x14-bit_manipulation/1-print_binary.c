#include "main.h"

/**
 * _power - finds the base power
 * @power: power exponent
 * @base: base exponent
 * Return: the calculated value
 */

unsigned long int _power(unsigned int base, unsigned int power)
{
	unsigned long int number = 1;
	unsigned int i;

	for (i = 1; i <= power; i++)
		number *= base;
	return (number);
}

#include "main.h"

/**
 * print_binary - function prints binary repreentation of a number
 * @n: number to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int div, check;
	char flag;

	floag = 0;

	div = _power(2, sizeof(unsigned long int) *8 - 1);

	while (div != 0)
	{
		check = n & div;
		if (check == div)
		{
			flag = 1;
			_putchar ('1');
		}
		else if (flag == 1 || div == 1)
			_putchar ('0');
		div >>= 1;
	}
}
