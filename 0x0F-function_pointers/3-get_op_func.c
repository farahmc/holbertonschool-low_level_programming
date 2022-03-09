#include <stdio.h>
#include "3-calc.h"


/**
 * get_op_func- select correct function
 * @s: pointer to the operator used to select correct func
 *
 * Description: ops is an array of type struct,
 * while loop to see if s matches any of the listed mathematical operators,
 * if so, use the * associated function
 *
 * Return: 0 if s is null
 * else return the result of the function
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

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);

		i = i + 1;
	}
	return (0);
}
