#include "hash_tables.h"
/**
 * key_index - get the index to store this hash table key
 *
 * @key: the input key
 * @size: the size of the hash table
 * Return: the index from the hash of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
