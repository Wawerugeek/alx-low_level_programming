#include "main.h"
#include <stdio.h>

/**
 *reverse_array - reverse the conten t of an array
 *@n: an array of int
 *@a:no. of swaps
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
	int *p, x, fuck, alx;

	p = a;
	for (x = 1; x < n; x++)
	{
		p++;
	}
	for (alx = 0; alx < x / 2; alx++)
	{
		fuck = a[alx];
		a[alx] = *p;
		*p = fuck;
		p--;
	}
}
