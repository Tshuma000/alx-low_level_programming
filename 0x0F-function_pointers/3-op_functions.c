#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add two integers
 * @a: first
 * @b: second
 *
 * Return: sum of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two integers
 * @a: first
 * @b: second
 *
 * Return: difference of a -b;
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - subtract two integers
 * @a: first
 * @b: second
 *
 * Return: difference of a * b;
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - subtract two integers
 * @a: first
 * @b: second
 *
 * Return: difference of a * b;
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Eroor\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - subtract two integers
 * @a: first
 * @b: second
 *
 * Return: modulo of a % b;
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
