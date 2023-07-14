#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet using putchar
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char ch[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0 ; i < 26; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
}
