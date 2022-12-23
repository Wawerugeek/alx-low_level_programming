#include "main.h"
#include <stdio.h>

/**
 *cap_string - the main function
 *@s: string
 *Return: nothing
 */
char *cap_string(char *s)
{
	int a = 0;
	int i;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;
		while (i < cspc)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				i++;
		}
		a++;
	}
	return (s);
}
