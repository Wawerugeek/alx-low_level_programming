#include "main.h"
/**
 *swap_int - this function switches the value of two intergers
 *@a: the first int
 *@b: the second it
 *Return: always a zero
 */
void swap_int(int *a, int *b)
{
	int wesh = *a;

	*a = *b;
	*b = wesh;
}
