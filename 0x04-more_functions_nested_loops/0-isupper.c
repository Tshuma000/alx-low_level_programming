#include "main.h"

/**
 * _isupper - checks for uppercase letters
 *@c: letter to be checked
 *
 * Return: if sucessfull 1, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
