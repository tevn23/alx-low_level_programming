#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - program outputs if the number is positive, negative or zero
*
* Description: through the function main this program prints 
* 
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* the conditional statement */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
