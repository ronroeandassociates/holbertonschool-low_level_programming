#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht:  is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return:  the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	char *value_list;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	value_list = strdup(key);
	i = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, value_list) == 0)
			break;
		tmp = tmp->next;
	}
	free(value_list);
	if (tmp == NULL)
		return (NULL);

	return (tmp->value);
}
