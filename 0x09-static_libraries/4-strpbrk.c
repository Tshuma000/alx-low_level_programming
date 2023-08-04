#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * _strpbrk - breaks string
 *@s: string
 *@accept: accept
 *
 * Return: accepts
 */

char *_strpbrk(char *s, char *accept)
{
	return strpbrk(s, accept);
}
