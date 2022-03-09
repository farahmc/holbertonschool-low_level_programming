#include <stdio.h>
#include "3-calc.h"

/**
 * op_add- add 2 integers
 * @a: first int
 * @b: second int
 *
 * Description: add 2 integers
 *
 * Return: result of addition
 */

int op_add(int a, int b)
{
	int add = a + b;

	return (add);
}

/**
 * op_sub- subtract 2 integers
 * @a: first int
 * @b: second int
 *
 * Description: subtract 2 integers
 *
 * Return: result of subtraction
 */

int op_sub(int a, int b)
{
	int sub = a - b;

	return (sub);
}

/**
 * op_mul- multiply 2 integers
 * @a: first int
 * @b: second int
 *
 * Description: multiply 2 integers
 *
 * Return: result of multiplication
 */

int op_mul(int a, int b)
{
	int mul = a * b;

	return (mul);
}

/**
 * op_div- divide 2 integers
 * @a: first int
 * @b: second int
 *
 * Description: divide a by b
 *
 * Return: result of division
 */

int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}

/**
 * op_mod- divide 2 integers
 * @a: first int
 * @b: second int
 *
 * Description: divide a by b
 *
 * Return: leftover of division
 */

int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
