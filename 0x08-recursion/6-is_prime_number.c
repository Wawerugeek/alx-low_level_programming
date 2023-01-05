#include "main.h"
/**
 *prime2 - inorder to get from 1 to n
 *@a: ev
 *@b: from 1 to n
 *Return: 1 on success and -1 on error
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 *is_prime_number - checks if number is prime
 *@n: intergers
 *Return: -1 on error and 1 on success
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
