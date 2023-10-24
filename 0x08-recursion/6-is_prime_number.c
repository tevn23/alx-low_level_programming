#include "main.h"

int is_prime_recursion(int n, int i);
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * or 0 if not
 * @n: input integer
 *
 * Return: 1 if prime number, 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_recursion(n, n - 1));
}

/**
 * is_prime_recursion - checks is a number is prime or not
 * through trial and error.
 * @n: input integer to check
 * @i: iterator to use as a divisor to n
 *
 * Return: 1 if prime and 0 if not
 */

int is_prime_recursion(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	return (is_prime_recursion(n, i - 1));
}
