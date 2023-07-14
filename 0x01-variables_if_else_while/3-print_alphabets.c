#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lower and upper case alphabet using putchar
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char lower_case[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper_case[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0 ; i < 26; i++)
	{
		putchar(lower_case[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(upper_case[i]);
	}
	putchar('\n');
	return (0);
}
