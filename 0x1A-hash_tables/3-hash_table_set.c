#include "hash_tables.h"
/**
 * hash_table_set - set the value of hash table
 * @ht: desgniated hash table
 * @key: the indexed key
 * @value: the value to be set
 * Return: 1 on success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node1;
	char *set_value;
	unsigned long int index, x;

	if (!ht || !key || !value)
		return (0);
	set_value = strdup(value);
	if (set_value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (x = index; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = set_value;
			return (1);
		}
	}
	node1 = malloc(sizeof(hash_node_t));
	if (node1 == NULL)
	{
		free(set_value);
		return (1);
	}
	node1->key = strdup(key);
	if (node1->key == NULL)
	{
		free(node1);
		return (0);
	}
	node1->value = set_value;
	node1->next = ht->array[index];
	ht->array[index] = node1;

	return (1);
}
