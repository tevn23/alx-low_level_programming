#include "main.h"

int find_sqrt(int n, int guess);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number passed to function
 *
 * Return: natural square root
 * -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - helper function to find square root
 * @n: number passed to the function
 * @guess: current guess of the square root
 *
 * Return: square of n or -1 if not natural square root
 */

int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	else if (guess * guess > n)
		return (-1);

	return (find_sqrt(n, guess + 1));
}
