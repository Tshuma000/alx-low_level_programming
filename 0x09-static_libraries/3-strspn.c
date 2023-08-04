#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _strspn - strings pan
 *@s: string
 *@accept: accept
 *
 * Return: accept
 */

unsigned int _strspn(char *s, char *accept)
{
	return strspn(s, accept);
}
