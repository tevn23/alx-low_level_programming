#include "3-calc.h"
#include <stdio.h>

int opp_add(int a, int b)
{
	return (a +b);
}

int op_sub
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Math Error\n");
		exit (100);
	}
	return (a / b);
}

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Math Error\n");
		exit(100);
	}
	return (a % b);
}

