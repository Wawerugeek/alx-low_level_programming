#include "main.h"
/**
 *_strlen_recursion: returns the string length 
 *@s: String to be returned 
 *Return: on sucess 1
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
