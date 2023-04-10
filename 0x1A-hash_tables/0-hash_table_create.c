#include "hash_tables.h"
/**
 * hash_table_create - function creates a hash_table
 * @size: size of hash_table
 * Return: a pointer to the newly created hash table or Null if error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table1;
	unsigned long int x;

	table1 = malloc(sizeof(hash_table_t));
	if (!table1)
		return (NULL);
	table1->size = size;
	table1->array = malloc(sizeof(hash_node_t *) *size);
	if (table1->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		table1->array[x] = NULL;
	return (table1);
}
