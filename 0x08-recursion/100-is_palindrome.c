#include "main.h"
#include <string.h>

int is_palindrome_recursion(char *s, int left, int right);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string to be checked
 *
 * Return: 1 if palindrome, 0 if otherwise
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_recursion(s, 0, len - 1));
}

/**
 * is_palindrome_recursion - helper function to is_palindrome
 * @s: input string
 * @left: index from beginning of s
 * @right: index from end of s
 *
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome_recursion(char *s, int left, int right)
{
	if (left >= right)
		return (1);

	if (s[left] != s[right])
		return (0);
	return (is_palindrome_recursion(s, left + 1, right - 1));
}

