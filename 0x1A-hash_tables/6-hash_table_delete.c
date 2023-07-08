#include "hash_tables.h"
/**
 * hash_table_delete - frees the contents of the hash table
 *
 * @ht: the hash table to be freed
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **nodes = ht->array, *node, *next;
	size_t i;

	for (i = 0; i < ht->size; i++)
	{
		node = nodes[i];
		if (node != NULL)
		{
			while (node->next != NULL)
			{
				next = node->next;
				free(node->key), free(node->value);
				free(node);
				node = next;
			}
			free(node->key), free(node->value);
			free(node);
		}
	}
	free(nodes);
	free(ht);
}
