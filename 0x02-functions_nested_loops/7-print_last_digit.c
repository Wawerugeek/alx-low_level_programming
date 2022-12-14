#include "main.h"
/**
 *print_last_digit - prints the last digit
 *@n: digit tp fimd place for
 *Return: The last digit
 */
int print_last_digit(int n)
{
	int lst;

	lst = n % 10;

	if (lst < 0)
	{
		lst = lst * -1;
	}
	_putchar(lst + '0');
	return (lst);
}
