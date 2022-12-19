#include "main.h"
/**
 *puts2 - function that prints every character
 *@str: the str
 *Return: every character
 */
void puts2(char *str)
{
	int evr = 0, wid = 0;

	while (str[evr])
		wid++;
	for (evr = 0; evr < wid; evr += 2)
		_putchar(str[evr]);

	_putchar('\n');
}
