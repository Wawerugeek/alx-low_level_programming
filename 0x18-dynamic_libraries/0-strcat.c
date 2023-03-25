#include "main.h"
/**
 *_strcat - function that joins two functions
 *@dest: pointer
 *@src: pointer
 *Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int noid = 0, i;

	while (dest[noid])
	{
		noid++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[noid] = src[i];
		noid++;
	}
	dest[noid] = '\0';
	return (dest);
}
