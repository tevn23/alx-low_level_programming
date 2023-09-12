#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints if n is positive or negative
 * description - n is assigned random numbers so main checks if +/-/0
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
