#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - returns the length of the string
 * @s: - the sring parameter
 *
 * Return: - length of the string upon success
 */

int _strlen(char *s)
{
	int j;

	for (j = 0 ; s[j] != '\0' ; j++)
	{
	}
	return (j);
}

/**
 * _strcpy - copies the string to dest
 * @dest: where the string will be copied
 * @src: string to be copied
 *
 * Return: dest upon success
 */

char *_strcpy(char *dest, char *src)
{
	int str_len;
	int j;

	for (str_len = 0 ; src[str_len] != '\0' ; str_len++)
	{
	}
	for (j = 0; j < str_len ; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: points to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	int length1;
	int length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog2 = malloc(sizeof(dog_t));

	if (dog2 == NULL)
	{
		return (NULL);
	}
	dog2->name = malloc(sizeof(char) * (length1 + 1));

	if (dog2->name == NULL)
	{
		free(dog2);
		return (NULL);
	}
	dog2->owner = malloc(sizeof(char) * (length2 + 1));

	if (dog2->owner == NULL)
	{
		free(dog2);
		free(dog2->name);
		return (NULL);
	}
	_strcpy(dog2->name, name);
	_strcpy(dog2->name, owner);
	dog2->age = age;

	return (dog2);
}

