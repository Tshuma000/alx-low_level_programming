#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet in lowercase except q and e
 *
 * Return: 0
 */

int main(void)
{
	char ch[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (ch[i] == 'e')
		{
			continue;
		} else if (ch[i] == 'q')
		{
			continue;
		} else
		{
			putchar(ch[i]);
		}
	}
	putchar('\n');
	return (0);
}
