#include "main.h"
/**
 *_strncpy - a function that copies a string
 *@dest: pointer
 *@src: source pointer
 *@n: input
 *Return: nothing
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (src[y])
	{
		y++;
	}
	while (x < n && src[x])
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
