#include "main.h"
/**
 *_isdigit -checks for a digit through 9
 *@c: digit to be checked
 *Return: 1 if c is adigit and o if otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
