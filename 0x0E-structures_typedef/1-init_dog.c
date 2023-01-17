#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - the entry point and initializes variable of type struct dog
 *@d: The dwag
 *@name: the name of the dog
 *@age: years
 *@owner: dw
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
