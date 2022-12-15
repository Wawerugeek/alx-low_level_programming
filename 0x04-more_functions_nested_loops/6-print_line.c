#include "main.h"
/**
 *print_line - prints the shortest distance between two lines
 *@n: input number forline l
 *Return: aALWAYS A ZERO
 */
void print_line(int n)
{
	int str;

	if (str <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (str = 1; str <= n; str++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
