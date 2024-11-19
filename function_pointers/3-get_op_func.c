#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - returns a ptr to the appropiate function
 * @s: operator given
 * Return: A pointer to the corresponding function per op given
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

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
