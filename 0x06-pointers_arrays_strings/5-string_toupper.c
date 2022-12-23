#include "main.h"
/**
 *string_toupper - converts lower to upper
 *@p: string will be modified
 *Return: a char type
 */
char *string_toupper(char *p)
{
	int x = 0;

	while (p[x])
	{
		if (p[x] >= 97 && p[x] <= 122)
		{
			p[x] -= 32;
		}
		x++;
	}
	return (p);
}
