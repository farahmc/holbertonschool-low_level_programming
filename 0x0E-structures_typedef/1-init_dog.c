#include <stdio.h>
#include "dog.h"

/**
 * init_dog- function to initialise a variable of type struct dog
 * @d: pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: initialise a variable of type struct dog
 *
 * Return: no return, void function
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
