#include "dog.h"
#include <stdlib.h>


/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Return: a pointer to the new dog created on sucess and NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dg;

	new_dg = malloc(sizeof(dog_t));

	if (new_dg == NULL)
		return (NULL);
	new_dg->name = name;
	new_dg->age = age;
	new_dg->owner = owner;
	return (new_dg);
}
