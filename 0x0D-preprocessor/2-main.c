#include <stdio.h>
/**
 *main - print the name of the file it was compiled from
 *Return: always zero
 */

int main(void)
{

	printf("%s\n", _BASE_FILE_);
	return (0);
}
