#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: always 0 (sucess)
 */
int main(void)
{
	char c;

	for (c = 'z'; c <= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
