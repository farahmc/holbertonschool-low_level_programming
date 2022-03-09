#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: pointer to function f
 *
 * Description: print a name using a function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
