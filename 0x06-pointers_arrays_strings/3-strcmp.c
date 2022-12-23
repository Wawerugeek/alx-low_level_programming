#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: string 1
 *@s2: second string
 *Return: value of int
 */
int _strcmp(char *s1, char *s2)
{
	int a, b, c, r = 0;
	int lim;

	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}
	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}
		c++;
	}
	return (r);
}
