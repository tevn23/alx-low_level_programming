#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - struct op
 * @op: operator to use
 * @f: function associated with operator
 */

typedef struct op
{
	char *op;
	int (*f)(int a, b);
} op_t;

int main(int argc, char *argv[]);
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);

#endif /* CALC_H */
