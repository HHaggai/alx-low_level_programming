#include "hash_tables.h"

/**
 * key_index - Get the indx at which a key/val
 *      pair shuld be stord in arr of a hash table.
 * @key: The key to get the indx of.
 * @size: The size of the arr of the hash table.
 *
 * Return: The indx of the key.
 * Description: Uses djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
