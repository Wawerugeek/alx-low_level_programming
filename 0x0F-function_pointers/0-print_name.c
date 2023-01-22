#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prinat a name
 *@name: string
 *@f: ponter to function
 */

void print_name(char *name, void(*f)(char *))
{
	if (f != NULL)
	{
		(f) (name);
	}
}
