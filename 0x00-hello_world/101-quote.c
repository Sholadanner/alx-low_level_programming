#include <unistd.h>
#include <string.h>

/**
 * main - this program shows the function with int return type
 *
 * Return: the return has an argument of 1
 *
 * This program intends to print a string
 */

int main(void)
{
	const char *m =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, m, strlen(m));

	return (1);
}
