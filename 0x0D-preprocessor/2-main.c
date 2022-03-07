#include <stdio.h>

/**
 * main- print the name of the file the exe was compiled from
 *
 * Description: print the name of the file the exe was compiled from
 * using __FILE__ macro
 *
 * Return: 0 is success
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
