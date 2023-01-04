#include "main.h"
/**
 *_memcpy - copy memory area
 *@dest: dest mem area
 *@src: source mem
 *@n; bytes mem to cpy
 *Return: mem to replace
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
