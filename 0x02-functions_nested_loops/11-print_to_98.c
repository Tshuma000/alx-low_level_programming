#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 *@n: first number to be printed
 *
 */

void  print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d", 98);
		return;
	}
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
		printf(",");
		printf(" ");
		}
		}
	printf("\n");
	for (i = n; i >= 98; i--)
	{
		printf("%d", i);
		if (i != 98)
		{
		printf(",");
		printf(" ");
		}
	}
	printf("\n");

}
