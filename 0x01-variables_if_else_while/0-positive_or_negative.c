#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - this program shows a main funtion with int return type
 *
 * Return: the return for the main funtion here is void, 0
 *
 * This program will assign a random number to a variable, n
 *
 * The variable,n, will store a different value every time the
 * program runs.
 *
 * The program will show if the value of the variable, n, is
 * positive, negative, or zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0) {
		printf("%ln is positive\n");
	} else if(n == 0) {
		printf("%ln is zero\n");
	} else {
		printf("%ln is negative\n");
	}
	return (0);
}
