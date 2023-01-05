#include "main.h"
/**
 *_print_rev_recursion - a fuction that prints a string in reverse
 *@s: string to print in reverse
 *Return: some
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
