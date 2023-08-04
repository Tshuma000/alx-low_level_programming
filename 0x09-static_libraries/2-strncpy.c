#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strncpy - copies a specified number of a string
 *@dest: destination
 *@src: the string
 *@n: specified number
 * 
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return strncpy(dest, src, n);
}
