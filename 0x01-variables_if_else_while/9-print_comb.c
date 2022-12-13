#include <stdio.h>
#include <ctype.h>
/**
 *main - Entry point, prints all single digits with , followed by new line
 *
 *Return: Always 0 (sucess)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
	{
		putchar(num);
		if (num == 9)
		continue;
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
