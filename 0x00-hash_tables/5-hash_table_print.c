#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht:  is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned int x = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if ((x > 0) && (ht->array[i] != NULL))
			printf(", ");
		while (ht->array[i] != NULL)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			x++;
			if (ht->array[i]->next != NULL)
				printf(", ");
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
