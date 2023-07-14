#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all numbers of base 16 in lowercase.
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char lower_alphabet[6] = "abcdef";

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (i = 0; i < 6; i++)
		putchar(lower_alphabet[i]);
	putchar('\n');
	return (0);
}
