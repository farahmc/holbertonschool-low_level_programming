#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	int count;

	while (*s != '\0')
	{
		count = 0;
		while (accept[count])
		{
			if (*s == accept[count])
				return (s);
			count = count + 1;
		}
		s = s + 1;
	}
	return (0);
}
