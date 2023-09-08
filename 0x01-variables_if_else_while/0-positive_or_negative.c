#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - this program shows a main function with int return type
 *
 * Return: the return for the main function here is void, 0
 *
 * This program will assign a random number to a variable, n.
 *
 * The variable, n, will store a different value every time the
 * program runs.
 *
 * The program wil show if the value of the variable, n, is
 * positive, negative, or zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0){
		printf("%d is negative\n");
	} else if(n == 0) {
		printf("%d is zero\n");
	} else(n < 0) {
		printf("%d is positive\n");
	}
	return (0);
}
