#include "main.h"


char *_strchr(char *s, char c)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] != c)
			s = s + 1;
		else
			return(s);
	}

	if (s[count] == '\0')
		return (s);
	else
		return(0);
}
