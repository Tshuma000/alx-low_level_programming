#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strncat - concatenate string
 *@dest: the destination
 *@src: the string
 *@n: length of string
 *
 * Return: returns concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	return strncat(dest, src, n);
}
