#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: always 0 (success)
 *
 */
int main(void)
{
	char c;
/*enter char*/
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
