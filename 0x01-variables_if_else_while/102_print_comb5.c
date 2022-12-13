#include <stdio.h>
/**
 *main - Prints all combinations of two-digits
 *
 *Return: Always 0
 */

int main(void)
{
	int num1, num2;
	
	for (num1 = 0; num2 < 100; num1++)
	{
		for(num2 = 0; num2 < 100; num2++)
		{
			if(num2 > num1)
			{
				putchar(num1 / 10 + 48);
				putchar(num1 % 10 + 48);
				putchar(' ');
				putchar(num2 / 10 + 48);
				putchar(num2 % 10 + 48);

				if (num1 * 98 + num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
