#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 *@c: character to be checked
 *
 * Return: On success 1, on failure 0.
 */

int _isalpha(int c)
{
	if (c > 65 && c < 122)
	{
		if (c > 90 && c < 97)
		{
			return (0);
		}
		return (1);
	}

	return (0);
}
