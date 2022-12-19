#include "main.h"
/**
 *puts_half - prints haalf of a string
 *@str: - ip
 *Return: half
 */
void puts_half(char *str)
{
	int s, m, w;

	w = 0;

	for (s = 0; str[s] != '\0'; s++)
		w++;
	m = (w / 2);

	if ((w % 2) == 1)
		m = ((w + 1) / 2);
	for (s = m; str[s] != '\0'; s++)
		_putchar(str[s]);
	_putchar('\n');
}
