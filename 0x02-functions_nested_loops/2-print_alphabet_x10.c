#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10x
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(alphabet[j]);
		}
		_putchar('\n');
	}
}
