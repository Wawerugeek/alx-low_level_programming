#include "main.h"
/**
 *print_numbers - print numbers upto 9 followed by a newline
 *Return: 0-9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}

