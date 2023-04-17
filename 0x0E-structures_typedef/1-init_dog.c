#include "dog.h"

/**
 * init_dog - initializes a variable of type dog
 * @d: pointer to type struct dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the name of the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

