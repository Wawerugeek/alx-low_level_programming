#include "main.h"
/**
 *sqrt2 - retuns the natural sqaure root of a number
 *@a: same no. as n
 *@b: moves from 1 to n
 *Return: 1 on success and -1 if an errr
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 *_sqrt_recursion - returns natural square root of a number
 *@n: no.
 *Return: 1 on success and -1 for error
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
