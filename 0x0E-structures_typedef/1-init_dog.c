#include <stdlib.h>
#include "dog.h"

/**
*init_dog - initialise variable
*@d: pointer to struct dog to initialise
*@name: name initialised
*@age: age initialised
*@owner: owner initialised
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
