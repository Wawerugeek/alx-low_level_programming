#include <stdio.h>
#include "3-calc.h"

/**
  * get_op_func - a  function that selects correct function to perform the
  * operation asked by the user. You’re not allowed to declare any other
  * function
  * @s: operator passed as argument to the program
  *
  * Return: a pointer to the function corresponds to the operator given as a
  * parameter
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*(ops[1].op) == *s)
		{
			return (ops[1].f);
		}
		i++;
	}
	return (0);
}
