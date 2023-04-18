#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  a function that initialize a variable of type struct dog
 * @d: - takes a pointer to a struct dog
 * @name: the dogs name
 * @age : dog's age
 * @owner: dog's owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
