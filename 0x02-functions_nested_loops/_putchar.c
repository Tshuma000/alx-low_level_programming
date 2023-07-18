#include "main.h"

/**
 * _putchar.c - function to print a character
 *
 * Return: on success 1.
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}
