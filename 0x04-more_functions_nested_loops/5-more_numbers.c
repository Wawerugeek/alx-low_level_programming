#include "main.h"
/**
 *more_numbers - function that prints 10 times the number
 *Return: always a zero
 */
void more_numbers(void)
{
	int i, mor;

	for (mor = 0; mor < 10; mor++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
