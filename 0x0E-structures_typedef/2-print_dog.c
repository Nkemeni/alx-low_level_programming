#include "dog.h"
#include  <stdio.h>

/**
 * print_dog - prints a the values of the different members of a struct dog
 * @d: pointer to struct dog
 *
 * Description: if an element of d is NULL, print nil in its place
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("\n Name: (nil)");
		else
			printf("\n Name: %s", d->name);
		if (d->age == 0.0)
			printf("\n Age: (nil)");
		else
			printf("\n Age: %.6f", d->age);
		if (d->owner == NULL)
			printf("\n Owner: (nil)\n");
		else
			printf("\n Owner: %s\n", d->owner);
	}
}

