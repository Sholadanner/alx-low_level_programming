#include "main.h"
#include <stdio.h>

/**
 * error-file - function that checks if file opens
 * @filef: where file's coming from
 * @filet: where file's going
 * @argv: argument vector
 * Return: to be determined
 */

void error-file(int filef, int filet, char *argv[])
{
	if (filef == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (filet == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char * argv[])
{
	int filef, filet, error_close;
	ssize_t num_char, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp filef filet");
		exit(97);
	}
	filef = open(argv[1], O_RDONLY);
	filet = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error-file(filef, filet, argv);
	num_char = 1024;
	while (num_char == 1024)
	{
		num_char = read(filef, buffer, 1024);
		if (num_char == -1)
			error-file(-1, 0, argv);
		nwr = write(filet, buffer, num_char);
		if (nwr == -1)
			error-file(0, -1, argv);
	}

	error_close = close(filef);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filef);
		exit(100);
	}
	error_close - close(filet);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filef);
		exit(100);
	}
	return (0);
}
