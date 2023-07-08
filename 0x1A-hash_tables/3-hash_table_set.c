#include "hash_tables.h"
/**
 * hash_table_set - sets a the specific index key in the hash table to value
 *
 * @ht: the hash table to insert to
 * @key: the key to store in the hash table
 * @value: the value to be stored in the key
 * Return: exit status of the function
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n = malloc(sizeof(hash_node_t));

	if (n != NULL && ht != NULL)
	{
		n->key = strdup(key);
		n->value = strdup(value);
		n->next = NULL
		/* ht->array[key_index((const unsigned char *)key, ht->size)]*/;
		ht->array[key_index((const unsigned char *)key, ht->size)] = n;
		return (1);
	}
	return (0);
}
