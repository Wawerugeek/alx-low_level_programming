#include <unistd.h>
/**
 * _putchar - writes he character to c stdout
 *@c: the character to print
 *Return: sucess 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
