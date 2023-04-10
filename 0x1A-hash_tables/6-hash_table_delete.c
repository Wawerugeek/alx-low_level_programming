#include "hash_tables.h"
/**
 * hash_table_delete - function delest the hash_table
 * @ht: hash table
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *node1;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			while (ht->array[x] != NULL)
			{
				node1 = ht->array[x]->next;
				free(ht->array[x]->key);
				free(ht->array[x]->value);
				free(ht->array[x]);
				ht->array[x] = node1;
			}
		}
	}
	free(ht->array);
	free(ht);
}
