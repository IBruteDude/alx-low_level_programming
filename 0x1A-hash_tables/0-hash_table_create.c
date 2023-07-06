#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table of a definite size
 *
 * @size: the size of the created table
 * Return: the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (t == NULL)
		return (NULL);
	t->size = size;
	t->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (t->array == NULL)
	{
		free(t);
		return (NULL);
	}
	return (t);
}
