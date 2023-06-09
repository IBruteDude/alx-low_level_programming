#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - determine the function associated with an operator
 * @s: input operator string
 * Return: function of operator, or NULL if none is found
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
	int i = 0;

	while (i < 6 - 1)
	{
		if (s != NULL && !strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
