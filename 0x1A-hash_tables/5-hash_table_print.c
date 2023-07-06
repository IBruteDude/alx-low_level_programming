#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table's contents
 *
 * @ht: input hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	size_t first_done = 0, i;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			if (first_done)
				putchar(','), putchar(' ');
			first_done++;
			printf("'%s': '%s'", node->key, node->value);
		}
	}
	putchar('}');
	putchar('\n');
}
