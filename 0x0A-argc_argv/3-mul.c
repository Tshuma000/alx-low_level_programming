#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints product of two numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	int n1 = 1, n2 = 4;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Erroe\n");
		return (1);
	}

	return (0);
}
