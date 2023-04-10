#include "hash_tables.h"
/**
 * hash_table_print - prints the table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node1;
	char *c_flag = " ";
	unsigned long int x;

	if (ht == NULL || !ht->array)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			node1 = ht->array[x];
			while (node1)
			{
				printf("%s'%s' : '%s'", c_flag, node1->key, node1->value);
				c_flag = ", ";
				node1 = node1->next;
			}
		}
	}
	printf("}\n");
}

