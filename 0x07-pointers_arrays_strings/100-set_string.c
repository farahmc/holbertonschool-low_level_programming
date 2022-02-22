#include "main.h"

/**
* set_string- set the value of a pointer to char
* @s: pointer to change
* @to: value to change it to
*
* Description: set the value of a pointer to char
*
* Return: 0 is success
*/

void set_string(char **s, char *to);
{
	*s = to;
}
