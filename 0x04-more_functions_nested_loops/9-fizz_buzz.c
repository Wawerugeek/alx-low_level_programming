#include <stdio.h>
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
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 0; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", fb);
		else if (i % 3 == 0)
			printf("%s", f);
		else if (i % 5 == 0)
			printf("%s", b);
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
