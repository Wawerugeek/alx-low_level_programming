#include "main.h"
/**
 *factorial -  return a factorial of a given number
 *@n: int
 *Return: if n is less than 1 it should return -1 showing an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
