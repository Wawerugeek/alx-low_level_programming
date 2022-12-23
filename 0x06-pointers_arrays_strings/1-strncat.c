#include "main.h"
/**
 *_strncat - function that concetanetes two strings
 *@n: bytes
 *@dest: pointer
 *@src: p too
 *Return: a pointer to the resultimg string
 */
char *_strncat(char *dest, char *src, int n)
{
	int noid = 0, j = 0
		;
	while (dest[noid])
	{
		noid++;
	}
	while (j < n && src[j])
	{
		dest[noid] = src[j];
		noid++;
		j++;
	}
	dest[noid + n + 1] = '\0';
	return (dest);
}
