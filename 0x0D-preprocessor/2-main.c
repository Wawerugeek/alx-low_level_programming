#include <stdio.h>

/**
 *main - print the name of the file it was compiled from
 *Return: always zero
 */

int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
