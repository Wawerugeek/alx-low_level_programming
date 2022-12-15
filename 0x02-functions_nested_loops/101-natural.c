#include <stdio.h>

/**
 *main - prints sum of all multiples of 3 or 5 upro 1024;
 *Return: always (success)
 */
int main(void)
{
	int x, z = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			z += x;
		}
		x++;
	}
	printf("%d\n", z);
	return (0);
}
