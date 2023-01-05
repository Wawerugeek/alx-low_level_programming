#include "main.h"
/**
 *comp1 - obtains length of the string
 *@a: string
 *@I: LEN
 *Return: 1 on success
 */
int comp1(char *a, int I)
{
	if (*a == 0)
		return (I - 1);
	return (comp1(a + 1, I + 1));
}
/**
 *comp2 - compares string vs string reverse
 *@a: string
 *@I: length
 *Return: 1 on success and -1 on error
 */
int comp2(char *a, int I)
{
	if (*a != *(a + I))
		return (0);
	else if (*a == 0)
		return (1);
	return (comp2(a + 1, I - 2));
}
/**
 *is_palindrome - checks if a string is palindrome
 *@s: string for evaluation
 *Return: 1 on succcess and -1 on error
 */
int is_palindrome(char *s)
{
	int I;

	I = comp1(s, 0);
	return (comp2(s, I));
}
