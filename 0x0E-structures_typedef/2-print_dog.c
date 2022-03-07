#include <stdio.h>
#include "dog.h"

/**
 * print_dog- function that prints a struct dog
 * @d: pointer to values entered in main func
 *
 * Description: print name, age and owner of dog
 * if an element is null, print nil instead of the element
 * if d is null, print nothing
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);

		if (d->age <= 0)
			printf("Age: (nil)");
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
