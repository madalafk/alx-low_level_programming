#include "hash_tables.h"

/**
 * hash_table_get - gets a value associated with a key
 *
 * @ht: pointer to the hash table
 * @key: key of the hash
 * Return: value associated with the element, else NULL if element not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int kIndex;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	kIndex = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[kIndex];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
