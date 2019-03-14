#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - checks operation
 *
 * @s: operation func
 *
 * Return: result or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};
	int a = 0;

	while (ops[a].op != NULL)
	{
		if (ops[a].op[0] == s[0])
			return (ops[a].f);
		a++;
	}
	return (NULL);
}
