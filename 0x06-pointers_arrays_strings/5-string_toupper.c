#include "main.h"

/**
 * string_toupper- convert string to uppercase
 * @string: string to be converted
 *
 * Description: go to each character along a string
 * if it's between a and z, subtract 32 from the ascii value
 * giving the ascii value of the equivalent capital letter
 *
 * Return: string
 */

char *string_toupper(char *string)
{
	int count;

	count = 0;
	while (string[count] != '\0')
	{
		if (string[count] >= 'a' && string[count] <= 'z')
		{
			string[count] = string[count] - 32;
		}
		count = count + 1;
	}
	return (string);
}
