#include "hash_tables.h"
/**
 * key_index - provides index associated with certain key
 * @key : key to be indexed
 * @size: size of the hash table
 * Return: the key/value pair should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_r;

	key_r = hash_djb2(key) % size;
	return (key_r);
