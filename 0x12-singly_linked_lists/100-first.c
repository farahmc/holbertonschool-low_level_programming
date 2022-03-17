#include <stdio.h>

/**
 * before_main- print before the main function is executed
 * Description: print the given string before main function
 * Return: void
 */

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
