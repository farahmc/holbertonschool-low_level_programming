#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen- counts number of characters in string
 * @s: string to be counted
 *
 * Description: loop to count number of characters in string
 * that is lcated by a pointer
 *
 * Return: number of characters in string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;

	return (len);
}

/**
 * _strdup- copy a given string to a newly allocated space in memory
 * @str: string to be copied
 *
 * Description: malloc to allocate memory for length of string
 * loop to go through string and copy str to dest
 *
 * Return: Null if value of string is null
 * Null if insufficient memory available
 * a pointer to the duplicated string if success
 */

char *_strdup(char *str)
{
	int index = 0;
	char *dest;
	int len;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	dest = malloc(sizeof(*str) * (len + 1));

	if (dest == NULL)
		return (NULL);

	while (index <= len)
	{
		dest[index] = str[index];
		index = index + 1;
	}
	return (dest);
}

/**
 * new_dog- function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: store a copy of name and owner
 * create a new dog
 *
 * Return: null if the function fails
 * else return pointer to the newly allocated memory space
 * holding the new dog information
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *NewDog;

	NewDog = malloc(sizeof(dog_t));
	if (NewDog == NULL)
		return (NULL);

	NewDog->age = age;

	NewDog->name = _strdup(name);
	if (NewDog->name == NULL)
	{
		free(NewDog->name);
		free(NewDog);
		return (NULL);
	}

	NewDog->owner = _strdup(owner);
	if (NewDog->owner == NULL)
	{
		free(NewDog->owner);
		free(NewDog);
		return (NULL);
	}
	return (NewDog);
}
