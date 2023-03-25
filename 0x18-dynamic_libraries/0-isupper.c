#include "main.h"
/**
 *_isupper - function that checks upper case
 *@c: the interger returned
 *Return: 1 if upper case and 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
