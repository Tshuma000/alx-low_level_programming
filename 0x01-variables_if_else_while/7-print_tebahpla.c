#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet in reverse using putchar
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char lower_alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 25; i >= 0; i--)
		putchar(lower_alphabet[i]);
	putchar('\n');
	return (0);
}
