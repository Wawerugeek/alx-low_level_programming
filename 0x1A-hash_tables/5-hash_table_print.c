#include "hash_tables.h"
/**
 * hash_table_print - prints the table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node1;
	unsigned long int x, c_flag = 0;

	if (ht == NULL || !ht->array)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		node1 = ht->array[x];
		if (node1 != NULL)
		{
			while (node1 != NULL)
			{
				if (c_flag == 1)
					printf(", ");
				printf("'%s' : '%s'", node1->key, node1->value);
				c_flag = 1;
				node1 = node1->next;
			}
		}
	}
	printf("}\n");
}

