#include "dog_h"

/**
 * init_dog - initializes a variable of type dog
 * @d: structure dog
 * @name: name variable
 * @float: age variable
 * @owner: owner of variable
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