#include "main.h"
/**
 *_pow_recursion - raises x to the power of y
 *@x: int first
 *@y: int second
 *Return: 1 on success and -1 on error:
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
