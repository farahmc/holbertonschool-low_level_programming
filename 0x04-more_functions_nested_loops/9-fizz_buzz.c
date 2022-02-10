#include <stdio.h>

/**
 * main- print 1 to 100, replacing certain numbers with words
 *
 * Description: for loop printing 1 to 100
 * if statements replacing multiples of 3 and 5 with FizzBuzz
 * else statements replacing multiples of 3 with Fizz and
 * multiples of 5 with Buzz
 * followed by a new line
 *
 * Return: 0 for success
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			if (a != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
