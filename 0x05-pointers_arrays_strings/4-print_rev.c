#include "main.h"
/**
 *print_rev - prints the string in reverse
 *@s: input
 *Return: nunge
 */
void print_rev(char *s)
{
	int fuck = 0;
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		fuck++;
	}
	for (x = (fuck - 1); x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
