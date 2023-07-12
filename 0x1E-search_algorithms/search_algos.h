#ifndef SEARCH_ALGOS_H_
#define SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>

/**
* struct listint_s - singly linked list 
* @n: Integer 
* @index: Index of the node in the list
* @next: Pointer to the next node
*/

typedef struct listint_s 
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
* struct skiplist_s - singly linked list including express lane
* @n: Integer
* @index: Index of the node in the list
* @next: Pointer to the next node
* @express: Pointer to the next node in the express lane
**/
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);


#endif