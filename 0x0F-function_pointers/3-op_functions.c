#include <stdio.h>
#include "3-calc.h"

int op_add(int a, int b)
{
	int add = a + b;
	return (add);
}

int op_sub(int a, int b)
{
	int sub = a - b;
	return (sub);
}

int op_mul(int a, int b)
{
	int mul = a * b;
	return (mul);
}

int op_div(int a, int b)
{
	int div = a / b;
	return (div);
}

int op_mod(int a, int b)
{
	int mod = a % b;
	return (mod);
}
