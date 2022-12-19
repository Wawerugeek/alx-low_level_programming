#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - the program entry
 *Return: zero;
 */
int main(void)
{
	char str[100];
	int x = 0, ron = 0, add = 0;

	srand(time(NULL));

	for (x = 0; add <= 2644; x++)
	{
		ron = (rand() % 25) + 65;

		str[x] = ron;
		add = add + ron;
	}
	str[x++] = 2772 - add;
	str[x++] = '\0';

	printf("%s\n", str);

	return (0);
}
