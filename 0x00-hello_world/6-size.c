#include <stdio.h>

/**
 * main - this program shows the main function with int return type
 *
 * Reaturn: the return has no aruments, 0
 *
 * The program aims to display the size of differnt types 
 *
 * The command used was printf and sizeof
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
		printf("size of an int: %lu byte(s)\n", sizeof(int));
		printf("size of a long int: %lu byte(s)\n", sizeof(long int));
		printf("size of a long long int: %lu byte(s)\n", sizeof(long long));
		printf("size of a float: %lu byte(s)\n", sizeof(float));
		return(0);
}

