#include "main.h"

/**
 * rev_string - function to reverse a string.
 *@s: string to be reversed.
 */

void rev_string(char *s)
{
	int i, length, middle;
	char temp;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	middle = length / 2;
	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
