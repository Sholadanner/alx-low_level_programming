#include "main.h"

/**
 * print_numbers - the function has a void return type
 *
 * Return: the return value is void
 */

void print_numbers(void)
{
        int m;

        for (m = 0; m <= 9; m++)
        {
                _putchar(m + '0');
        }
        _putchar('\n');
}
