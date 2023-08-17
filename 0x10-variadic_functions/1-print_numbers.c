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
	va_list myNumbers;
	unsigned int i;

	va_start(myNumbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(myNumbers, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(myNumbers);
}
