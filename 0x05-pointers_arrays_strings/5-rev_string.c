#include "main.h"
/**
 *rev_string - the function entry point
 *@s: reverse the thing
 *Return: the string in reverse
 */
void rev_string(char *s)
{
	char revr = s[0];
	int fwd = 0;
	int x;

	while (s[fwd] != '\0')
		fwd++;
	for (x = 0; x < fwd; x++)
	{
		fwd--;
		revr = s[x];
		s[x] = s[fwd];
		s[fwd] = revr;
	}
}
