#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * _memcpy - copy string
 *@dest: destination
 *@src: string
 *@n: length
 * 
 * Return: length
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return memcpy(dest, src, n);
}
