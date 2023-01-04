#include "main.h"
/**
 *_memset - fill the memory with a constant byte
 *@s: memory area to fill
 *@b: constant byte
 *@n: bytes of memory to fill
 *Return: the memory to fill
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
