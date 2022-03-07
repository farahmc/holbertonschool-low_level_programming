#ifndef _DOG_
#define _DOG_

/**
 * struct dog - new type struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
