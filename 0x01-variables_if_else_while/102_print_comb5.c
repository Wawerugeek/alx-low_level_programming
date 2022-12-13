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
				putchar(num1 / 10 + '0');
				putchar(num1 % 10 + '0');
				putchar(' ');
				putchar(num2 / 10 + '0');
				putchar(num2 % 10 + '0');

				if (num1 * 100 + num2 != 9899)
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
