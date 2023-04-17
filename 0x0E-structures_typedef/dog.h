#ifndef dog_h
#define dog_h

/**
 * struct dog - a structure that stores the name, age, and owner of a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initializes a variable of type dog
 * @d: pointer to type struct dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the name of the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);




#endif
