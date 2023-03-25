#include "main.h"
/**
 *_strcpy - function that copies the string pointed at c
 *@dest: destination
 *@src: striing source
 *Return: strin
 */
char *_strcpy(char *dest, char *src)
{
	char *steve = dest;

	while (*src)
	{
	*dest++ = *src++;
		*dest = 0;
	}

	return (steve);
}
