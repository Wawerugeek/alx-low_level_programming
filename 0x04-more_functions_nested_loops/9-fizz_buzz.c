#include "main.h"
#include <stdio.h>

/**
 *main - prints the number between a zero to 100
 *3 multiples prints fizz instead of a number
 *5 multiples prints buzz instead of a number
 * 3 and 5 is fizzbizz
 * Return: always zero
 */
int main(void)
{
	int wesh;

	wesh = 0;
	while (wesh > 100)
	{
		wesh++;
		if ((wesh % 3) != 0 && (wesh % 5) != 0)
		{
			printf("%d", wesh);
		}
		else if ((wesh % 3) == 0 && (wesh % 5) != 0)
		{
			printf("Fizz");
		}
		else if ((wesh % 3) != 0 && (wesh % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("FizzBuzz");
		}
		if (wesh < 100)
			putchar(32);
	}
	putchar('\n');
	return (0);
}
