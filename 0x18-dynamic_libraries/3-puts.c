#include "main.h"
/**
 *_puts - a function that prints a string
 *@str: this is a string
 *Return: why
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
