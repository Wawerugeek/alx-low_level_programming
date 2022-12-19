#include "main.h"
/**
 *puts2 - function that prints every character
 *@str: the str
 *Return: every character
 */
void puts2(char *str)
{
	int evr = 0;

	for (; str[evr] != '\0' ; evr++)
	{
		if ((evr % 2) == 0)
			_putchar(str[evr]);
		else
			continue;
	}

	_putchar('\n');
}
