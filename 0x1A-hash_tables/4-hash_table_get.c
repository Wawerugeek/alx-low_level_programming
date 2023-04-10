#include "hash_tables.h"
/**
 *hash_table_get - gives the key corresponding value
 * @ht:  hash table
 * @key: key associated
 *Return:  the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *c_node;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	c_node = ht->array[index];
	while (strcmp(c_node->key, key) && c_node != NULL)
		c_node = c_node->next;
	if (c_node == NULL)
		return (NULL);
	else
		return (c_node->value);
}
