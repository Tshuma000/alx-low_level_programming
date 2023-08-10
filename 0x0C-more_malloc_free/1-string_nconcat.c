#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2
 *
 * Return: pointer to a newly allocated space.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int w, i = 0, j = 0, k, b, l = 0;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	k = i + j;
	b = i + n;
	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	if (n >= j)
		ptr = malloc(sizeof(char) * (b + 1));
	else
		ptr = malloc(sizeof(char) * (k + 1));
	if (!ptr)
		return (NULL);
	w = 0;
	while (l < i)
	{
		ptr[l] = s1[l];
		l++;
	}
	while (n < j && l < b)
		ptr[l++] = s2[w++];
	while (n >= j && l < k)
		ptr[l++] = s2[w++];
	ptr[l] = '\0';
	return (ptr);
}
