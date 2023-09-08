#include <stdio.h>

/**
 * main - this program shows the main function with int return type
 *
 * Reaturn: the return has no aruments, 0
 *
 * The program aims to display the size of differnt types 
 *
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return(0);
}

