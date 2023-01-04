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
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
		dest[i] = src[i];

	return (dest);
}
