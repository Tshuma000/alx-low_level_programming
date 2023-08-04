#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if character is uppercase.
 *@c: the character
 *
 * Return: 1 if succesful
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
