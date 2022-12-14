#include "main.h"
/**
 *times_table - prints the times table
 *Return: NOTHING
 */
void times_table(void)
{
	int i, j, tes;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			tes = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (tes >= 10)
			{
				_putchar((tes / 10) + '0');
				_putchar((tes % 10) + '0');
			}
			else if (tes < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((tes % 10) + '0');
			}
			else
			{
				_putchar((tes % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
