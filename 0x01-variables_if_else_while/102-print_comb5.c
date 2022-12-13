#include <stdio.h>
/**
 *main - prints any two possible combinations
 *
 *Return: always 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num2 < 97; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 / 10 != 9 || num1 % 10 != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

