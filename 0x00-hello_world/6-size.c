#include <stdio.h>

/**
 * main - this program shows the main function with int return type
 *
 * Return: the return has no aruments, 0
 *
 * The program aims to display the size of differnt types 
 *
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

