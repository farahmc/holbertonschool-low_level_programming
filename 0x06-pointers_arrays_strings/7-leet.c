#include "main.h"

/**
 * replace- replace array in before to array in after
 * @c: pointer to characters coming in
 *
 * Description: loop to go through characters, if matches
 * chars in before array, replace with chars in after array
 *
 * Return: 0 is success
 */

void replace(char *c)
{
	int count;
	int before[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int after[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	count = 0;
	while (count < 10)
	{
		if (*c == before[count])
			*c = after[count];
		count = count + 1;
	}
}

/**
 * leet- replace string with 1337 speak
 * @s: pointer to string
 *
 * Description: loop to go through each received char
 * in string, perform replace function as above
 *
 * Return: string to main function
 */

char *leet(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		replace(&s[count]);
		count = count + 1;
	}
	return (s);
}
