#include "main.h"
/**
 *print_triangle - print a triangle at a given siz
 *@size: size of the triangle to print
 *Returnn: always a nung
 */
void print_triangle(int size)
{
	int i, margin, dis, tp;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	dis = size - 1;
	for (i = 0; i < size; i++)
	{
		margin = 0;
		while (margin < dis - i)
		{
			_putchar(32);
			margin++;
		}
		tp = size - margin;

		while (tp > 0)
		{
			_putchar('#');
			tp--;
		}
		_putchar('\n');
	}
}
