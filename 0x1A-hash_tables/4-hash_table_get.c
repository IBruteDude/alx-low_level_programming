#include "hash_tables.h"
/**
 * hash_table_get - gets the value stored for a specific key in a hash table
 *
 * @ht: the input hash table to look in
 * @key: the key to query the table
 * Return: the value if found, NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;

	if (ht == NULL)
		return (NULL);
	n = ht->array[key_index((const unsigned char *)key, ht->size)];
	while (n != NULL)
	{
		if (strcmp(n->key, key) == 0)
			return (n->value);
		n = n->next;
	}
	return (NULL);
}
