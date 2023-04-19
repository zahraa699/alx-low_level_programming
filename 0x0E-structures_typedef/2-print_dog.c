#include "dog.h"
#include <stdio.h>

/**
 * print_dog - this function prints dog details
 * @d: the dog to print details
 *
 * Description: Longer description of the function)?
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
