#include "hash_tables.h"

/**
 * key_index - get the index at key
 * @key: The key to get index of
 * @size: size of array
 *
 * Return: Index of the key
 * Description: Uses the djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
