#include "dog.h"
#include <stdlib.h>


/**
 * free_dog - frees struct dog
 * @d: pointer to struct dog that needs to be freed
 */
void free_dog(dog_t *d)
{
	free(d);
}

