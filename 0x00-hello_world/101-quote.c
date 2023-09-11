#include <unistd.h>
/**
 * main - this program shows the function with int return type
 *
 * Return: the return has an argument of 1
 *
 * This program intends to print a string
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, message, sizeof(message) - 1);

	return (1);
}
