#include "main.h"
/**
 *_strlen - function returns the length of a string
 *@s: the st
 *Return: always a zzero
 */
int _strlen(char *s)
{
	int x = 1, size = 0;
	char set = s[0];

	while (set != '\0')
	{
		size++;
		set = s[x++];
	}
	return (size);
}
