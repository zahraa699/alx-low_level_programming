#include "dog.h"

/**
 * init_dog - initialize of dog
 * @d: the dog to init
 * @name : the dog name
 * @age : the age of dog
 * @owner : owner's name of dog
 *
 * Description: Longer description of the function)?
 *
 * Return: returned value is void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
