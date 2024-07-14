#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - main
 * @d: vp1
 * @name: vp2
 * @age: v3
 * @owner: vp4
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
