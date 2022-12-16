#include "main.h"
/**
 *print_square - a function that prints a square on a new line
 *@size: width and height;
 *Return; always nunge
 */
void print_square(int size)
{
	int wid, heg;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (wid = 1; wid <= size; wid++)
		{
			_putchar('#');
			for (heg = 2; heg <= size; heg++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
