#include <stdlib.h>
#include "lists.h"
/**
 *list_len - shows number of element in lst
 *@h: pointer to the list_t list
 *Return: no ofele
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
