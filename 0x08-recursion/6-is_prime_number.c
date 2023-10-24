#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * or 0 if not
 * @n: input integer
 *
 * Return: 1 if prime number, 0 if otherwise
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
