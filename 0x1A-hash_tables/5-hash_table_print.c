#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
	size_t first_done = 0, i;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (first_done)
				putchar(','), putchar(' ');
			first_done++;
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		}
	}
	putchar('}');
	putchar('\n');
}
