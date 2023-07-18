#include "dog.h"
#include <stdlib.h>


/**
 * free_dog - fres yo  dawgs
 * @d: yo dawg
 *
 * Return: void.
 */


void free_dog(dog_t *d)
{

	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}

}
