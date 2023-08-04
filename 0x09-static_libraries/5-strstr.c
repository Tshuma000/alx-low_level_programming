#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strstr - string
 *@haystack: haystack is a tring
 *@needle: substring
 *
 * Return: the substring
 */

char *_strstr(char *haystack, char *needle)
{
	return strstr(haystack, needle);
}
