#include "lists.h"

/**
 *print_list - prints a list
 *@h: list
 *Return: no of elements linked
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		i++;
	}
	return (i);
}
