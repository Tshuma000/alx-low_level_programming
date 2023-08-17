#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: numbers of integers.
 * @...: variable arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int numbers, j = 0, k;
	va_list myNumbers;

	va_start(myNumbers, n);
	if (n == 0)
		return;
	while (separator[j])
		j++;
	for (i = 0; i < n; i++)
	{
		numbers = va_arg(myNumbers, int);
		printf("%d", numbers);
		if (i < n - 1)
		{
			if (separator != NULL)
			{
				for (k = 0; k < j; k++)
					printf("%c", separator[k]);
			}
		}
	}
	printf("\n");
}
