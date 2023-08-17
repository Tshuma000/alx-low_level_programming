#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all inputed numbers
 * @n: the number of integers to be sum
 * @...: variadic arguments
 *
 * Return: the value of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int number, sum = 0;
	va_list myNumbers;

	va_start(myNumbers, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		number = va_arg(myNumbers, int);
		sum += number;
	}
	return (sum);
}
