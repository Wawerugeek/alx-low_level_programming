#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: string 1
 *@s2: second string
 *Return: value of int
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0, r = 0;

	while (s1[c] == s2[c] && s1[c] != '\0' && s2[c] != '\0')
		c++;
	if (s1[c] != s2[c])
		r = s1[c] - s2[c];
	return (r);
}
