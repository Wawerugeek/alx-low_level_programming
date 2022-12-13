#include <stdio.h>
/**
 *main - prints numbers possible combos
 *
 *Return: Always 0;
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; i <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
