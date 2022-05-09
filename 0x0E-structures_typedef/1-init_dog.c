#include "dog.h"

/**
 * init_dog - check the code
 *
 * @d: pointer throughout dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->owner = owner;
	d->age = age;

}
