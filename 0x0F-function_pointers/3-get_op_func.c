#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - get function
 *
 * @s: operator
 * Return: pointer to correct function
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 6)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
