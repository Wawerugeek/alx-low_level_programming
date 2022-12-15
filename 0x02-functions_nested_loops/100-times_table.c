#include "main.h"
/**
 *print_times_table - prints n times zero
 *@n: the character to be returned
 */
void print_times_table(int n)
{
	int x, y, cor;

	if (!(n > 15 || n < 0))
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				cor = (x * y);
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (cor < 10 && y != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((cor % 10) + '0');
				}
				else if (cor >= 10 && cor < 100)
				{
					_putchar(' ');
					_putchar((cor / 10) + '0');
					_putchar((cor % 10) + '0');
				}
				else if (cor >= 100 && y != 0)
				{
					_putchar((cor / 100) + '0');
					_putchar((cor / 10) % 10 + '0');
					_putchar((cor % 10) + '0');
				}
				else
					_putchar((cor % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

